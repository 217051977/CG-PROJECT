/***********************************************************************************************************************
*                                                                                                                      *
*                                                       Figures.h                                                      *
*                                                                                                                      *
*                                      This file is responsible to create figures                                      *
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

//draw 6 faces figure
void draw_6_Faces_Figure() {

    /*
     * save the matrix status
     * increase the figure size by
     *      xSize times of the x value
     *      ySize times of the y value
     *      zSize times of the z value
     *
     * save the matrix status
     * translate the figure
     *      1 unit for the z axis
     * create_Bot_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * create_Bot_Face()
     *
     * create_Front_Face()
     *
     * save the matrix status
     * translate the figure
     *      1 unit for the y axis
     * create_Front_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * create_Left_Face()
     *
     * save the matrix status
     * translate the figure
     *      1 unit for the x axis
     * create_Left_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */

    //top
    create_Top_Face(0, 0, 1, 1);

	//bot
	create_Bot_Face(0, 0, 1, 1);

	//front
	create_Front_Face(0, 0, 1, 1);

	//back
	create_Back_Face(0, 0, 1, 1);

	//left
	create_Left_Face(0, 0, 1, 1);

	//right
	create_Right_Face(0, 0, 1, 1);

}

//draw cylinder figure
void draw_Cylinder_Figure() {

	/*
	 * draw_Circle()
	 * draw_Circle()
	 * */

    //glBegin(GL_LINE_LOOP);
    //draw_Circle(0, 2 * PI, 1, 1, 0);
    //draw_Circle(0, 2 * PI, 1, 1, 1);
    //glEnd();

}

//draw pyramid

void draw_Pyramidal_Figure() {

	/*
	 * save the matrix status
	 * increase the figure size by
	 *      xSize times of the x value
	 *      ySize times of the y value
	 *      zSize times of the z value
	 *
	 * save the matrix status
	 * translate the figure
	 *      1 unit for the z axis
	 * create_Bot_Face()
	 * every vertex non modified keeps the same as it was, but the modified ones are changed
	 *
	 * create_Bot_Face()
	 *
	 * create_Front_Face()
	 *
	 * save the matrix status
	 * translate the figure
	 *      1 unit for the y axis
	 * create_Front_Face()
	 * every vertex non modified keeps the same as it was, but the modified ones are changed
	 *
	 * create_Left_Face()
	 *
	 * save the matrix status
	 * translate the figure
	 *      1 unit for the x axis
	 * create_Left_Face()
	 * every vertex non modified keeps the same as it was, but the modified ones are changed
	 * */

	//bot
	create_Bot_Face(0, 0, 1, 1);

	create_Front_Pyramidal_Face();

	create_Right_Pyramidal_Face();

	create_Back_Pyramidal_Face();

	create_Left_Pyramidal_Face();

}



void create_Left_Bot_Body_Left_Tower_Figure() {
	
    create_Left___Bot_Body_Left_Tower_Face();
	
	create_Front___Bot_Body_Left_Tower_Face();

	create_Right___Bot_Body_Left_Tower_Face();

	create_Back___Bot_Body_Left_Tower_Face();

    create_Bot_Face(0, 0, 1, 1);

}

void create_Left_Top_Body_Left_Tower_Figure() {

	glBindTexture(GL_TEXTURE_2D, texture[0]);

    create_Left___Top_Body_Left_Tower_Face();

	create_Front___Top_Body_Left_Tower_Face();

	create_Right___Top_Body_Left_Tower_Face();

	create_Back___Top_Body_Left_Tower_Face();

	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[3]);

    create_Top_Face(0, 0, 1, 1);

	glBindTexture(GL_TEXTURE_2D, 0);

}

void create_Left_Ruined_Tower_Bot_Figure() {

    create_Left_Ruined_Tower_Bot___Front_Face();
    create_Left_Ruined_Tower_Bot___Back_Face();
    create_Left_Ruined_Tower_Bot___Left_Face();
    create_Left_Ruined_Tower_Bot___Right_Face();
    create_Left_Ruined_Tower_Bot___Bot_Face();

}

