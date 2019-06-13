#include <fstream>

#include "getbmp.h"

// Routine to read an uncompressed 24-bit color RGB bmp file into a
// 32-bit color RGBA bitmap file (A value being set to 1).
BitMapFile* getbmp(string fileName) {

    int offset;
    int headerSize;

/*
 *  initialize the bitMap files for RGB (input)
 *  initialize the bitMap files for RGBA (output)
 * */
    BitMapFile* bmpRGB = new BitMapFile;
    BitMapFile* bmpRGBA = new BitMapFile;

//  read input b,p fileName
    ifstream infile(fileName.c_str(), ios::binary);

    if (infile.fail()) {

        exit(1);

    }

//  get starting point of the image data in bmp file
    infile.seekg(10);
    infile.read((char*) &offset, 4);

//  get header size of bmp file
    infile.read((char*) &headerSize, 4);

//  get, from the bmp file header, the image size
    infile.seekg(18);
    infile.read((char*) &bmpRGB->sizeX, 4);
    infile.read((char*) &bmpRGB->sizeY, 4);

/*
 *  Determine the length of the zero-byte padding of the scanLines
 *  (Each scanLine of a bmp file is 4-byte aligned by padding with zeros)
 * */
    int padding = (3 * bmpRGB->sizeX) % 4 ? 4 -(3 * bmpRGB->sizeX) % 4 : 0;

//  Add a padding to determinate size of each scanLine
    int sizeScanLine = 3 * bmpRGB->sizeX + padding;

//  Allocate storage for image in input bitmap file
    int sizeStorage = sizeScanLine * bmpRGB->sizeY;
    bmpRGB->data = new unsigned char[sizeStorage];

//  Read bmp file image data into input bitmap file
    infile.seekg(offset);
    infile.read((char*) bmpRGB->data, sizeStorage);

//  Reverse color values from BRG (bmp storage format) to RGB
    int startScanLine;
    int endScanLineImageData;
    int temp;

    for (int y = 0; y < bmpRGB->sizeY; y++) {

/*
 *      Start position of y'th scanLine
 *      Image data excludes padding
 * */
        startScanLine = y * sizeScanLine;
        endScanLineImageData = startScanLine + 3 * bmpRGB->sizeX;

        for (int x = startScanLine; x < endScanLineImageData; x += 3) {

            temp = bmpRGB->data[x];
            bmpRGB->data[x] = bmpRGB->data[x + 2];
            bmpRGB->data[x + 2] = temp;

        }

    }

//  Set image sizes and allocate storage for image in output bitmap file
    bmpRGBA->sizeX = bmpRGB->sizeX;
    bmpRGBA->sizeY = bmpRGB->sizeY;
    bmpRGBA->data = new unsigned char[4 * bmpRGB->sizeX * bmpRGB->sizeY];

//  Copy RGB data from input to output bitmap files, set output A to 1
    for (int i = 0; i < 4 * bmpRGB->sizeX * bmpRGB->sizeY; i += 4) {

        bmpRGBA->data[i] = bmpRGB->data[(i / 4) * 3];
        bmpRGBA->data[i + 1] = bmpRGB->data[(i / 4) * 3 + 1];
        bmpRGBA->data[i + 2] = bmpRGB->data[(i / 4) * 3 + 2];
        bmpRGBA->data[i + 3] = 0xFF;

    }

    return bmpRGBA;

}