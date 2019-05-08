/***********************************************************************************************************************
*                                                                                                                      *
*                                                       Stores.h                                                       *
*                                                                                                                      *
*                                 This file is responsible to create the castle stores                                 *
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

//delivery road
void draw_Store(GLfloat xSize, GLfloat ySize) {

    /*
     * save the matrix status
     * increase the figure size by
     *     xSize times of the x value
     *     ySize times of the y value
     *     15 times of the z value
     * draw_6_Faces_Figure()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * */
    glPushMatrix();
    glScalef(xSize, ySize, 15);
    draw_6_Faces_Figure();
    glPopMatrix();

}