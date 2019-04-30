/***********************************************************************************************************************
*                                                                                                                      *
*                                                     RightTower.h                                                     *
*                                                                                                                      *
*                                  This file is responsible to create the right tower                                  *
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

//bottom (bottom cover)
void draw_RightTower_Bottom() {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    glVertex3f(0, 0, 0);            //                          start

    glVertex3f(57, 0, 0);       //     adds 57px width      right
    glVertex3f(57, 57, 0);  //     adds 57px height     up
    glVertex3f(0, 57, 0);       //     removes 57px width   left
    glVertex3f(0, 7, 0);        //     removes 50px height  down

    glVertex3f(50, 7, 0);   //     adds 50px width      right
    glVertex3f(50, 50, 0);  //     adds 43px width      up
    glVertex3f(7, 50, 0);   //     removes 43px width   left
    glVertex3f(7, 14, 0);   //     removes 36px height  down

    glVertex3f(43, 14, 0);  //     adds 36px width      right
    glVertex3f(43, 43, 0);  //     adds 29px width      up
    glVertex3f(14, 43, 0);  //     removes 29px width   left

    /**********************************************************************/

    glVertex3f(14, 41, 0);  //     removes 2px height   down

    /**********************************************************************/

    glVertex3f(41, 41, 0);  //     adds 27px width      right
    glVertex3f(41, 16, 0);  //     removes 25px height  down
    glVertex3f(9, 16, 0);   //     removes 25px width   left
    glVertex3f(9, 48, 0);   //     adds 32px width      up

    glVertex3f(48, 48, 0);  //     adds 39px width      right
    glVertex3f(48, 9, 0);   //     removes 39px width   down
    glVertex3f(2, 9, 0);    //     removes 46px height  left
    glVertex3f(2, 55, 0);   //     adds 46px width      up

    glVertex3f(55, 55, 0);  //     adds 57px width      right
    glVertex3f(55, 2, 0);   //     removes 57px width   down
    glVertex3f(0, 2, 0);        //     removes 55px width   left

    //sets the ending of the draw
    glEnd();

}