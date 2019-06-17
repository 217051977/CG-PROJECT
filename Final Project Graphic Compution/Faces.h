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

//CW
void create_Front___Top_Body_Left_Tower_Face() {

	glBegin(GL_POLYGON);

	glNormal3f(0, -1, 0);

	glTexCoord2f(0, 0.25); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(0, 0, 1);
	glTexCoord2f(1, 1); glVertex3f(1, 0, 1);
	glTexCoord2f(1, 0.25); glVertex3f(1, 0, 0);
	glTexCoord2f(0.5, 0); glVertex3f(0.5, 0, -0.25);

	glEnd();

}

//CCW
void create_Back___Top_Body_Left_Tower_Face() {

	glPushMatrix();
	glTranslatef(0, 1, 0);
	glTranslatef(1, 0, 0);
	glRotatef(180, 0, 0, 1);
	create_Front___Top_Body_Left_Tower_Face();
	glPopMatrix();

}

//CW
void create_Left___Top_Body_Left_Tower_Face() {

	glPushMatrix();
	glTranslatef(0, 1, 0);
	glRotatef(-90, 0, 0, 1);
	create_Front___Top_Body_Left_Tower_Face();
	glPopMatrix();

}

//CCW
void create_Right___Top_Body_Left_Tower_Face() {

	glPushMatrix();
	glTranslatef(1, 0, 0);
	glRotatef(90, 0, 0, 1);
	create_Front___Top_Body_Left_Tower_Face();
	glPopMatrix();

}
/**********************************************************************************************************************/

//CW
void create_Front___Bot_Body_Left_Tower_Face() {

	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[2]);

	glBegin(GL_POLYGON);
	glTexCoord2f(0, 0); glVertex3f(0, 0, 0.955);
	glTexCoord2f(0, 2); glVertex3f(0, 0, 1);
	glTexCoord2f(1, 0); glVertex3f(0.15, 0, 0.955);
	glEnd();

	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 2); glVertex3f(0, 0, 0.955);
	glTexCoord2f(1, 2); glVertex3f(0.15, 0, 0.955);
	glTexCoord2f(1, 0); glVertex3f(0.15, 0, 0);

	glEnd();

	/******************************************************************************************************/
	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[1]);

	glBegin(GL_POLYGON);
	glTexCoord2f(0, 0); glVertex3f(0.15, 0, 0.905);
	glTexCoord2f(0, 1); glVertex3f(0.15, 0, 0.954);
	glTexCoord2f(1, 0); glVertex3f(0.30, 0, 0.905);
	glEnd();

	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0.15, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(0.15, 0, 0.905);
	glTexCoord2f(1, 1); glVertex3f(0.30, 0, 0.905);
	glTexCoord2f(1, 0); glVertex3f(0.30, 0, 0);

	glEnd();

	/******************************************************************************************************/
	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[2]);

	glBegin(GL_POLYGON);
	glTexCoord2f(0, 0); glVertex3f(0.30, 0, 0.84);
	glTexCoord2f(0, 2); glVertex3f(0.30, 0, 0.905);
	glTexCoord2f(1, 0); glVertex3f(0.5, 0, 0.84);
	glEnd();

	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0.30, 0, 0);
	glTexCoord2f(0, 2); glVertex3f(0.30, 0, 0.84);
	glTexCoord2f(1, 2); glVertex3f(0.5, 0, 0.84);
	glTexCoord2f(1, 0); glVertex3f(0.5, 0, 0);

	glEnd();

	/******************************************************************************************************/
	glBegin(GL_POLYGON);
	glTexCoord2f(0, 2); glVertex3f(0.7, 0, 0.905);
	glTexCoord2f(0, 0); glVertex3f(0.7, 0, 0.84);
	glTexCoord2f(1, 0); glVertex3f(0.5, 0, 0.84);
	glEnd();

	glBegin(GL_POLYGON);
	glTexCoord2f(1, 0); glVertex3f(0.5, 0, 0);
	glTexCoord2f(1, 2); glVertex3f(0.5, 0, 0.84);
	glTexCoord2f(0, 2); glVertex3f(0.7, 0, 0.84);
	glTexCoord2f(0, 0); glVertex3f(0.7, 0, 0);
	glEnd();

	/******************************************************************************************************/
	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[1]);

	glBegin(GL_POLYGON);
	glTexCoord2f(0, 1); glVertex3f(0.85, 0, 0.954);
	glTexCoord2f(0, 0); glVertex3f(0.85, 0, 0.905);
	glTexCoord2f(1, 0); glVertex3f(0.7, 0, 0.905);
	glEnd();

	glBegin(GL_POLYGON);
	glTexCoord2f(1, 0); glVertex3f(0.7, 0, 0);
	glTexCoord2f(1, 1); glVertex3f(0.7, 0, 0.905);
	glTexCoord2f(0, 1); glVertex3f(0.85, 0, 0.905);
	glTexCoord2f(0, 0); glVertex3f(0.85, 0, 0);
	glEnd();

	/******************************************************************************************************/
	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[2]);

	glBegin(GL_POLYGON);
	glTexCoord2f(0, 2); glVertex3f(1, 0, 1);
	glTexCoord2f(0, 0); glVertex3f(1, 0, 0.955);
	glTexCoord2f(1, 0); glVertex3f(0.85, 0, 0.955);
	glEnd();

	glBegin(GL_POLYGON);
	glTexCoord2f(1, 0); glVertex3f(0.85, 0, 0);
	glTexCoord2f(1, 2); glVertex3f(0.85, 0, 0.955);
	glTexCoord2f(0, 2); glVertex3f(1, 0, 0.955);
	glTexCoord2f(0, 0); glVertex3f(1, 0, 0);
	glEnd();

}

