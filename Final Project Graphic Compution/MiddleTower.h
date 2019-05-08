/***********************************************************************************************************************
*                                                                                                                      *
*                                                     MiddleTower.h                                                    *
*                                                                                                                      *
*                                 This file is responsible to create the middle tower                                  *
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

//body bottom
void draw_MiddleTower_Body_Bottom() {

    draw_6_Faces_Figure();

}

//body middle
void draw_MiddleTower_Body_Middle() {

    draw_6_Faces_Figure();

}

//body top
void draw_MiddleTower_Body_Top() {

    draw_6_Faces_Figure();

}

//body bottom pyramid spikes
void draw_MiddleTower_Body_Bottom_Spikes() {

	draw_Piramidal_Figure();

}

//crown
void draw_MiddleTower_Crown() {

    draw_6_Faces_Figure();

}

//crown spike
void draw_MiddleTower_Crown_Spike() {

    draw_6_Faces_Figure();

}

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

}