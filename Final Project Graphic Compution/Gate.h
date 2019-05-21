/***********************************************************************************************************************
*                                                                                                                      *
*                                                        Gate.h                                                        *
*                                                                                                                      *
*                                  This file is responsible to create the front gate                                   *
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

//flag
void draw_Flag() {

    glPushMatrix();
    glTranslatef(0, 0, 0);
    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    glVertex3f(0, 0, 0);
    glVertex3f(5, -5, 0);    //     adds 5px width and removes 5px height

    //sets the ending of the draw
    glEnd();

    glPopMatrix();

}

//flag holder
void draw_Flag_Holder() {

    /*
     * save the matrix status
     * increase the figure size by
     *     10 times of the x value
     *     10 times of the y value
     *     70 times of the z value
     * draw_6_Faces_Figure()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * */
    glPushMatrix();
    glScalef(10, 10, 53.6);
    draw_6_Faces_Figure();
    glPopMatrix();


}

void draw_Entrance_Gate_Left_Door(float angle) {

    glPushMatrix();
    glRotatef(angle, 0, 0, 1);
    glScalef(100, 2.5, 100);
    create_Left_Door();
    glPopMatrix();

}

void draw_Entrance_Gate_Right_Door(float angle) {

    glPushMatrix();
    glTranslatef(100, 0, 0);
    glRotatef(angle, 0, 0, 1);
    glTranslatef(-100, 0, 0);
    glScalef(100, 2.5, 100);
    create_Right_Door();
    glPopMatrix();

}

void draw_Delivery_Gate_Left_Door(float angle) {

    glPushMatrix();
    glRotatef(angle, 0, 0, 1);
    glScalef(26, 2.5, 75);
    create_Left_Door();
    glPopMatrix();

}

void draw_Delivery_Gate_Right_Door(float angle) {

    glPushMatrix();
    glTranslatef(26, 0, 0);
    glRotatef(angle, 0, 0, 1);
    glTranslatef(-26, 0, 0);
    glScalef(26, 2.5, 75);
    create_Right_Door();
    glPopMatrix();

}