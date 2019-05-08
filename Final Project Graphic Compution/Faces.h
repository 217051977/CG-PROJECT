/***********************************************************************************************************************
*                                                                                                                      *
*                                                       Faces.h                                                        *
*                                                                                                                      *
*                    This file is responsible to create the bottom, left and font faces of a figure                    *
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

//create bottom face
void create_Bot_Face() {

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_LINE_LOOP);

	/*
	 * set a vertex on the position (0, 0, 0)
	 * set a vertex on the position (1, 0, 0)
	 * set a vertex on the position (1, 1, 0)
	 * set a vertex on the position (0, 1, 0)
	 * */
	glVertex3f(0, 0, 0);
	glVertex3f(1, 0, 0);
	glVertex3f(1, 1, 0);
	glVertex3f(0, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

void create_Left_Face() {

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_LINE_LOOP);

	/*
	 * set a vertex on the position (0, 0, 0)
	 * set a vertex on the position (0, 1, 0)
	 * set a vertex on the position (0, 1, 1)
	 * set a vertex on the position (0, 0, 1)
	 * */
	glVertex3f(0, 0, 0);
	glVertex3f(0, 1, 0);
	glVertex3f(0, 1, 1);
	glVertex3f(0, 0, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

void create_Front_Face() {

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_LINE_LOOP);

	/*
	 * set a vertex on the position (0, 0, 0)
	 * set a vertex on the position (1, 0, 0)
	 * set a vertex on the position (1, 0, 1)
	 * set a vertex on the position (0, 0, 1)
	 * */
	glVertex3f(0, 0, 0);
	glVertex3f(1, 0, 0);
	glVertex3f(1, 0, 1);
	glVertex3f(0, 0, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

//create piramidal face
void create_Piramidal_Face() {

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_LINE_LOOP);

	/*
	 * set a vertex on the position (0, 0, 0)
	 * set a vertex on the position (1, 0, 0)
	 * set a vertex on the position (0.5, 0.5, 1)
	 * */
	glVertex3f(0, 0, 0);
	glVertex3f(1, 0, 0);
	glVertex3f(0.5, 0.5, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}