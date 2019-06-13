#pragma once

#include <cstdio>
#include <cstdlib>

using namespace std;

struct BitMapFile {

    int sizeX;
    int sizeY;
    unsigned char* data;

};

BitMapFile* getbmp(string fileName);