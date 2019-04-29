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
*                                          Draws the old castle walls it self                                          *
*                                                                                                                      *
***********************************************************************************************************************/
//castle old tower roof
void draw_Castle_OldTower_Roof(GLfloat radios, GLfloat xSize) {

    /*
     * save the matrix status
     * translate the figure
     *      xSize for the x value
     *      200 for the z value
     *
     * sets the beginning with only the lines that surrounds it
     *
     * while the size is bigger than one, decrease 2 units and increase 5 units in height
     *      call the function draw_Circle()
     *
     * sets the ending of the draw connecting the first vertex draw with the last
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(xSize, 0, 200);
    glBegin(GL_LINE_LOOP);
    for (GLfloat i = radios, h = 0; i > 1; i -= 2, h += 5) {

        draw_Circle(0, 2 * PI, i, i, h);

    }
    glEnd();
    glPopMatrix();

}

//castle old tower body
void draw_Castle_OldTower_Body(GLfloat radios, GLfloat height) {

    /*
     * save the matrix status
     * increase the figure size by
     *     radios times of the x value
     *     radios times of the y value
     *     height times of the z value
     * draw_Cylinder_Figure()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * */
    glPushMatrix();
    glScalef(radios, radios, height);

    draw_Cylinder_Figure();

    glPopMatrix();

}

//castle old tower side top
void draw_Castle_OldTower_Left(GLfloat size) {

//  draw_Castle_OldTower_Roof()
    draw_Castle_OldTower_Roof(size / 2, -size - 5);

    /*
     * save the matrix status
     * translate the figure
     *      -size - 5 for the x value
     *      150 for the z value
     * draw_Castle_OldTower_Body()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(-size - 5, 0, 150);
    draw_Castle_OldTower_Body(size / 2, 50);
    glPopMatrix();

}

//castle old tower side top
void draw_Castle_OldTower_Central(GLfloat size) {

//  draw_Castle_OldTower_Roof()
    draw_Castle_OldTower_Roof(size, 0);

//  draw_Cylinder_Figure()
    draw_Castle_OldTower_Body(size, 200);

}

//castle old tower side top
void draw_Castle_OldTower_Right(GLfloat size) {

//  draw_Castle_OldTower_Roof()
    draw_Castle_OldTower_Roof(size / 2, size + 5);

    /*
     * save the matrix status
     * translate the figure
     *      -size - 5 for the x value
     *      150 for the z value
     * draw_Castle_OldTower_Body()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(size + 5, 0, 150);
    draw_Castle_OldTower_Body(size / 2, 50);
    glPopMatrix();

}