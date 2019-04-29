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

#include "Faces.h"

/***********************************************************************************************************************
************************************************************************************************************************
*                                                     Draw figures                                                     *
************************************************************************************************************************
***********************************************************************************************************************/
//draw 6 faces figure
void draw_6_Faces_Figure() {

    /*
     * save the matrix status
     * increase the figure size by
     *      xSize times of the x value
     *      ySize times of the y value
     *      zSize times of the z value
     *
     * save the matrix status
     * translate the figure
     *      1 unit for the z axis
     * create_Bot_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * create_Bot_Face()
     *
     * create_Front_Face()
     *
     * save the matrix status
     * translate the figure
     *      1 unit for the y axis
     * create_Front_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * create_Left_Face()
     *
     * save the matrix status
     * translate the figure
     *      1 unit for the x axis
     * create_Left_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();

    //top
    glPushMatrix();
    glTranslatef(0, 0, 1);
    create_Bot_Face();
    glPopMatrix();

    //bot
    create_Bot_Face();

    //front
    create_Front_Face();

    //back
    glPushMatrix();
    glTranslatef(0, 1, 0);
    create_Front_Face();
    glPopMatrix();

    //left
    create_Left_Face();

    //right
    glPushMatrix();
    glTranslatef(1, 0, 0);
    create_Left_Face();
    glPopMatrix();

    glPopMatrix();

}

//draw cylinder figure
void draw_Cylinder_Figure() {

    /*
     * save the matrix status
     * increase the figure size by
     *      radios times of the x value
     *      radios times of the y value
     *      height times of the z value
     *
     * sets the beginning with only the lines that surrounds it
     * draw_Circle()
     * draw_Circle()
     * sets the ending of the draw connecting the first vertex draw with the last
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */

    glBegin(GL_LINE_LOOP);
    draw_Circle(0, 2 * PI, 1, 1, 0);
    draw_Circle(0, 2 * PI, 1, 1, 1);
    glEnd();

}