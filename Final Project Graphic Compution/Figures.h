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
    create_Top_Face();

    //bot
    create_Bot_Face();

    //front
    create_Front_Face();

    //back
	create_Back_Face();

    //left
    create_Left_Face();

    //right
    create_Right_Face();

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
	create_Bot_Face();

	create_Front_Pyramidal_Face();

	create_Right_Pyramidal_Face();

	create_Back_Pyramidal_Face();

	create_Left_Pyramidal_Face();

}

void draw_Bridge_Border_Figure() {

    create_bridge_Front_Face();

    glPushMatrix();
    glTranslatef(1, 0, 0);
    create_Left_Face();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 1, 0);
    create_bridge_Front_Face();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 0, 1);
    create_Bot_Face();
    glPopMatrix();

    create_Left_Face();

    create_bridge_Bot_Face();

}

void draw_Bridge_Border_Bot_Detail_Figure() {

    create_bridge_Bot_Detail_Front_Face();

    glPushMatrix();
    glTranslatef(1, 0, 0);
    create_Left_Face();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 1, 0);
    create_bridge_Bot_Detail_Front_Face();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 0, 1);
    create_bridge_Bot_Detail_Bot_Face();
    glPopMatrix();

    create_Left_Face();

    create_bridge_Bot_Detail_Bot_Face();

}

void create_Left_Bot_Body_Left_Tower_Figure() {
	
    create_Left___Bot_Body_Left_Tower_Face();
	
	create_Front___Bot_Body_Left_Tower_Face();

	create_Right___Bot_Body_Left_Tower_Face();

	create_Back___Bot_Body_Left_Tower_Face();

    create_Bot_Face();

}

void create_Left_Top_Body_Left_Tower_Figure() {

    create_Left___Top_Body_Left_Tower_Face();

	create_Front___Top_Body_Left_Tower_Face();

	create_Right___Top_Body_Left_Tower_Face();

	create_Back___Top_Body_Left_Tower_Face();

    create_Top_Face();

}

void create_Left_Ruined_Tower_Bot_Figure() {

    //create_Left_Ruined_Tower_Bot___Front_Face();
    //create_Left_Ruined_Tower_Bot___Back_Face();
    create_Left_Ruined_Tower_Bot___Left_Face();
    //create_Left_Ruined_Tower_Bot___Right_Face();
	glColor3f(1, 0, 0);
    create_Left_Ruined_Tower_Bot___Bot_Face();
	glColor3f(0, 0, 0);

}

void create_Left_Door() {

//  front
    create_Gate_Left_Door_Front_Face();

//  back
    glPushMatrix();
    glTranslatef(0, 1, 0);
    create_Gate_Left_Door_Front_Face();
    glPopMatrix();

//  top
    create_Gate_Left_Door_Top_Face();

//  bot
    glPushMatrix();
    glScalef(0.5, 1, 1);
    create_Bot_Face();
    glPopMatrix();

//  left
    glPushMatrix();
    glScalef(0, 1, 0.5);
    create_Left_Face();
    glPopMatrix();

//  right
    glPushMatrix();
    glTranslatef(0.5, 0, 0);
    glScalef(0, 1, 1.1);
    create_Left_Face();
    glPopMatrix();

}

void create_Right_Door() {

//  front
    create_Gate_Right_Door_Front_Face();

//  back
    glPushMatrix();
    glTranslatef(0, 1, 0);
    create_Gate_Right_Door_Front_Face();
    glPopMatrix();

//  top
    create_Gate_Right_Door_Top_Face();

//  bot
    glPushMatrix();
    glTranslatef(0.5, 0, 0);
    glScalef(0.5, 1, 1);
    create_Bot_Face();
    glPopMatrix();

//  left
    glPushMatrix();
    glTranslatef(0.5, 0, 0);
    glScalef(0.5, 1, 1.1);
    create_Left_Face();
    glPopMatrix();

//  right
    glPushMatrix();
    glTranslatef(1, 0, 0);
    glScalef(0, 1, 0.5);
    create_Left_Face();
    glPopMatrix();

}