//CCW
void create_Back___Bot_Body_Left_Tower_Face() {

	glPushMatrix();
	glTranslatef(0, 1, 0);
	glTranslatef(1, 0, 0);
	glRotatef(180, 0, 0, 1);
	create_Front___Bot_Body_Left_Tower_Face();
	glPopMatrix();

}

//CW
void create_Left___Bot_Body_Left_Tower_Face() {

	glPushMatrix();
	glTranslatef(0, 1, 0);
	glRotatef(-90, 0, 0, 1);
	create_Front___Bot_Body_Left_Tower_Face();
	glPopMatrix();

}

//CCW
void create_Right___Bot_Body_Left_Tower_Face() {

	glPushMatrix();
	glTranslatef(1, 0, 0);
	glRotatef(90, 0, 0, 1);
	create_Front___Bot_Body_Left_Tower_Face();
	glPopMatrix();

}
/**********************************************************************************************************************/
//CW
void create_Front_Face(float xI, float yI, float xF, float yF) {

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glNormal3f(0, -1, 0);

	glTexCoord2f(xI, yI); glVertex3f(0, 0, 0);
	glTexCoord2f(xI, yF); glVertex3f(0, 0, 1);
	glTexCoord2f(xF, yF); glVertex3f(1, 0, 1);
	glTexCoord2f(xF, yI); glVertex3f(1, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

//CCW
void create_Back_Face(float xI, float yI, float xF, float yF) {

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glNormal3f(0, 1, 0);

	glTexCoord2f(xI, yI); glVertex3f(1, 1, 0);
	glTexCoord2f(xI, yF); glVertex3f(1, 1, 1);
	glTexCoord2f(xF, yF); glVertex3f(0, 1, 1);
	glTexCoord2f(xF, yI); glVertex3f(0, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

//CCW
void create_Bot_Face(float xI, float yI, float xF, float yF) {

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glNormal3f(0, 0, -1);

	glTexCoord2f(xI, yI); glVertex3f(0, 0, 0);
	glTexCoord2f(xI, yF); glVertex3f(1, 0, 0);
	glTexCoord2f(xF, yF); glVertex3f(1, 1, 0);
	glTexCoord2f(xF, yI); glVertex3f(0, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

//CW
void create_Top_Face(float xI, float yI, float xF, float yF) {

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glNormal3f(0, 0, 1);

	glTexCoord2f(xI, yI); glVertex3f(0, 0, 1);
	glTexCoord2f(xI, yF); glVertex3f(0, 1, 1);
	glTexCoord2f(xF, yF); glVertex3f(1, 1, 1);
	glTexCoord2f(xF, yI); glVertex3f(1, 0, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

//CW
void create_Left_Face(float xI, float yI, float xF, float yF) {

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glNormal3f(-1, 0, 0);

	glTexCoord2f(xI, yI); glVertex3f(0, 1, 0);
	glTexCoord2f(xI, yF); glVertex3f(0, 1, 1);
	glTexCoord2f(xF, yF); glVertex3f(0, 0, 1);
	glTexCoord2f(xF, yI); glVertex3f(0, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

//CCW
void create_Right_Face(float xI, float yI, float xF, float yF) {

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glNormal3f(1, 0, 0);

	glTexCoord2f(xI, yI); glVertex3f(1, 0, 0);
	glTexCoord2f(xI, yF); glVertex3f(1, 0, 1);
	glTexCoord2f(xF, yF); glVertex3f(1, 1, 1);
	glTexCoord2f(xF, yI); glVertex3f(1, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}
/**********************************************************************************************************************/

//create pyramidal face
void create_Front_Pyramidal_Face() {

	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[1]);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	/*
	 * set a vertex on the position (0, 0, 0)
	 * set a vertex on the position (1, 0, 0)
	 * set a vertex on the position (0.5, 0.5, 1)
	 * */
	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0.5, 1); glVertex3f(0.5, 0.5, 1);
	glTexCoord2f(1, 0); glVertex3f(1, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

void create_Back_Pyramidal_Face() {

	glPushMatrix();
	glTranslatef(0, 1, 0);
	glTranslatef(1, 0, 0);
	glRotatef(180, 0, 0, 1);
	create_Front_Pyramidal_Face();
	glPopMatrix();

}

void create_Left_Pyramidal_Face() {

	glPushMatrix();
	glTranslatef(0, 1, 0);
	glRotatef(-90, 0, 0, 1);
	create_Front_Pyramidal_Face();
	glPopMatrix();

}

void create_Right_Pyramidal_Face() {

	glPushMatrix();
	glTranslatef(1, 0, 0);
	glTranslatef(0, 1, 0);
	glRotatef(180, 0, 0, 1);
	create_Left_Pyramidal_Face();
	glPopMatrix();

}

/**********************************************************************************************************************/
//CW
void create_Left_Ruined_Tower_Bot___Front_Face() {

	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[2]);

//    left brick tower
	glBegin(GL_POLYGON);
	glTexCoord2f(0, 1); glVertex3f(0, 0, 1);
	glTexCoord2f(0.15, 0.925); glVertex3f(0.15, 0, 0.925);
	glTexCoord2f(0.15, 0.45); glVertex3f(0.15, 0, 0.45);
	glTexCoord2f(0.09, 0.56); glVertex3f(0.09, 0, 0.56);
	glTexCoord2f(0.06, 0.65); glVertex3f(0.06, 0, 0.65);
	glTexCoord2f(0, 0.6); glVertex3f(0, 0, 0.6);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[1]);

//    left wood tower
	glBegin(GL_POLYGON);
	glTexCoord2f(0.15, 0.925); glVertex3f(0.15, 0, 0.925);
	glTexCoord2f(0.25, 0.875); glVertex3f(0.25, 0, 0.875);
	glTexCoord2f(0.25, 0.35); glVertex3f(0.25, 0, 0.35);
	glTexCoord2f(0.235, 0.31); glVertex3f(0.235, 0, 0.31);
	glTexCoord2f(0.215, 0.15); glVertex3f(0.215, 0, 0.15);
	glTexCoord2f(0.15, 0.45); glVertex3f(0.15, 0, 0.45);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[2]);

//    middle brick tower
	glBegin(GL_POLYGON);
	glTexCoord2f(0.25, 0.35); glVertex3f(0.25, 0, 0.35);
	glTexCoord2f(0.25, 0.875); glVertex3f(0.25, 0, 0.875);
	glTexCoord2f(0.5, 0.75); glVertex3f(0.5, 0, 0.75);
	glTexCoord2f(0.75, 0.875); glVertex3f(0.75, 0, 0.875);
	glTexCoord2f(0.75, 0.35); glVertex3f(0.75, 0, 0.35);
	glTexCoord2f(0.7, 0.32); glVertex3f(0.7, 0, 0.32);
	glTexCoord2f(0.6, 0.15); glVertex3f(0.6, 0, 0.15);
	glTexCoord2f(0.52, 0.1); glVertex3f(0.52, 0, 0.1);
	glTexCoord2f(0.5, 0); glVertex3f(0.5, 0, 0);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[1]);

//    right wood tower
    glBegin(GL_POLYGON);
    glTexCoord2f(0.85, 0.925); glVertex3f(0.85, 0, 0.925);
	glTexCoord2f(0.85, 0.35); glVertex3f(0.85, 0, 0.35);
	glTexCoord2f(0.815, 0.30); glVertex3f(0.815, 0, 0.30);
	glTexCoord2f(0.78, 0.23); glVertex3f(0.78, 0, 0.23);
	glTexCoord2f(0.7625, 0.31); glVertex3f(0.7625, 0, 0.31);
	glTexCoord2f(0.75, 0.35); glVertex3f(0.75, 0, 0.35);
    glTexCoord2f(0.75, 0.875); glVertex3f(0.75, 0, 0.875);
    glEnd();

	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[2]);

//    right brick tower
    glBegin(GL_POLYGON);
    glTexCoord2f(0.85, 0.925); glVertex3f(0.85, 0, 0.925);
	glTexCoord2f(1, 1); glVertex3f(1, 0, 1);
	glTexCoord2f(1, 0.65); glVertex3f(1, 0, 0.65);
	glTexCoord2f(0.85, 0.35); glVertex3f(0.85, 0, 0.35);
    glEnd();

}

//CW
void create_Left_Ruined_Tower_Bot___Back_Face() {

	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[2]);

	//Left Side
	glBegin(GL_POLYGON);
	glTexCoord2f(0, 1); glVertex3f(0, 1, 1);
	glTexCoord2f(0, 0.65); glVertex3f(0, 1, 0.65);
	glTexCoord2f(0.5, 0.7); glVertex3f(0.5, 1, 0.7);
	glTexCoord2f(0.5, 0.75); glVertex3f(0.5, 1, 0.75);
	glEnd();

	//Right Side
	glBegin(GL_POLYGON);
	glTexCoord2f(0.5, 0.7); glVertex3f(0.5, 1, 0.7);
	glTexCoord2f(1, 0.75); glVertex3f(1, 1, 0.75);
	glTexCoord2f(1, 1); glVertex3f(1, 1, 1);
	glTexCoord2f(0.5, 0.75); glVertex3f(0.5, 1, 0.75);
	glEnd();

}

//CW
void create_Left_Ruined_Tower_Bot___Left_Face() {

	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[2]);

	//Right Side
    glBegin(GL_POLYGON);
	glTexCoord2f(0, 0.8); glVertex3f(0, 0, 0.8);
	glTexCoord2f(0.02, 0.82); glVertex3f(0, 0.02, 0.82);
	glTexCoord2f(0.02, 0.99); glVertex3f(0, 0.02, 0.99);
    glTexCoord2f(0, 1); glVertex3f(0, 0, 1);
    glEnd();

	glBegin(GL_POLYGON);
	glTexCoord2f(0.02, 0.82); glVertex3f(0, 0.02, 0.82);
	glTexCoord2f(0.1, 0.75); glVertex3f(0, 0.1, 0.75);
	glTexCoord2f(0.1, 0.95); glVertex3f(0, 0.1, 0.95);
	glTexCoord2f(0.02, 0.99); glVertex3f(0, 0.02, 0.99);
	glEnd();

	glBegin(GL_POLYGON);
	glTexCoord2f(0.1, 0.75); glVertex3f(0, 0.1, 0.75);
	glTexCoord2f(0.15, 0.6); glVertex3f(0, 0.15, 0.6);
	glTexCoord2f(0.17, 0.6); glVertex3f(0, 0.17, 0.6);
	glTexCoord2f(0.2, 0.7); glVertex3f(0, 0.2, 0.7);
	glTexCoord2f(0.2, 0.91); glVertex3f(0, 0.2, 0.91);
	glTexCoord2f(0.1, 0.95); glVertex3f(0, 0.1, 0.95);
	glEnd();

	glBegin(GL_POLYGON);
	glTexCoord2f(0.2, 0.7); glVertex3f(0, 0.2, 0.7);
	glTexCoord2f(0.28, 0.64); glVertex3f(0, 0.28, 0.64);
	glTexCoord2f(0.32, 0.72); glVertex3f(0, 0.32, 0.72);
	glTexCoord2f(0.32, 0.845); glVertex3f(0, 0.32, 0.845);
	glTexCoord2f(0.2, 0.91); glVertex3f(0, 0.2, 0.91);
	glEnd();

	glBegin(GL_POLYGON);
	glTexCoord2f(0.32, 0.72); glVertex3f(0, 0.32, 0.72);
	glTexCoord2f(0.35, 0.6); glVertex3f(0, 0.35, 0.6);
	glTexCoord2f(0.42, 0.75); glVertex3f(0, 0.42, 0.75);
	glTexCoord2f(0.42, 0.825); glVertex3f(0, 0.42, 0.825);
	glTexCoord2f(0.32, 0.845); glVertex3f(0, 0.32, 0.845);
	glEnd();

	glBegin(GL_POLYGON);
	glTexCoord2f(0.42, 0.75); glVertex3f(0, 0.42, 0.75);
	glTexCoord2f(0.5, 0.65); glVertex3f(0, 0.5, 0.65);
	glTexCoord2f(0.5, 0.75); glVertex3f(0, 0.5, 0.75);
	glTexCoord2f(0.42, 0.825); glVertex3f(0, 0.42, 0.825);
	glEnd();

	//Left Side	
	glBegin(GL_POLYGON);
	glTexCoord2f(0.5, 0.65); glVertex3f(0, 0.5, 0.65);
	glTexCoord2f(0.55, 0.68); glVertex3f(0, 0.55, 0.68);
	glTexCoord2f(0.55, 0.78); glVertex3f(0, 0.55, 0.78);
	glTexCoord2f(0.5, 0.75); glVertex3f(0, 0.5, 0.75);
	glEnd();

	glBegin(GL_POLYGON);
	glTexCoord2f(0.55, 0.68); glVertex3f(0, 0.55, 0.68);
	glTexCoord2f(0.6, 0.6); glVertex3f(0, 0.6, 0.6);
	glTexCoord2f(0.7, 0.6); glVertex3f(0, 0.7, 0.6);
	glTexCoord2f(0.75, 0.8); glVertex3f(0, 0.75, 0.8);
	glTexCoord2f(0.75, 0.88); glVertex3f(0, 0.75, 0.88);
	glTexCoord2f(0.55, 0.78); glVertex3f(0, 0.55, 0.78);
	glEnd();

	glBegin(GL_POLYGON);
	glTexCoord2f(0.75, 0.8); glVertex3f(0, 0.75, 0.8);
	glTexCoord2f(0.8, 0.72); glVertex3f(0, 0.8, 0.72);
	glTexCoord2f(0.85, 0.68); glVertex3f(0, 0.85, 0.68);
	glTexCoord2f(0.925, 0.75); glVertex3f(0, 0.925, 0.75);
	glTexCoord2f(0.925, 0.965); glVertex3f(0, 0.925, 0.965);
	glTexCoord2f(0.75, 0.88); glVertex3f(0, 0.75, 0.88);
	glEnd();

	glBegin(GL_POLYGON);
	glTexCoord2f(0.925, 0.75); glVertex3f(0, 0.925, 0.75);
	glTexCoord2f(1, 0.65); glVertex3f(0, 1, 0.65);
	glTexCoord2f(1, 1); glVertex3f(0, 1, 1);
	glTexCoord2f(0.925, 0.965); glVertex3f(0, 0.925, 0.965);
	glEnd();
	
}

//CCW
void create_Left_Ruined_Tower_Bot___Right_Face() {

	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[2]);

	//Left Side
    glBegin(GL_POLYGON);
    glTexCoord2f(0, 1); glVertex3f(1, 0, 1);
	glTexCoord2f(0.02, 0.99); glVertex3f(1, 0.02, 0.99);
	glTexCoord2f(0.02, 0.82); glVertex3f(1, 0.02, 0.82);
    glTexCoord2f(0, 0.8); glVertex3f(1, 0, 0.8);
    glEnd();

	glBegin(GL_POLYGON);
	glTexCoord2f(0.2, 0.9); glVertex3f(1, 0.2, 0.9);
	glTexCoord2f(0.2, 0.7); glVertex3f(1, 0.2, 0.7);
	glTexCoord2f(0.17, 0.65); glVertex3f(1, 0.17, 0.65);
	glTexCoord2f(0.15, 0.65); glVertex3f(1, 0.15, 0.65);
	glTexCoord2f(0.1, 0.75); glVertex3f(1, 0.1, 0.75);
	glTexCoord2f(0.02, 0.82); glVertex3f(1, 0.02, 0.82);
	glTexCoord2f(0.02, 0.99); glVertex3f(1, 0.02, 0.99);
	glEnd();

	glBegin(GL_POLYGON);
	glTexCoord2f(0.32, 0.84); glVertex3f(1, 0.32, 0.84);
	glTexCoord2f(0.32, 0.72); glVertex3f(1, 0.32, 0.72);
	glTexCoord2f(0.28, 0.65); glVertex3f(1, 0.28, 0.65);
	glTexCoord2f(0.2, 0.7); glVertex3f(1, 0.2, 0.7);
	glTexCoord2f(0.2, 0.9); glVertex3f(1, 0.2, 0.9);
	glEnd();

	glBegin(GL_POLYGON);
	glTexCoord2f(0.42, 0.75); glVertex3f(1, 0.42, 0.75);
	glTexCoord2f(0.41, 0.69); glVertex3f(1, 0.41, 0.69);
	glTexCoord2f(0.35, 0.67); glVertex3f(1, 0.35, 0.67);
	glTexCoord2f(0.32, 0.72); glVertex3f(1, 0.32, 0.72);
	glTexCoord2f(0.32, 0.84); glVertex3f(1, 0.32, 0.84);
	glTexCoord2f(0.42, 0.79); glVertex3f(1, 0.42, 0.79);
	glEnd();

	glBegin(GL_POLYGON);
	glTexCoord2f(0.5, 0.69); glVertex3f(1, 0.5, 0.69);
	glTexCoord2f(0.42, 0.75); glVertex3f(1, 0.42, 0.75);
	glTexCoord2f(0.42, 0.79); glVertex3f(1, 0.42, 0.79);
	glTexCoord2f(0.5, 0.75); glVertex3f(1, 0.5, 0.75);
	glEnd();

	//Right Side
	glBegin(GL_POLYGON);
	glTexCoord2f(0.6, 0.8); glVertex3f(1, 0.6, 0.8);
	glTexCoord2f(0.55, 0.65); glVertex3f(1, 0.55, 0.65);
	glTexCoord2f(0.5, 0.69); glVertex3f(1, 0.5, 0.69);
	glTexCoord2f(0.5, 0.75); glVertex3f(1, 0.5, 0.75);
	glEnd();

	glBegin(GL_TRIANGLES);
	glTexCoord2f(1, 1); glVertex3f(1, 1, 1);
	glTexCoord2f(1, 0.85); glVertex3f(1, 1, 0.85);
	glTexCoord2f(0.7, 0.85); glVertex3f(1, 0.7, 0.85);
	glEnd();

}

//CCW
void create_Left_Ruined_Tower_Bot___Bot_Face() {

	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[2]);

//	Front
	//Left Brick part	
	glBegin(GL_TRIANGLES);
	glTexCoord2f(0, 0); glVertex3f(0, 0, 0.6);
	glTexCoord2f(10, 0); glVertex3f(0.06, 0, 0.65);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0.06, 0, 0.65);
	glTexCoord2f(10, 0); glVertex3f(0.09, 0, 0.56);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0.09, 0, 0.56);
	glTexCoord2f(10, 0); glVertex3f(0.15, 0, 0.45);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);


	//Left Wood Part
	glTexCoord2f(0, 0); glVertex3f(0.15, 0, 0.45);
	glTexCoord2f(10, 0); glVertex3f(0.215, 0, 0.15);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0.215, 0, 0.15);
	glTexCoord2f(10, 0); glVertex3f(0.235, 0, 0.31);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0.235, 0, 0.31);
	glTexCoord2f(10, 0); glVertex3f(0.25, 0, 0.35);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);


	//Middle Brick Part
	glTexCoord2f(0, 0); glVertex3f(0.25, 0, 0.35);
	glTexCoord2f(10, 0); glVertex3f(0.5, 0, 0);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0.5, 0, 0);
	glTexCoord2f(10, 0); glVertex3f(0.52, 0, 0.1);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0.52, 0, 0.1);
	glTexCoord2f(10, 0); glVertex3f(0.6, 0, 0.15);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0.6, 0, 0.15);
	glTexCoord2f(10, 0); glVertex3f(0.7, 0, 0.32);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0.7, 0, 0.32);
	glTexCoord2f(10, 0); glVertex3f(0.75, 0, 0.35);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);


	//Right Wood Tower
	glTexCoord2f(0, 0); glVertex3f(0.75, 0, 0.35);
	glTexCoord2f(1, 0); glVertex3f(0.7625, 0, 0.31);
	glTexCoord2f(0.5, 0); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0.7625, 0, 0.31);
	glTexCoord2f(10, 0); glVertex3f(0.78, 0, 0.23);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0.78, 0, 0.23);
	glTexCoord2f(10, 0); glVertex3f(0.815, 0, 0.30);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0.815, 0, 0.30);
	glTexCoord2f(10, 0); glVertex3f(0.85, 0, 0.35);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	//Right Brick part
	glTexCoord2f(0, 0); glVertex3f(0.85, 0, 0.35);
	glTexCoord2f(10, 0); glVertex3f(1, 0, 0.65);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(1, 0, 0.65);
	glTexCoord2f(10, 0); glVertex3f(1, 0, 0.8);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);
	glEnd();

