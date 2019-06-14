/***********************************************************************************************************************
*                                                                                                                      *
*                                                     DeliverRoad.h                                                    *
*                                                                                                                      *
*                                 This file is responsible to create the delivery road                                 *
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

void draw_FrontDoor_Tower_Roof() {

    /*
     * save the matrix status
     * translate the figure
     *      100 units for the z axis
     *
     * sets the beginning with only the lines that surrounds it
     * draw_Circle()
     * draw_Circle()
     * draw_Circle()
     * sets the ending of the draw connecting the first vertex draw with the last
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(0, 0, 100);
    glBegin(GL_LINE_LOOP);

    draw_Circle(0, 2 * PI, 5, 5, 0);
    draw_Circle(0, 2 * PI, 3, 3, 5);
    draw_Circle(0, 2 * PI, 1, 1, 10);

    glEnd();
    glPopMatrix();

}

void draw_FrontDoor_Tower_Body() {

    /*
     * save the matrix status
     * increase the figure size by
     *     5 times of the x value
     *     5 times of the y value
     *     100 times of the z value
     * draw_Cylinder_Figure()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * */
    glPushMatrix();
    glScalef(5, 5, 100);

    draw_Cylinder_Figure();

    glPopMatrix();

}

void draw_FrontDoor() {

    /*
     * save the matrix status
     * translate the figure
     *      2.5 for the x value
     *      2.5 for the y value
     * draw_FrontDoor_Tower_Roof()
     * draw_FrontDoor_Tower_Body()
     *
     * translate the figure
     *      35 for the x value
     * draw_FrontDoor_Tower_Roof()
     * draw_FrontDoor_Tower_Body()
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(2.5, 2.5, 0);
    draw_FrontDoor_Tower_Roof();
    draw_FrontDoor_Tower_Body();

    glTranslatef(35, 0, 0);
    draw_FrontDoor_Tower_Roof();
    draw_FrontDoor_Tower_Body();

    glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      7 for the x value
     * draw_Gate()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */

	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[1]);

    glPushMatrix();
    glTranslatef(7, 0, 0);
    draw_Delivery_Gate_Left_Door(delivery_Door_Angle);
    draw_Delivery_Gate_Right_Door(-delivery_Door_Angle);
    glPopMatrix();

}