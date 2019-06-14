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

void draw_Store_Vertical(GLfloat xSize, GLfloat ySize, float xF_TB, float yF_TB, float xF_Door) {

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
	glTranslatef(xSize, 0, 0);
	glRotatef(90, 0, 0, 1);
	glScalef(ySize, xSize, 15);

	glBindTexture(GL_TEXTURE_2D, texture[11]);
	create_Top_Face(0, 0, xF_TB, yF_TB);

	glBindTexture(GL_TEXTURE_2D, texture[12]);
	create_Bot_Face(0, 0, xF_TB, yF_TB);

	create_Left_Face(0, 0, 1, 1);

	create_Right_Face(0, 0, 1, 1);

	glBegin(GL_POLYGON);

	glTexCoord2f(xF_Door, 0); glVertex3f(xF_Door, 0, 0);
	glTexCoord2f(xF_Door, 1); glVertex3f(xF_Door, 0, 1);
	glTexCoord2f(1, 1); glVertex3f(1, 0, 1);
	glTexCoord2f(1, 0); glVertex3f(1, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0.75); glVertex3f(0, 0, 0.75);
	glTexCoord2f(0, 1); glVertex3f(0, 0, 1);
	glTexCoord2f(xF_Door, 1); glVertex3f(xF_Door, 0, 1);
	glTexCoord2f(xF_Door, 0.75); glVertex3f(xF_Door, 0, 0.75);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//create_Front_Face(xF_Door, 0, 1, 1);

	create_Back_Face(0, 0, 1, 1);

	glBindTexture(GL_TEXTURE_2D, texture[15]);

	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(0, 0, 0.75);
	glTexCoord2f(1, 1); glVertex3f(xF_Door, 0, 0.75);
	glTexCoord2f(1, 0); glVertex3f(xF_Door, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glPopMatrix();

	//glBindTexture(GL_TEXTURE_2D, texture[1]);

}

void draw_Store_Horizontal(GLfloat xSize, GLfloat ySize, float xF_TB, float yF_TB, float xF_Door) {

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

	glBindTexture(GL_TEXTURE_2D, texture[11]);

	glPushMatrix();
	glScalef(xSize, ySize, 15);

	glBindTexture(GL_TEXTURE_2D, texture[11]);
	create_Top_Face(0, 0, xF_TB, yF_TB);

	glBindTexture(GL_TEXTURE_2D, texture[12]);
	create_Bot_Face(0, 0, xF_TB, yF_TB);

	create_Left_Face(0, 0, 1, 1);

	create_Right_Face(0, 0, 1, 1);

	glBegin(GL_POLYGON);

	glTexCoord2f(xF_Door, 0); glVertex3f(xF_Door, 0, 0);
	glTexCoord2f(xF_Door, 1); glVertex3f(xF_Door, 0, 1);
	glTexCoord2f(1, 1); glVertex3f(1, 0, 1);
	glTexCoord2f(1, 0); glVertex3f(1, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0.75); glVertex3f(0, 0, 0.75);
	glTexCoord2f(0, 1); glVertex3f(0, 0, 1);
	glTexCoord2f(xF_Door, 1); glVertex3f(xF_Door, 0, 1);
	glTexCoord2f(xF_Door, 0.75); glVertex3f(xF_Door, 0, 0.75);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//create_Front_Face(xF_Door, 0, 1, 1);

	create_Back_Face(0, 0, 1, 1);

	glBindTexture(GL_TEXTURE_2D, texture[15]);

	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(0, 0, 0.75);
	glTexCoord2f(1, 1); glVertex3f(xF_Door, 0, 0.75);
	glTexCoord2f(1, 0); glVertex3f(xF_Door, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();
	glPopMatrix();

	//glBindTexture(GL_TEXTURE_2D, texture[1]);

}