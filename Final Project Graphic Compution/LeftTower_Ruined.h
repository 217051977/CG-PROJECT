/***********************************************************************************************************************
*                                                                                                                      *
*                                                  LeftTower_Ruined.h                                                  *
*                                                                                                                      *
*                               This file is responsible to create the ruined left tower                               *
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

//bottom
void draw_LeftTower_Ruined_Bottom() {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    glVertex3f(0, 0, 0);
    glVertex3f(30, 0, 0);       //     adds 30px width
    glVertex3f(30, 30, 0);  //     adds 30px height
    glVertex3f(0, 30, 0);       //     removes 30px width

    //sets the ending of the draw
    glEnd();

}

/**********************************************************************/
//stairway steps horizontal
void draw_LeftTower_Ruined_Stairway_Steps() {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    glVertex3f(0, 0, 0);
    glVertex3f(3.5, 0, 0);      //     adds 3.5px width
    glVertex3f(3.5, 5, 0);  //     adds 5px height
    glVertex3f(0, 5, 0);        //     removes 3.5px width

    //sets the ending of the draw
    glEnd();

}

//stairway steps vertical
void draw_LeftTower_Ruined_Stairway_Steps_Vertical() {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    glVertex3f(0, 0, 0);
    glVertex3f(5, 0, 0);    //     adds 5px width
    glVertex3f(5, 3, 0);//     adds 3px height
    glVertex3f(0, 3, 0);    //     removes 5px width

    //sets the ending of the draw
    glEnd();

}

//stairway
void draw_LeftTower_Ruined_Stairway() {

    //makes a cycle where since the point 5px away from the origin in the x axis
    //until it reach 5px before the end of the x axis draw
    for (GLfloat i = 0; i < 9; i += 3.5) {

        glPushMatrix();
        glTranslatef(i, 0, 0);
        draw_LeftTower_Ruined_Stairway_Steps();
        glTranslatef(0, 11, 0);
        draw_LeftTower_Ruined_Stairway_Steps();
        glPopMatrix();

    }

    //draws a 2 step apart stairway on the right giving the idea that is broken

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    glVertex3f(11, 5, 0);   //     adds 11px width and 5px height
    glVertex3f(16, 5, 0);   //     adds more 5px width
    glVertex3f(16, 8, 0);   //     adds more 3px height
    glVertex3f(11, 8, 0);   //     removes 5px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered


    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    glVertex3f(11, 11, 0);  //     adds 11px both width and height
    glVertex3f(16, 11, 0);  //     adds more 5px width
    glVertex3f(16, 16, 0);  //     adds more 5px height
    glVertex3f(11, 16, 0);  //     removes 5px width

    //sets the ending of the draw
    glEnd();

}

/**********************************************************************/
//head
void draw_LeftTower_Ruined_Head() {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    glVertex3f(0, 0, 0);
    glVertex3f(20, 0, 0);       //     adds 20px width
    glVertex3f(20, 20, 0);  //     adds 20px height
    glVertex3f(0, 20, 0);       //     removes 20px width

    //sets the ending of the draw
    glEnd();

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    glVertex3f(2, 2, 0);    //     adds 2 both in width and height
    glVertex3f(18, 2, 0);   //     adds more 16px width
    glVertex3f(18, 18, 0);  //     adds more 16px height
    glVertex3f(2, 18, 0);   //     removes 16px width

    //sets the ending of the draw
    glEnd();

    glPushMatrix();
    glTranslatef(2, 2, 0);
    draw_LeftTower_Ruined_Stairway();
    glPopMatrix();

}