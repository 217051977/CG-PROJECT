//makes the program where this header will be used add it just one time this header to it
#pragma once

//Check which type of machine the code is working in and include/import the necessary library(s)
#include <iostream>
#ifdef __APPLE__
#  include <OpenGL/glu.h>
#  include <GLUT/glut.h>
#else
#  include <GL/glut.h>
#endif

//keyboard input function
void keyInput(unsigned char key, int x, int y) {

    switch (key) {

        // if the key 27 (escape) has been pressed, the program ends
        case 27: {

            exit(0);

        } break;

    }

}