//Back
	glBegin(GL_TRIANGLES);
	glTexCoord2f(0, 0); glVertex3f(1, 1, 0.75);
	glTexCoord2f(10, 0); glVertex3f(0, 1, 0.65);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);
	glEnd();

//Left
	//Right Side
	glBegin(GL_TRIANGLES);
	glTexCoord2f(0, 0); glVertex3f(0, 0, 0.8);
	glTexCoord2f(10, 0); glVertex3f(0, 0, 0.6);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0, 0.02, 0.82);
	glTexCoord2f(10, 0); glVertex3f(0, 0, 0.8);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0, 0.1, 0.75);
	glTexCoord2f(10, 0); glVertex3f(0, 0.02, 0.82);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0, 0.2, 0.7);
	glTexCoord2f(10, 0); glVertex3f(0, 0.17, 0.6);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0, 0.17, 0.6);
	glTexCoord2f(10, 0); glVertex3f(0, 0.15, 0.6);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0, 0.15, 0.6);
	glTexCoord2f(10, 0); glVertex3f(0, 0.1, 0.75);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0, 0.32, 0.72);
	glTexCoord2f(10, 0); glVertex3f(0, 0.28, 0.64);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0, 0.28, 0.64);
	glTexCoord2f(10, 0); glVertex3f(0, 0.2, 0.7);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0, 0.42, 0.75);
	glTexCoord2f(10, 0); glVertex3f(0, 0.35, 0.6);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0, 0.35, 0.6);
	glTexCoord2f(10, 0); glVertex3f(0, 0.32, 0.72);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0, 0.5, 0.65);
	glTexCoord2f(10, 0); glVertex3f(0, 0.42, 0.75);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	//Left Side
	glTexCoord2f(0, 0); glVertex3f(0, 0.55, 0.68);
	glTexCoord2f(10, 0); glVertex3f(0, 0.5, 0.65);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0, 0.6, 0.6);
	glTexCoord2f(10, 0); glVertex3f(0, 0.55, 0.68);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0, 0.7, 0.6);
	glTexCoord2f(10, 0); glVertex3f(0, 0.6, 0.6);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0, 0.75, 0.8);
	glTexCoord2f(10, 0); glVertex3f(0, 0.7, 0.6);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0, 0.8, 0.72);
	glTexCoord2f(10, 0); glVertex3f(0, 0.75, 0.8);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0, 0.85, 0.68);
	glTexCoord2f(10, 0); glVertex3f(0, 0.8, 0.72);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0, 0.925, 0.75);
	glTexCoord2f(10, 0); glVertex3f(0, 0.85, 0.68);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(0, 1, 0.65);
	glTexCoord2f(10, 0); glVertex3f(0, 0.925, 0.75);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);
	glEnd();

