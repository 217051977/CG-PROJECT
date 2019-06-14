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
void draw_Hallway_Section_Horizontal() {

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
	glScalef(130, 30, 40);

	glBindTexture(GL_TEXTURE_2D, texture[13]);

	create_Front_Face(0, 0, 1.3, 1);
	create_Back_Face(0, 0, 1.3, 1);

	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 0, 40);

	glBindTexture(GL_TEXTURE_2D, texture[11]);

	draw_WallEdification_Roof(130, 30);
	glPopMatrix();

}

//hallway section
void draw_Hallway_Section_Vertical() {

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

	glBindTexture(GL_TEXTURE_2D, texture[13]);

	glPushMatrix();
	glTranslatef(0, 200, 0);
	glRotatef(-90, 0, 0, 1);
	glScalef(200, 30, 40);
	create_Front_Face(0, 0, 2, 1);
	create_Back_Face(0, 0, 2, 1);
	create_Right_Face(0.7, 0, 1, 1);
	create_Left_Face(0.3, 0, 0.6, 1);
	glPopMatrix();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 0, 40);

	glBindTexture(GL_TEXTURE_2D, texture[11]);

	draw_WallEdification_Roof(30, 200);
	glPopMatrix();

}

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

	glBindTexture(GL_TEXTURE_2D, texture[14]);

    draw_6_Faces_Figure();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 0, 40);

	glBindTexture(GL_TEXTURE_2D, texture[11]);

    draw_WallEdification_Roof(xSize, ySize);
    glPopMatrix();

}