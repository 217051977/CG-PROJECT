/***********************************************************************************************************************
*                                                                                                                      *
*                                                     CastleRoads.h                                                    *
*                                                                                                                      *
*                                 This file is responsible to create the castle roads                                  *
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
void draw_Castle_Road(GLfloat xSize, GLfloat ySize) {

    /*
     * save the matrix status
     * increase the figure size by
     *      xSize times of the x value
     *      ySize times of the y value
     * create_Bot_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glScalef(xSize, ySize, 0);
	glTranslatef(0, 0, -1);
	create_Top_Face();
    glPopMatrix();

}