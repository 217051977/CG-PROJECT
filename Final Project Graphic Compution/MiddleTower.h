/***********************************************************************************************************************
*                                                                                                                      *
*                                                     MiddleTower.h                                                    *
*                                                                                                                      *
*                                 This file is responsible to create the middle tower                                  *
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

//body bottom
void draw_MiddleTower_Body_Bottom() {

	glBindTexture(GL_TEXTURE_2D, texture[0]);

	//front

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 2); glVertex3f(0, 0, 1);
	glTexCoord2f(1, 2); glVertex3f(1, 0, 1);
	glTexCoord2f(1, 0); glVertex3f(1, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//back

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 1, 0);
	glTexCoord2f(0, 2); glVertex3f(1, 1, 0);
	glTexCoord2f(1, 2); glVertex3f(1, 1, 1);
	glTexCoord2f(1, 0); glVertex3f(0, 1, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//bot

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(1, 0, 0);
	glTexCoord2f(1, 1); glVertex3f(1, 1, 0);
	glTexCoord2f(1, 0); glVertex3f(0, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//top

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 1);
	glTexCoord2f(0, 1); glVertex3f(0, 1, 1);
	glTexCoord2f(1, 1); glVertex3f(1, 1, 1);
	glTexCoord2f(1, 0); glVertex3f(1, 0, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 2); glVertex3f(0, 1, 0);
	glTexCoord2f(1, 2); glVertex3f(0, 1, 1);
	glTexCoord2f(1, 0); glVertex3f(0, 0, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(1, 0, 0);
	glTexCoord2f(0, 2); glVertex3f(1, 0, 1);
	glTexCoord2f(1, 2); glVertex3f(1, 1, 1);
	glTexCoord2f(1, 0); glVertex3f(1, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

//body middle
void draw_MiddleTower_Body_Middle() {

	glBindTexture(GL_TEXTURE_2D, texture[3]);

	//front

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 0.8); glVertex3f(0, 0, 1);
	glTexCoord2f(1, 0.8); glVertex3f(1, 0, 1);
	glTexCoord2f(1, 0); glVertex3f(1, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//back

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 1, 0);
	glTexCoord2f(0, 0.8); glVertex3f(1, 1, 0);
	glTexCoord2f(1, 0.8); glVertex3f(1, 1, 1);
	glTexCoord2f(1, 0); glVertex3f(0, 1, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//bot

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(1, 0, 0);
	glTexCoord2f(1, 1); glVertex3f(1, 1, 0);
	glTexCoord2f(1, 0); glVertex3f(0, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//top

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 1);
	glTexCoord2f(0, 1); glVertex3f(0, 1, 1);
	glTexCoord2f(1, 1); glVertex3f(1, 1, 1);
	glTexCoord2f(1, 0); glVertex3f(1, 0, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 0.8); glVertex3f(0, 1, 0);
	glTexCoord2f(1, 0.8); glVertex3f(0, 1, 1);
	glTexCoord2f(1, 0); glVertex3f(0, 0, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(1, 0, 0);
	glTexCoord2f(0, 0.8); glVertex3f(1, 0, 1);
	glTexCoord2f(1, 0.8); glVertex3f(1, 1, 1);
	glTexCoord2f(1, 0); glVertex3f(1, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

//body top
void draw_MiddleTower_Body_Top() {

	glBindTexture(GL_TEXTURE_2D, texture[0]);

	//front

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(0, 0, 1);
	glTexCoord2f(1, 1); glVertex3f(1, 0, 1);
	glTexCoord2f(1, 0); glVertex3f(1, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//back

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 1, 0);
	glTexCoord2f(0, 1); glVertex3f(1, 1, 0);
	glTexCoord2f(1, 1); glVertex3f(1, 1, 1);
	glTexCoord2f(1, 0); glVertex3f(0, 1, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//bot

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(1, 0, 0);
	glTexCoord2f(1, 1); glVertex3f(1, 1, 0);
	glTexCoord2f(1, 0); glVertex3f(0, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//top

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 1);
	glTexCoord2f(0, 1); glVertex3f(0, 1, 1);
	glTexCoord2f(1, 1); glVertex3f(1, 1, 1);
	glTexCoord2f(1, 0); glVertex3f(1, 0, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(0, 1, 0);
	glTexCoord2f(1, 1); glVertex3f(0, 1, 1);
	glTexCoord2f(1, 0); glVertex3f(0, 0, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(1, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(1, 0, 1);
	glTexCoord2f(1, 1); glVertex3f(1, 1, 1);
	glTexCoord2f(1, 0); glVertex3f(1, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

//body bottom pyramid spikes
void draw_MiddleTower_Body_Bottom_Spikes() {

	draw_Pyramidal_Figure();

}

//crown
void draw_MiddleTower_Crown() {

	glBindTexture(GL_TEXTURE_2D, texture[3]);

    draw_6_Faces_Figure();

}

//crown spike
void draw_MiddleTower_Crown_Spike() {

	glBindTexture(GL_TEXTURE_2D, texture[1]);

    draw_6_Faces_Figure();

}

/**********************************************************************/
//banner
void draw_MiddleTower_Banner() {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    glVertex3f(0, 0, 0);
    glVertex3f(15, 0, 0);       //     adds 15px width
    glVertex3f(15, -1, 0);   //     removes 1px height
    glVertex3f(0, -1, 0);        //     removes 15px width

    //sets the ending of the draw
    glEnd();

}