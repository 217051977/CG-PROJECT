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

/*
 * window minimum value view
 *      x
 *      y
 * */
GLfloat X_MIN_VIEW = 0, Y_MIN_VIEW = 0;
/*
 * window maximum value view
 *      x
 *      y
 * */
GLfloat X_MAX_VIEW = 1000, Y_MAX_VIEW = 1000;
/*
 * window near value view
 * */
GLfloat Z_NEAR_VIEW = -1000;
/*
 * window far value view
 * */
GLfloat Z_FAR_VIEW = 1000;

// reshapes the OpenGL window
void resize(int w, int h) {

    //set the view -> in this case it fills all the OpenGL Window
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    //set to the matrix projection style
    glMatrixMode(GL_PROJECTION);
    //reset the matrix for an identity one
    glLoadIdentity();
    //set the orthographic view (perpendicular) with the size:
    //x_min, x_max, y_min, y_max, z_min, z_max (from the observer perspective!)
    //AKA -> left, right, top, down, near, far
//    glRotatef(80, 1, 0, 0);
//    glRotatef(80, 0, 0, 1);
    glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW, Z_FAR_VIEW);
    glTranslatef(100, 100, 0);

    glMatrixMode(GL_MODELVIEW);
}