//Right
	//Left Side
	glBegin(GL_TRIANGLES);
	glTexCoord2f(0, 0); glVertex3f(1, 0, 0.8);
	glTexCoord2f(10, 0); glVertex3f(1, 0.02, 0.82);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(1, 0.02, 0.82);
	glTexCoord2f(10, 0); glVertex3f(1, 0.1, 0.75);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(1, 0.1, 0.75);
	glTexCoord2f(10, 0); glVertex3f(1, 0.15, 0.65);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(1, 0.15, 0.65);
	glTexCoord2f(10, 0); glVertex3f(1, 0.17, 0.65);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(1, 0.17, 0.65);
	glTexCoord2f(10, 0); glVertex3f(1, 0.2, 0.7);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(1, 0.2, 0.7);
	glTexCoord2f(10, 0); glVertex3f(1, 0.28, 0.65);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(1, 0.28, 0.65);
	glTexCoord2f(10, 0); glVertex3f(1, 0.32, 0.72);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(1, 0.32, 0.72);
	glTexCoord2f(10, 0); glVertex3f(1, 0.35, 0.67);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(1, 0.35, 0.67);
	glTexCoord2f(10, 0); glVertex3f(1, 0.41, 0.69);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(1, 0.41, 0.69);
	glTexCoord2f(10, 0); glVertex3f(1, 0.42, 0.75);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(1, 0.42, 0.75);
	glTexCoord2f(10, 0); glVertex3f(1, 0.5, 0.69);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);
	glEnd();

	//Right Side
	glBegin(GL_TRIANGLES);
	glTexCoord2f(0, 0); glVertex3f(1, 0.5, 0.69);
	glTexCoord2f(10, 0); glVertex3f(1, 0.55, 0.65);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(1, 0.55, 0.65);
	glTexCoord2f(10, 0); glVertex3f(1, 0.6, 0.8);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(1, 0.6, 0.8);
	glTexCoord2f(10, 0); glVertex3f(1, 0.7, 0.85);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);

	glTexCoord2f(0, 0); glVertex3f(1, 0.7, 0.85);
	glTexCoord2f(10, 0); glVertex3f(1, 1, 0.85);
	glTexCoord2f(10, 1); glVertex3f(0.5, 0.5, 0.75);
	glEnd();

}
