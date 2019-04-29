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
*                                            Draws the middle tower it self                                            *
*                                                                                                                      *
***********************************************************************************************************************/

//outside crown spikes part
void draw_MiddleTower_Bottom_Crown_Spikes_Part() {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    glVertex3f(0, 0, 0);
    glVertex3f(5, 0, 0);        //     adds 5px width
    glVertex3f(5, 5, 0);    //     adds 5px height
    glVertex3f(0, 5, 0);        //     removes 5px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered


}

//outside crown part
void draw_MiddleTower_Bottom_Crown() {

    //makes a cycle where since the point 5px away from the origin in the x axis
    //until it reach 5px before the end of the x axis draw
    for (GLfloat i = 0; i < 30; i += 5) {

        glPushMatrix();
        glTranslatef(i, 0, 0);
        draw_MiddleTower_Bottom_Crown_Spikes_Part();
        glTranslatef(0, 25, 0);
        draw_MiddleTower_Bottom_Crown_Spikes_Part();
        glPopMatrix();

    }

    //makes a cycle where since the point 5px away from the origin in the y axis
    //until it reach 5px before the end of the y axis draw
    for (GLfloat i = 5; i < 25; i += 5) {

        glPushMatrix();
        glTranslatef(0, i, 0);
        draw_MiddleTower_Bottom_Crown_Spikes_Part();
        glTranslatef(25, 0, 0);
        draw_MiddleTower_Bottom_Crown_Spikes_Part();
        glPopMatrix();

    }

}

/**********************************************************************/
//inside crown spikes part
void draw_MiddleRight_Tower_Crown_Spikes_Part() {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    glVertex3f(0, 0, 0);
    glVertex3f(5, 0, 0);        //     adds 5px width
    glVertex3f(5, 5, 0);    //     adds 5px height
    glVertex3f(0, 5, 0);        //     removes 5px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered


}

//inside crown part
void draw_MiddleRight_Tower_Crown() {

    //makes a cycle where since the point 5px away from the origin in the x axis
    //until it reach 5px before the end of the x axis draw
    for (GLfloat i = 0; i < 15; i += 5) {

        glPushMatrix();
        glTranslatef(i, 0, 0);
        draw_MiddleRight_Tower_Crown_Spikes_Part();
        glTranslatef(0, 10, 0);
        draw_MiddleRight_Tower_Crown_Spikes_Part();
        glPopMatrix();

    }

    //makes a cycle where since the point 5px away from the origin in the y axis
    //until it reach 5px before the end of the y axis draw
    for (GLfloat i = 5; i < 10; i += 5) {

        glPushMatrix();
        glTranslatef(0, i, 0);
        draw_MiddleRight_Tower_Crown_Spikes_Part();
        glTranslatef(10, 0, 0);
        draw_MiddleRight_Tower_Crown_Spikes_Part();
        glPopMatrix();

    }

}

/**********************************************************************/
//banner
void draw_MiddleTower_Banner() {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    glVertex3f(0, 0, 0);
    glVertex3f(15, 0, 0);       //     adds 15px width
    glVertex3f(15, -1, 0);   //     removes 1px height
    glVertex3f(0, -1, 0);        //     removes 15px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered


}