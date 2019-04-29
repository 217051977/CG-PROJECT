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

/***********************************************************************************************************************
*                                                                                                                      *
*                                                Draws the castle road                                                 *
*                                                                                                                      *
***********************************************************************************************************************/
//delivery road
void draw_Castle_Road(GLfloat xSize, GLfloat ySize) {

    /*
     * save the matrix status
     * increase the figure size by
     *      xSize times of the x value
     *      ySize times of the y value
     * create_Bot_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glScalef(xSize, ySize, 0);
    create_Bot_Face();
    glPopMatrix();

}