/***********************************************************************************************************************
*                                                                                                                      *
*                                                      LeftTower.h                                                     *
*                                                                                                                      *
*                                  This file is responsible to create the left tower                                   *
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

//body
void draw_LeftTower_Body_Top() {

    create_Left_Top_Body_Left_Tower_Figure();

}

void draw_LeftTower_Body_Down() {

    create_Left_Bot_Body_Left_Tower_Figure();

}

//crown
void draw_LeftTower_Crown_Y_Axis() {

	//front

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(0, 0, 1);
	glTexCoord2f(0.4, 1); glVertex3f(1, 0, 1);
	glTexCoord2f(0.4, 0); glVertex3f(1, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//back

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 1, 0);
	glTexCoord2f(0, 1); glVertex3f(1, 1, 0);
	glTexCoord2f(0.4, 1); glVertex3f(1, 1, 1);
	glTexCoord2f(0.4, 0); glVertex3f(0, 1, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//bot

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 0.4); glVertex3f(1, 0, 0);
	glTexCoord2f(1, 0.4); glVertex3f(1, 1, 0);
	glTexCoord2f(1, 0); glVertex3f(0, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//top

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 1);
	glTexCoord2f(0, 0.4); glVertex3f(0, 1, 1);
	glTexCoord2f(1, 0.4); glVertex3f(1, 1, 1);
	glTexCoord2f(1, 0); glVertex3f(1, 0, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//left

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(0, 1, 0);
	glTexCoord2f(0.4, 1); glVertex3f(0, 1, 1);
	glTexCoord2f(0.4, 0); glVertex3f(0, 0, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//right

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(1, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(1, 0, 1);
	glTexCoord2f(0.4, 1); glVertex3f(1, 1, 1);
	glTexCoord2f(0.4, 0); glVertex3f(1, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

//crown
void draw_LeftTower_Crown() {

	//front

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 0.4); glVertex3f(0, 0, 1);
	glTexCoord2f(1, 0.4); glVertex3f(1, 0, 1);
	glTexCoord2f(1, 0); glVertex3f(1, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//back

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 1, 0);
	glTexCoord2f(0, 0.4); glVertex3f(1, 1, 0);
	glTexCoord2f(1, 0.4); glVertex3f(1, 1, 1);
	glTexCoord2f(1, 0); glVertex3f(0, 1, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//bot

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(1, 0, 0);
	glTexCoord2f(0.4, 1); glVertex3f(1, 1, 0);
	glTexCoord2f(0.4, 0); glVertex3f(0, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//top

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 1);
	glTexCoord2f(0, 1); glVertex3f(0, 1, 1);
	glTexCoord2f(0.4, 1); glVertex3f(1, 1, 1);
	glTexCoord2f(0.4, 0); glVertex3f(1, 0, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 0.5); glVertex3f(0, 1, 0);
	glTexCoord2f(1, 0.5); glVertex3f(0, 1, 1);
	glTexCoord2f(1, 0); glVertex3f(0, 0, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(1, 0, 0);
	glTexCoord2f(0, 0.5); glVertex3f(1, 0, 1);
	glTexCoord2f(1, 0.5); glVertex3f(1, 1, 1);
	glTexCoord2f(1, 0); glVertex3f(1, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

//crown spike
void draw_LeftTower_Crown_Spike() {
	
	draw_6_Faces_Figure();

}

//trapdoor
void draw_LeftTower_Trapdoor() {

    create_Top_Face(0, 0, 1, 1);

}