void create_Main_Building() {

	glBindTexture(GL_TEXTURE_2D, texture[7]);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(0, 0, 0.25);
	glTexCoord2f(1, 1); glVertex3f(0.375, 0, 0.25);
	glTexCoord2f(1, 0); glVertex3f(0.375, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glBindTexture(GL_TEXTURE_2D, texture[8]);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0.375, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(0.375, 0, 0.25);
	glTexCoord2f(1, 1); glVertex3f(0.625, 0, 0.25);
	glTexCoord2f(1, 0); glVertex3f(0.625, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glBindTexture(GL_TEXTURE_2D, texture[7]);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0.625, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(0.625, 0, 0.25);
	glTexCoord2f(1, 1); glVertex3f(1, 0, 0.25);
	glTexCoord2f(1, 0); glVertex3f(1, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0.25);
	glTexCoord2f(0, 1); glVertex3f(0, 0, 0.5);
	glTexCoord2f(1, 1); glVertex3f(0.25, 0, 0.5);
	glTexCoord2f(1, 0); glVertex3f(0.25, 0, 0.25);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0.25, 0, 0.25);
	glTexCoord2f(0, 1); glVertex3f(0.25, 0, 0.5);
	glTexCoord2f(1, 1); glVertex3f(0.5, 0, 0.5);
	glTexCoord2f(1, 0); glVertex3f(0.5, 0, 0.25);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0.5, 0, 0.25);
	glTexCoord2f(0, 1); glVertex3f(0.5, 0, 0.5);
	glTexCoord2f(1, 1); glVertex3f(0.75, 0, 0.5);
	glTexCoord2f(1, 0); glVertex3f(0.75, 0, 0.25);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0.75, 0, 0.25);
	glTexCoord2f(0, 1); glVertex3f(0.75, 0, 0.5);
	glTexCoord2f(1, 1); glVertex3f(1, 0, 0.5);
	glTexCoord2f(1, 0); glVertex3f(1, 0, 0.25);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0.5);
	glTexCoord2f(0, 1); glVertex3f(0, 0, 0.75);
	glTexCoord2f(1, 1); glVertex3f(0.25, 0, 0.75);
	glTexCoord2f(1, 0); glVertex3f(0.25, 0, 0.5);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0.25, 0, 0.5);
	glTexCoord2f(0, 1); glVertex3f(0.25, 0, 0.75);
	glTexCoord2f(1, 1); glVertex3f(0.5, 0, 0.75);
	glTexCoord2f(1, 0); glVertex3f(0.5, 0, 0.5);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0.5, 0, 0.5);
	glTexCoord2f(0, 1); glVertex3f(0.5, 0, 0.75);
	glTexCoord2f(1, 1); glVertex3f(0.75, 0, 0.75);
	glTexCoord2f(1, 0); glVertex3f(0.75, 0, 0.5);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0.75, 0, 0.5);
	glTexCoord2f(0, 1); glVertex3f(0.75, 0, 0.75);
	glTexCoord2f(1, 1); glVertex3f(1, 0, 0.75);
	glTexCoord2f(1, 0); glVertex3f(1, 0, 0.5);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0.75);
	glTexCoord2f(0, 1); glVertex3f(0, 0, 1);
	glTexCoord2f(1, 1); glVertex3f(0.25, 0, 1);
	glTexCoord2f(1, 0); glVertex3f(0.25, 0, 0.75);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0.25, 0, 0.75);
	glTexCoord2f(0, 1); glVertex3f(0.25, 0, 1);
	glTexCoord2f(1, 1); glVertex3f(0.5, 0, 1);
	glTexCoord2f(1, 0); glVertex3f(0.5, 0, 0.75);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0.5, 0, 0.75);
	glTexCoord2f(0, 1); glVertex3f(0.5, 0, 1);
	glTexCoord2f(1, 1); glVertex3f(0.75, 0, 1);
	glTexCoord2f(1, 0); glVertex3f(0.75, 0, 0.75);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0.75, 0, 0.75);
	glTexCoord2f(0, 1); glVertex3f(0.75, 0, 1);
	glTexCoord2f(1, 1); glVertex3f(1, 0, 1);
	glTexCoord2f(1, 0); glVertex3f(1, 0, 0.75);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();







	glBindTexture(GL_TEXTURE_2D, texture[7]);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 1, 0);
	glTexCoord2f(0, 4); glVertex3f(1, 1, 0);
	glTexCoord2f(4, 4); glVertex3f(1, 1, 1);
	glTexCoord2f(4, 0); glVertex3f(0, 1, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glBindTexture(GL_TEXTURE_2D, texture[10]);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 4); glVertex3f(1, 0, 0);
	glTexCoord2f(4, 4); glVertex3f(1, 1, 0);
	glTexCoord2f(4, 0); glVertex3f(0, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 1);
	glTexCoord2f(0, 4); glVertex3f(0, 1, 1);
	glTexCoord2f(4, 4); glVertex3f(1, 1, 1);
	glTexCoord2f(4, 0); glVertex3f(1, 0, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glBindTexture(GL_TEXTURE_2D, texture[7]);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 4); glVertex3f(0, 1, 0);
	glTexCoord2f(4, 4); glVertex3f(0, 1, 1);
	glTexCoord2f(4, 0); glVertex3f(0, 0, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(1, 0, 0);
	glTexCoord2f(0, 4); glVertex3f(1, 0, 1);
	glTexCoord2f(4, 4); glVertex3f(1, 1, 1);
	glTexCoord2f(4, 0); glVertex3f(1, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();


}