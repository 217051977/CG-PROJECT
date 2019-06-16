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

void draw_Hallway_Section() {

	//	front
		//left

		//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 0.75); glVertex3f(0, 0, 0.75);
	glTexCoord2f(0.39, 0.75); glVertex3f(0.3, 0, 0.75);
	glTexCoord2f(0.39, 0); glVertex3f(0.3, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//right

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0.91, 0); glVertex3f(0.7, 0, 0);
	glTexCoord2f(0.91, 0.75); glVertex3f(0.7, 0, 0.75);
	glTexCoord2f(1.3, 0.75); glVertex3f(1, 0, 0.75);
	glTexCoord2f(1.3, 0); glVertex3f(1, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//top

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0.75); glVertex3f(0, 0, 0.75);
	glTexCoord2f(0, 1); glVertex3f(0, 0, 1);
	glTexCoord2f(1.3, 1); glVertex3f(1, 0, 1);
	glTexCoord2f(1.3, 0.75); glVertex3f(1, 0, 0.75);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//	back
		//left

		//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0.91, 0); glVertex3f(0.3, 1, 0);
	glTexCoord2f(0.91, 0.75); glVertex3f(0.3, 1, 0.75);
	glTexCoord2f(1.3, 0.75); glVertex3f(0, 1, 0.75);
	glTexCoord2f(1.3, 0); glVertex3f(0, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//right

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(1, 1, 0);
	glTexCoord2f(0, 0.75); glVertex3f(1, 1, 0.75);
	glTexCoord2f(0.39, 0.75); glVertex3f(0.7, 1, 0.75);
	glTexCoord2f(0.39, 0); glVertex3f(0.7, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//top

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0.75); glVertex3f(1, 1, 0.75);
	glTexCoord2f(0, 1); glVertex3f(1, 1, 1);
	glTexCoord2f(1.3, 1); glVertex3f(0, 1, 1);
	glTexCoord2f(1.3, 0.75); glVertex3f(0, 1, 0.75);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//	left

	glPushMatrix();
	glTranslatef(0.7, 0, 0);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0.7, 0); glVertex3f(0, 1, 0);
	glTexCoord2f(0.7, 1); glVertex3f(0, 1, 1);
	glTexCoord2f(1, 1); glVertex3f(0, 0, 1);
	glTexCoord2f(1, 0); glVertex3f(0, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glPopMatrix();

	//	right

	glPushMatrix();
	glTranslatef(-0.7, 0, 0);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0.3, 0); glVertex3f(1, 0, 0);
	glTexCoord2f(0.3, 0.75); glVertex3f(1, 0, 0.75);
	glTexCoord2f(0.6, 0.75); glVertex3f(1, 1, 0.75);
	glTexCoord2f(0.6, 0); glVertex3f(1, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glPopMatrix();

}

void botFace_Vertical() {

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(0.3, 0, 0);
	glTexCoord2f(0.39, 1); glVertex3f(0.3, 1, 0);
	glTexCoord2f(0.39, 0); glVertex3f(0, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

void botFace_Horizontal() {

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0.39, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0.39, 0.5); glVertex3f(1, 0, 0);
	glTexCoord2f(1, 0.5); glVertex3f(1, 0.3, 0);
	glTexCoord2f(1, 0); glVertex3f(0, 0.3, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

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

	glBindTexture(GL_TEXTURE_2D, texture[13]);

	draw_Hallway_Section();

//	top

	glPushMatrix();
	glTranslatef(0, 0, 0.75);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0.39, 0); glVertex3f(0.3, 0, 0);
	glTexCoord2f(0.39, 0.6); glVertex3f(0.7, 0, 0);
	glTexCoord2f(0.91, 0.6); glVertex3f(0.7, 1, 0);
	glTexCoord2f(0.91, 0); glVertex3f(0.3, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(1, 0, 0);
	glRotatef(90, 0, 0, 1);

	botFace_Horizontal();

	glPushMatrix();
	glTranslatef(0, 0.7, 0);

	botFace_Horizontal();

	glPopMatrix();

	glPopMatrix();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 0, 40);

	glBindTexture(GL_TEXTURE_2D, texture[11]);

	draw_WallEdification_Roof(130, 30);

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

	draw_Hallway_Section();

//	top

	glPushMatrix();
	glTranslatef(0, 0, 0.75);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0.39, 0); glVertex3f(0.3, 0, 0);
	glTexCoord2f(0.39, 1); glVertex3f(0.7, 0, 0);
	glTexCoord2f(0.91, 1); glVertex3f(0.7, 1, 0);
	glTexCoord2f(0.91, 0); glVertex3f(0.3, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(1, 0, 0);
	glRotatef(90, 0, 0, 1);
	glTranslatef(1, 0, 0);
	glRotatef(90, 0, 0, 1);

	botFace_Vertical();

	glPopMatrix();

	botFace_Vertical();

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