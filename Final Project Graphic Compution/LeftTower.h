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
*                                             Draws the left tower it self                                             *
*                                                                                                                      *
***********************************************************************************************************************/
//crown spikes part
void draw_LeftTower_Crown_Spikes_Part() {

    //top

    glBegin(GL_LINE_LOOP);

    glVertex3f(0, 0, 0);
    glVertex3f(5, 0, 0);      //     adds 2.5px width
    glVertex3f(5, 5, 0);//     adds 2.5px height
    glVertex3f(0, 5, 0);      //     removes 2.5px width

    //sets the ending of the draw
    glEnd();

    //bot

    glBegin(GL_LINE_LOOP);


    glVertex3f(0, 0, 1.5);
    glVertex3f(5, 0, 1.5);      //     adds 2.5px width
    glVertex3f(5, 5, 1.5);//     adds 2.5px height
    glVertex3f(0, 5, 1.5);      //     removes 2.5px width

    //sets the ending of the draw
    glEnd();

    //front

    glBegin(GL_LINE_LOOP);

    glVertex3f(0, 0, 0);
    glVertex3f(5, 0, 0);      //     adds 2.5px width
    glVertex3f(5, 0, 1.5);//     adds 2.5px height
    glVertex3f(0, 0, 1.5);      //     removes 2.5px width

    //sets the ending of the draw
    glEnd();

    //back

    glBegin(GL_LINE_LOOP);

    glVertex3f(0, 5, 0);      //     adds 2.5px width
    glVertex3f(5, 5, 0);//     adds 2.5px height
    glVertex3f(5, 5, 1.5);//     adds 2.5px height
    glVertex3f(0, 5, 1.5);      //     adds 2.5px width

    //sets the ending of the draw
    glEnd();

    //left

    glBegin(GL_LINE_LOOP);

    glVertex3f(0, 0, 0);      //     adds 2.5px width
    glVertex3f(0, 5, 0);//     adds 2.5px height
    glVertex3f(0, 5, 1.5);//     adds 2.5px height
    glVertex3f(0, 0, 1.5);      //     adds 2.5px width

    //sets the ending of the draw
    glEnd();

    //right

    glBegin(GL_LINE_LOOP);

    glVertex3f(5, 0, 0);      //     adds 2.5px width
    glVertex3f(5, 5, 0);//     adds 2.5px height
    glVertex3f(5, 5, 1.5);//     adds 2.5px height
    glVertex3f(5, 0, 1.5);      //     adds 2.5px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered


}

//crown outside part
void draw_LeftTower_Crown() {

    //makes a cycle where since the point 5px away from the origin in the x axis
    //until it reach 5px before the end of the x axis draw
    for (GLfloat i = 0; i < 40; i += 5) {

        /*
         * save the matrix status
         * translate the figure
         *      i units for the x value
         * draw_LeftTower_Crown_Spikes_Part()
         * translate the figure
         *      35 units for the y value
         * draw_LeftTower_Crown_Spikes_Part()
         * every vertex non modified keeps the same as it was, but the modified ones are changed
         * */
        glPushMatrix();
        glTranslatef(i, 0, 0);
        draw_LeftTower_Crown_Spikes_Part();
        glTranslatef(0, 35, 0);
        draw_LeftTower_Crown_Spikes_Part();
        glPopMatrix();

    }

    //makes a cycle where since the point 5px away from the origin in the y axis
    //until it reach 5px before the end of the y axis draw
    for (GLfloat i = 5; i < 35; i += 5) {

        /*
         * save the matrix status
         * translate the figure
         *      i units for the y value
         * draw_LeftTower_Crown_Spikes_Part()
         * translate the figure
         *      35 units for the x value
         * draw_LeftTower_Crown_Spikes_Part()
         * every vertex non modified keeps the same as it was, but the modified ones are changed
         * */
        glPushMatrix();
        glTranslatef(0, i, 0);
        draw_LeftTower_Crown_Spikes_Part();
        glTranslatef(35, 0, 0);
        draw_LeftTower_Crown_Spikes_Part();
        glPopMatrix();

    }

}

/**********************************************************************/
//trapdoor
void draw_LeftTower_Trapdoor() {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    glVertex3f(0, 0, 0);
    glVertex3f(10, 0, 0);       //     adds 10px width
    glVertex3f(10, 10, 0);  //     adds 10px height
    glVertex3f(0, 10, 0);       //     removes 10x width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered


}