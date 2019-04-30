/***********************************************************************************************************************
*                                                                                                                      *
*                                                      KeyInput.h                                                      *
*                                                                                                                      *
*                                  This file is responsible manage the keyboard input                                  *
*                                                                                                                      *
************************************************************************************************************************
*                                                                         *                                            *
*                               GROUP MEMBERS:                            *         GROUP MEMBERS' NUMBERS:            *
*                                                                         *                                            *
*                           Bruno Miguel Dias Leal                        *               Nº 21705197                  *
*              Diana Margarida Simões Soares da Silva de Jesus            *               Nº 21703012                  *
*                                                                         *                                            *
***********************************************************************************************************************/

//makes the program where this header will be used add it just one time this header to it
#pragma once

//keyboard input function
void keyInput(unsigned char key, int x, int y) {

    switch (key) {

        // if the key 27 (escape) has been pressed, the program ends
        case 27: {

            exit(0);

        } break;

    }

}