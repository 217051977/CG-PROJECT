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
void draw_Castle_Road_Vertical_OutSide() {

	/*
	 * save the matrix status
	 * increase the figure size by
	 *      xSize times of the x value
	 *      ySize times of the y value
	 * create_Bot_Face()
	 * every vertex non modified keeps the same as it was, but the modified ones are changed
	 * */

	glBindTexture(GL_TEXTURE_2D, texture[9]);

	glPushMatrix();
	glScalef(30, 305, 0);
	glTranslatef(0, 0, -1);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 1);
	glTexCoord2f(0, 5); glVertex3f(0, 1, 1);
	glTexCoord2f(1, 5); glVertex3f(1, 1, 1);
	glTexCoord2f(1, 0); glVertex3f(1, 0, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glPopMatrix();

}

void draw_Castle_Road_Vertical_Core() {

	/*
	 * save the matrix status
	 * increase the figure size by
	 *      xSize times of the x value
	 *      ySize times of the y value
	 * create_Bot_Face()
	 * every vertex non modified keeps the same as it was, but the modified ones are changed
	 * */

	glBindTexture(GL_TEXTURE_2D, texture[9]);

	glPushMatrix();
	glScalef(30, 40, 0);
	glTranslatef(0, 0, -1);
	create_Top_Face();
	glPopMatrix();

}

void draw_Castle_Road_Vertical_Inside() {

	/*
	 * save the matrix status
	 * increase the figure size by
	 *      xSize times of the x value
	 *      ySize times of the y value
	 * create_Bot_Face()
	 * every vertex non modified keeps the same as it was, but the modified ones are changed
	 * */

	glBindTexture(GL_TEXTURE_2D, texture[9]);

	glPushMatrix();
	glScalef(30, 10, 0);
	glTranslatef(0, 0, -1);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 1);
	glTexCoord2f(0, 0.3); glVertex3f(0, 1, 1);
	glTexCoord2f(1, 0.3); glVertex3f(1, 1, 1);
	glTexCoord2f(1, 0); glVertex3f(1, 0, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glPopMatrix();

}

void draw_Castle_Road_Horizontal_OutSide() {

	/*
	 * save the matrix status
	 * increase the figure size by
	 *      xSize times of the x value
	 *      ySize times of the y value
	 * create_Bot_Face()
	 * every vertex non modified keeps the same as it was, but the modified ones are changed
	 * */

	glBindTexture(GL_TEXTURE_2D, texture[9]);

	glPushMatrix();
	glScalef(210, 30, 0);
	glTranslatef(0, 0, -1);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 1);
	glTexCoord2f(0, 1); glVertex3f(0, 1, 1);
	glTexCoord2f(5, 1); glVertex3f(1, 1, 1);
	glTexCoord2f(5, 0); glVertex3f(1, 0, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glPopMatrix();

}

void draw_Castle_Road_Horizontal_Core() {

	/*
	 * save the matrix status
	 * increase the figure size by
	 *      xSize times of the x value
	 *      ySize times of the y value
	 * create_Bot_Face()
	 * every vertex non modified keeps the same as it was, but the modified ones are changed
	 * */

	glBindTexture(GL_TEXTURE_2D, texture[9]);

	glPushMatrix();
	glScalef(35, 30, 0);
	glTranslatef(0, 0, -1);
	create_Top_Face();
	glPopMatrix();

}
					  
void draw_Castle_Road_Horizontal_Inside() {

	/*
	 * save the matrix status
	 * increase the figure size by
	 *      xSize times of the x value
	 *      ySize times of the y value
	 * create_Bot_Face()
	 * every vertex non modified keeps the same as it was, but the modified ones are changed
	 * */

	glBindTexture(GL_TEXTURE_2D, texture[9]);

	glPushMatrix();
	glScalef(10, 30, 0);
	glTranslatef(0, 0, -1);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 1);
	glTexCoord2f(0, 1); glVertex3f(0, 1, 1);
	glTexCoord2f(0.3, 1); glVertex3f(1, 1, 1);
	glTexCoord2f(0.3, 0); glVertex3f(1, 0, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glPopMatrix();

}