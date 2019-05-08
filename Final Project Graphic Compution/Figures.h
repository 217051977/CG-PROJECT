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
    glPushMatrix();
    glTranslatef(0, 0, 1);
    create_Bot_Face();
    glPopMatrix();

    //bot
    create_Bot_Face();

    //front
    create_Front_Face();

    //back
    glPushMatrix();
    glTranslatef(0, 1, 0);
    create_Front_Face();
    glPopMatrix();

    //left
    create_Left_Face();

    //right
    glPushMatrix();
    glTranslatef(1, 0, 0);
    create_Left_Face();
    glPopMatrix();

}

//draw cylinder figure
void draw_Cylinder_Figure() {

	/*
	 * draw_Circle()
	 * draw_Circle()
	 * */

    glBegin(GL_LINE_LOOP);
    draw_Circle(0, 2 * PI, 1, 1, 0);
    draw_Circle(0, 2 * PI, 1, 1, 1);
    glEnd();

}

//draw piramid

void draw_Piramidal_Figure() {

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
	create_Bot_Face();

	create_Piramidal_Face();

	glPushMatrix();
	glTranslatef(1, 0, 0);
	glRotatef(90, 0, 0, 1);
	create_Piramidal_Face();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1, 1, 0);
	glRotatef(180, 0, 0, 1);
	create_Piramidal_Face();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 1, 0);
	glRotatef(-90, 0, 0, 1);
	create_Piramidal_Face();
	glPopMatrix();

}