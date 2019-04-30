/***********************************************************************************************************************
*                                                                                                                      *
*                                                       Hallway.h                                                      *
*                                                                                                                      *
*                                    This file is responsible to create the hallway                                    *
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

//hallway section
void draw_Hallway_Section(GLfloat xSize, GLfloat ySize) {

    /*
     * save the matrix status
     * increase the figure size by
	 *     xSize times of the x value
	 *     ySize times of the y value
	 *     40 times of the z value
     * draw_6_Faces_Figure()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * save the matrix status
     * translate the figure
     *      40 for the y value
     * draw_WallEdification_Roof()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glScalef(xSize, ySize, 40);
    draw_6_Faces_Figure();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 0, 40);
    draw_WallEdification_Roof(xSize, ySize);
    glPopMatrix();

}