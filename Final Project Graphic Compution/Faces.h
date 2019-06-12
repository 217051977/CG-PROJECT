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

//CCW
void create_Bot___Top_Body_Left_Tower_Face() {

    //  sets the beginning with only the lines that surrounds it
    //glBegin(drawStyle);
	glBegin(drawStyle);

    /*
     * set a vertex on the position (0, 0, 0)
     * set a vertex on the position (1, 0, 0)
     * set a vertex on the position (1, 1, 0)
     * set a vertex on the position (0, 1, 0)
     * */
	glVertex3f(0, 0, 0);
    glVertex3f(0, 0.5, -0.25);
    glVertex3f(0, 1, 0);
    glVertex3f(0.5, 1, -0.25);
    glVertex3f(1, 1, 0);
    glVertex3f(1, 0.5, -0.25);
    glVertex3f(1, 0, 0);
    glVertex3f(0.5, 0, -0.25);

    //	sets the ending of the draw connecting the first vertex draw with the last
    glEnd();

}

//CW
void create_Front___Top_Body_Left_Tower_Face() {

	//  sets the beginning with only the lines that surrounds it
	glBegin(drawStyle);

	/*
	 * set a vertex on the position (0, 0, 0)
	 * set a vertex on the position (0, 1, 0)
	 * set a vertex on the position (0, 1, 1)
	 * set a vertex on the position (0, 0, 1)
	 * */
	glVertex3f(0, 0, 0);
	glVertex3f(0, 0, 1);
	glVertex3f(1, 0, 1);
	glVertex3f(1, 0, 0);
	glVertex3f(0.5, 0, -0.25);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

//CCW
void create_Back___Top_Body_Left_Tower_Face() {

	//  sets the beginning with only the lines that surrounds it
	glBegin(drawStyle);

	/*
	 * set a vertex on the position (0, 0, 0)
	 * set a vertex on the position (0, 1, 0)
	 * set a vertex on the position (0, 1, 1)
	 * set a vertex on the position (0, 0, 1)
	 * */
	glVertex3f(0, 1, 0);
	glVertex3f(0.5, 1, -0.25);
	glVertex3f(1, 1, 0);
	glVertex3f(1, 1, 1);
	glVertex3f(0, 1, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

//CW
void create_Left___Top_Body_Left_Tower_Face() {

    //  sets the beginning with only the lines that surrounds it
    glBegin(drawStyle);

    /*
     * set a vertex on the position (0, 0, 0)
     * set a vertex on the position (0, 1, 0)
     * set a vertex on the position (0, 1, 1)
     * set a vertex on the position (0, 0, 1)
     * */
	glVertex3f(0, 0, 0);
	glVertex3f(0, 0.5, -0.25);
	glVertex3f(0, 1, 0);
	glVertex3f(0, 1, 1);
	glVertex3f(0, 0, 1);

    //	sets the ending of the draw connecting the first vertex draw with the last
    glEnd();

}

//CCW
void create_Right___Top_Body_Left_Tower_Face() {

	//  sets the beginning with only the lines that surrounds it
	glBegin(drawStyle);

	/*
	 * set a vertex on the position (0, 0, 0)
	 * set a vertex on the position (0, 1, 0)
	 * set a vertex on the position (0, 1, 1)
	 * set a vertex on the position (0, 0, 1)
	 * */
	glVertex3f(0, 0, 0);
	glVertex3f(0, 0, 1);
	glVertex3f(0, 1, 1);
	glVertex3f(0, 1, 0);
	glVertex3f(0, 0.5, -0.25);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}
/**********************************************************************************************************************/
//CW
void create_Top___Bot_Body_Left_Tower_Face() {

    //  sets the beginning with only the lines that surrounds it
    glBegin(drawStyle);

    /*
     * set a vertex on the position (0, 0, 0)
     * set a vertex on the position (1, 0, 0)
     * set a vertex on the position (1, 1, 0)
     * set a vertex on the position (0, 1, 0)
     * */
    glVertex3f(0, 0, 1);
	glVertex3f(0, 0.5, 0.83);
	glVertex3f(0, 1, 1);
	glVertex3f(0.5, 1, 0.83);
	glVertex3f(1, 1, 1);
	glVertex3f(1, 0.5, 0.83);
	glVertex3f(1, 0, 1);
    glVertex3f(0.5, 0, 0.83);

    //	sets the ending of the draw connecting the first vertex draw with the last
    glEnd();

}

//CW
void create_Left___Bot_Body_Left_Tower_Face() {

    //  sets the beginning with only the lines that surrounds it
    glBegin(drawStyle);

    /*
     * set a vertex on the position (0, 0, 0)
     * set a vertex on the position (0, 1, 0)
     * set a vertex on the position (0, 1, 1)
     * set a vertex on the position (0, 0, 1)
     * */
	glVertex3f(0, 0, 0);
	glVertex3f(0, 1, 0);
	glVertex3f(0, 1, 1);
	glVertex3f(0, 0.5, 0.83);
	glVertex3f(0, 0, 1);

    //	sets the ending of the draw connecting the first vertex draw with the last
    glEnd();

}

//CCW
void create_Right___Bot_Body_Left_Tower_Face() {

	//  sets the beginning with only the lines that surrounds it
	glBegin(drawStyle);

	/*
	 * set a vertex on the position (0, 0, 0)
	 * set a vertex on the position (0, 1, 0)
	 * set a vertex on the position (0, 1, 1)
	 * set a vertex on the position (0, 0, 1)
	 * */
	glVertex3f(1, 0, 0);
	glVertex3f(1, 0, 1);
	glVertex3f(1, 0.5, 0.83);
	glVertex3f(1, 1, 1);
	glVertex3f(1, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

//CW
void create_Front___Bot_Body_Left_Tower_Face() {

	//  sets the beginning with only the lines that surrounds it
	glBegin(drawStyle);

	/*
	 * set a vertex on the position (0, 0, 0)
	 * set a vertex on the position (0, 1, 0)
	 * set a vertex on the position (0, 1, 1)
	 * set a vertex on the position (0, 0, 1)
	 * */
	glVertex3f(0, 0, 0);
	glVertex3f(0, 0, 1);
	glVertex3f(0.5, 0, 0.83);
	glVertex3f(1, 0, 1);
	glVertex3f(1, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

//CCW
void create_Back___Bot_Body_Left_Tower_Face() {

	//  sets the beginning with only the lines that surrounds it
	glBegin(drawStyle);

	/*
	 * set a vertex on the position (0, 0, 0)
	 * set a vertex on the position (0, 1, 0)
	 * set a vertex on the position (0, 1, 1)
	 * set a vertex on the position (0, 0, 1)
	 * */
	glVertex3f(0, 1, 0);
	glVertex3f(1, 1, 0);
	glVertex3f(1, 1, 1);
	glVertex3f(0.5, 1, 0.83);
	glVertex3f(0, 1, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}
/**********************************************************************************************************************/
//CW
void create_Front_Face() {

	//  sets the beginning with only the lines that surrounds it
	glBegin(drawStyle);

	/*
	 * set a vertex on the position (0, 0, 0)
	 * set a vertex on the position (1, 0, 0)
	 * set a vertex on the position (1, 0, 1)
	 * set a vertex on the position (0, 0, 1)
	 * */
	glVertex3f(0, 0, 0);
	glVertex3f(0, 0, 1);
	glVertex3f(1, 0, 1);
	glVertex3f(1, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

//CCW
void create_Back_Face() {

	glBegin(drawStyle);

    glVertex3f(0, 1, 0);
    glVertex3f(1, 1, 0);
	glVertex3f(1, 1, 1);
    glVertex3f(0, 1, 1);

	glEnd();

}

//CCW
void create_Bot_Face() {

	glBegin(drawStyle);

    glVertex3f(0, 0, 0);
	glVertex3f(1, 0, 0);
	glVertex3f(1, 1, 0);
    glVertex3f(0, 1, 0);

	glEnd();

}

//CW
void create_Top_Face() {

    glBegin(drawStyle);

	glVertex3f(0, 0, 1);
	glVertex3f(0, 1, 1);
    glVertex3f(1, 1, 1);
	glVertex3f(1, 0, 1);

    glEnd();

}

//CW
void create_Left_Face() {

	glBegin(drawStyle);

    glVertex3f(0, 0, 0);
	glVertex3f(0, 1, 0);
	glVertex3f(0, 1, 1);
    glVertex3f(0, 0, 1);

	glEnd();

}

//CCW
void create_Right_Face() {

    glBegin(drawStyle);

    glVertex3f(1, 0, 0);
	glVertex3f(1, 0, 1);
	glVertex3f(1, 1, 1);
    glVertex3f(1, 1, 0);

    glEnd();

}
/**********************************************************************************************************************/



//create pyramidal face
void create_Front_Pyramidal_Face() {

	//  sets the beginning with only the lines that surrounds it
	glBegin(drawStyle);

	/*
	 * set a vertex on the position (0, 0, 0)
	 * set a vertex on the position (1, 0, 0)
	 * set a vertex on the position (0.5, 0.5, 1)
	 * */
	glVertex3f(0, 0, 0);
	glVertex3f(0.5, 0.5, 1);
	glVertex3f(1, 0, 0);

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




void create_bridge_Front_Face() {

    glPushMatrix();
    glTranslatef(0.5, 0, 0);
    glRotatef(90, 1, 0, 0);
    glBegin(drawStyle);
    draw_Circle(0, PI, 0.5, 0.25, 0);
    glVertex3f(-0.5, 1, 0);
    glVertex3f(0.5, 1, 0);
    glEnd();
    glPopMatrix();

}

void create_bridge_Bot_Face() {

    glPushMatrix();
    glTranslatef(0.5, 1, 0);
    glRotatef(90, 1, 0, 0);
    glBegin(drawStyle);
    draw_Circle(0, PI, 0.5, 0.25, 0);
    draw_Inverted_Circle(PI, 0, 0.5, 0.25, 1);
    glEnd();
    glPopMatrix();

}

void create_bridge_Bot_Detail_Front_Face() {

    glPushMatrix();
    glTranslatef(0.5, 1, 0);
    glRotatef(90, 1, 0, 0);
    glBegin(drawStyle);
    draw_Vertical_Circle(0, PI, 0.5, 1, 0);
    draw_Vertical_Inverted_Circle(PI, 0, 0.5, 1, 1);
    glEnd();
    glPopMatrix();

}

void create_bridge_Bot_Detail_Bot_Face() {

    glPushMatrix();
    glTranslatef(0.5, 1, 0);
    glRotatef(90, 1, 0, 0);
    glBegin(drawStyle);
    draw_Circle(0, PI, 0.5, 1, 0);
    draw_Inverted_Circle(PI, 0, 0.5, 1, 1);
    glEnd();
    glPopMatrix();

}



/**********************************************************************************************************************/
//CW
void create_Left_Ruined_Tower_Bot___Front_Face() {

//    left brick tower
	glBegin(drawStyle);
	glVertex3f(0, 0, 1);
	glVertex3f(0.15, 0, 0.925);
	glVertex3f(0.15, 0, 0.45);
	glVertex3f(0.09, 0, 0.56);
	glVertex3f(0.06, 0, 0.65);
	glVertex3f(0, 0, 0.6);
	glEnd();

//    left wood tower
	glBegin(drawStyle);
	glVertex3f(0.15, 0, 0.925);
	glVertex3f(0.25, 0, 0.875);
	glVertex3f(0.25, 0, 0.35);
	glVertex3f(0.235, 0, 0.31);
	glVertex3f(0.215, 0, 0.15);
	glVertex3f(0.15, 0, 0.45);
	glEnd();

//    middle brick tower
	glBegin(drawStyle);
	glVertex3f(0.25, 0, 0.35);
	glVertex3f(0.25, 0, 0.875);
	glVertex3f(0.5, 0, 0.75);
	glVertex3f(0.75, 0, 0.875);
	glVertex3f(0.75, 0, 0.35);
	glVertex3f(0.7, 0, 0.32);
	glVertex3f(0.6, 0, 0.15);
	glVertex3f(0.52, 0, 0.1);
	glVertex3f(0.5, 0, 0);
	glEnd();

//    right wood tower
    glBegin(drawStyle);
    glVertex3f(0.85, 0, 0.925);
	glVertex3f(0.85, 0, 0.35);
	glVertex3f(0.815, 0, 0.30);
	glVertex3f(0.78, 0, 0.23);
	glVertex3f(0.7625, 0, 0.31);
	glVertex3f(0.75, 0, 0.35);
    glVertex3f(0.75, 0, 0.875);
    glEnd();

//    right brick tower
    glBegin(drawStyle);
    glVertex3f(0.85, 0, 0.925);
	glVertex3f(1, 0, 1);
	glVertex3f(1, 0, 0.65);
	glVertex3f(0.85, 0, 0.35);
    glEnd();

}

//CW
void create_Left_Ruined_Tower_Bot___Back_Face() {

	//Left Side
	glBegin(drawStyle);
	glVertex3f(0, 1, 1);
	glVertex3f(0, 1, 0.65);
	glVertex3f(0.5, 1, 0.7);
	glVertex3f(0.5, 1, 0.75);
	glEnd();

	//Right Side
	glBegin(drawStyle);
	glVertex3f(0.5, 1, 0.7);
	glVertex3f(1, 1, 0.75);
	glVertex3f(1, 1, 1);
	glVertex3f(0.5, 1, 0.75);
	glEnd();

}

//CW
void create_Left_Ruined_Tower_Bot___Left_Face() {

	//Right Side
    glBegin(drawStyle);
	glVertex3f(0, 0, 0.8);
	glVertex3f(0, 0.02, 0.82);
	glVertex3f(0, 0.02, 0.99);
    glVertex3f(0, 0, 1);
    glEnd();

	glBegin(drawStyle);
	glVertex3f(0, 0.02, 0.82);
	glVertex3f(0, 0.1, 0.75);
	glVertex3f(0, 0.1, 0.95);
	glVertex3f(0, 0.02, 0.99);
	glEnd();

	glBegin(drawStyle);
	glVertex3f(0, 0.1, 0.75);
	glVertex3f(0, 0.15, 0.6);
	glVertex3f(0, 0.17, 0.6);
	glVertex3f(0, 0.2, 0.7);
	glVertex3f(0, 0.2, 0.91);
	glVertex3f(0, 0.1, 0.95);
	glEnd();

	glBegin(drawStyle);
	glVertex3f(0, 0.2, 0.7);
	glVertex3f(0, 0.28, 0.64);
	glVertex3f(0, 0.32, 0.72);
	glVertex3f(0, 0.32, 0.845);
	glVertex3f(0, 0.2, 0.91);
	glEnd();

	glBegin(drawStyle);
	glVertex3f(0, 0.32, 0.72);
	glVertex3f(0, 0.35, 0.6);
	glVertex3f(0, 0.42, 0.75);
	glVertex3f(0, 0.42, 0.825);
	glVertex3f(0, 0.32, 0.845);
	glEnd();

	glBegin(drawStyle);
	glVertex3f(0, 0.42, 0.75);
	glVertex3f(0, 0.5, 0.65);
	glVertex3f(0, 0.5, 0.75);
	glVertex3f(0, 0.42, 0.825);
	glEnd();

	//Left Side	
	glBegin(drawStyle);
	glVertex3f(0, 0.5, 0.65);
	glVertex3f(0, 0.55, 0.68);
	glVertex3f(0, 0.55, 0.78);
	glVertex3f(0, 0.5, 0.75);
	glEnd();

	glBegin(drawStyle);
	glVertex3f(0, 0.55, 0.68);
	glVertex3f(0, 0.6, 0.6);
	glVertex3f(0, 0.7, 0.6);
	glVertex3f(0, 0.75, 0.8);
	glVertex3f(0, 0.75, 0.88);
	glVertex3f(0, 0.55, 0.78);
	glEnd();

	glBegin(drawStyle);
	glVertex3f(0, 0.75, 0.8);
	glVertex3f(0, 0.8, 0.72);
	glVertex3f(0, 0.85, 0.68);
	glVertex3f(0, 0.925, 0.75);
	glVertex3f(0, 0.925, 0.965);
	glVertex3f(0, 0.75, 0.88);
	glEnd();

	glBegin(drawStyle);
	glVertex3f(0, 0.925, 0.75);
	glVertex3f(0, 1, 0.65);
	glVertex3f(0, 1, 1);
	glVertex3f(0, 0.925, 0.965);
	glEnd();
	
}

//CCW
void create_Left_Ruined_Tower_Bot___Right_Face() {

	//Left Side
    glBegin(drawStyle);
    glVertex3f(1, 0, 1);
	glVertex3f(1, 0.02, 0.99);
	glVertex3f(1, 0.02, 0.82);
    glVertex3f(1, 0, 0.8);
    glEnd();

	glBegin(drawStyle);
	glVertex3f(1, 0.2, 0.9);
	glVertex3f(1, 0.2, 0.7);
	glVertex3f(1, 0.17, 0.65);
	glVertex3f(1, 0.15, 0.65);
	glVertex3f(1, 0.1, 0.75);
	glVertex3f(1, 0.02, 0.82);
	glVertex3f(1, 0.02, 0.99);
	glEnd();

	glBegin(drawStyle);
	glVertex3f(1, 0.32, 0.84);
	glVertex3f(1, 0.32, 0.72);
	glVertex3f(1, 0.28, 0.65);
	glVertex3f(1, 0.2, 0.7);
	glVertex3f(1, 0.2, 0.9);
	glEnd();

	glBegin(drawStyle);
	glVertex3f(1, 0.42, 0.75);
	glVertex3f(1, 0.41, 0.69);
	glVertex3f(1, 0.35, 0.67);
	glVertex3f(1, 0.32, 0.72);
	glVertex3f(1, 0.32, 0.84);
	glVertex3f(1, 0.42, 0.79);
	glEnd();

	glBegin(drawStyle);
	glVertex3f(1, 0.5, 0.69);
	glVertex3f(1, 0.42, 0.75);
	glVertex3f(1, 0.42, 0.79);
	glVertex3f(1, 0.5, 0.75);
	glEnd();

	//Right Side
	glBegin(drawStyle);
	glVertex3f(1, 0.6, 0.8);
	glVertex3f(1, 0.55, 0.65);
	glVertex3f(1, 0.5, 0.69);
	glVertex3f(1, 0.5, 0.75);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	glVertex3f(1, 1, 1);
	glVertex3f(1, 1, 0.85);
	glVertex3f(1, 0.7, 0.85);
	glEnd();

}

//CCW
void create_Left_Ruined_Tower_Bot___Bot_Face() {

//	Front
	//Left Brick part	
	glBegin(GL_TRIANGLE_STRIP);
	glVertex3f(0, 0, 0.6);
	glVertex3f(0.06, 0, 0.65);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0.06, 0, 0.65);
	glVertex3f(0.09, 0, 0.56);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0.09, 0, 0.56);
	glVertex3f(0.15, 0, 0.45);
	glVertex3f(0.5, 0.5, 0.75);


	//Left Wood Part
	glVertex3f(0.15, 0, 0.45);
	glVertex3f(0.215, 0, 0.15);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0.215, 0, 0.15);
	glVertex3f(0.235, 0, 0.31);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0.235, 0, 0.31);
	glVertex3f(0.25, 0, 0.35);
	glVertex3f(0.5, 0.5, 0.75);


	//Middle Brick Part
	glVertex3f(0.25, 0, 0.35);
	glVertex3f(0.5, 0, 0);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0.5, 0, 0);
	glVertex3f(0.52, 0, 0.1);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0.52, 0, 0.1);
	glVertex3f(0.6, 0, 0.15);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0.6, 0, 0.15);
	glVertex3f(0.7, 0, 0.32);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0.7, 0, 0.32);
	glVertex3f(0.75, 0, 0.35);
	glVertex3f(0.5, 0.5, 0.75);


	//Right Wood Tower
	glVertex3f(0.75, 0, 0.35);
	glVertex3f(0.7625, 0, 0.31);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0.7625, 0, 0.31);
	glVertex3f(0.78, 0, 0.23);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0.78, 0, 0.23);
	glVertex3f(0.815, 0, 0.30);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0.815, 0, 0.30);
	glVertex3f(0.85, 0, 0.35);
	glVertex3f(0.5, 0.5, 0.75);

	//Right Brick part
	glVertex3f(0.85, 0, 0.35);
	glVertex3f(1, 0, 0.65);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(1, 0, 0.65);
	glVertex3f(1, 0, 0.8);
	glVertex3f(0.5, 0.5, 0.75);
	glEnd();

//Back
	glBegin(GL_TRIANGLE_STRIP);
	glVertex3f(1, 1, 0.75);
	glVertex3f(0, 1, 0.65);
	glVertex3f(0.5, 0.5, 0.75);
	glEnd();

//Left
	//Right Side
	glBegin(GL_TRIANGLE_STRIP);
	glVertex3f(0, 0, 0.8);
	glVertex3f(0, 0, 0.6);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0, 0.02, 0.82);
	glVertex3f(0, 0, 0.8);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0, 0.1, 0.75);
	glVertex3f(0, 0.02, 0.82);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0, 0.2, 0.7);
	glVertex3f(0, 0.17, 0.6);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0, 0.17, 0.6);
	glVertex3f(0, 0.15, 0.6);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0, 0.15, 0.6);
	glVertex3f(0, 0.1, 0.75);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0, 0.32, 0.72);
	glVertex3f(0, 0.28, 0.64);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0, 0.28, 0.64);
	glVertex3f(0, 0.2, 0.7);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0, 0.42, 0.75);
	glVertex3f(0, 0.35, 0.6);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0, 0.35, 0.6);
	glVertex3f(0, 0.32, 0.72);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0, 0.5, 0.65);
	glVertex3f(0, 0.42, 0.75);
	glVertex3f(0.5, 0.5, 0.75);

	//Left Side
	glVertex3f(0, 0.55, 0.68);
	glVertex3f(0, 0.5, 0.65);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0, 0.6, 0.6);
	glVertex3f(0, 0.55, 0.68);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0, 0.7, 0.6);
	glVertex3f(0, 0.6, 0.6);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0, 0.75, 0.8);
	glVertex3f(0, 0.7, 0.6);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0, 0.8, 0.72);
	glVertex3f(0, 0.75, 0.8);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0, 0.85, 0.68);
	glVertex3f(0, 0.8, 0.72);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0, 0.925, 0.75);
	glVertex3f(0, 0.85, 0.68);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(0, 1, 0.65);
	glVertex3f(0, 0.925, 0.75);
	glVertex3f(0.5, 0.5, 0.75);
	glEnd();

//Right
	//Left Side
	glBegin(GL_TRIANGLE_STRIP);
	glVertex3f(1, 0, 0.8);
	glVertex3f(1, 0.02, 0.82);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(1, 0.02, 0.82);
	glVertex3f(1, 0.1, 0.75);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(1, 0.1, 0.75);
	glVertex3f(1, 0.15, 0.65);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(1, 0.15, 0.65);
	glVertex3f(1, 0.17, 0.65);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(1, 0.17, 0.65);
	glVertex3f(1, 0.2, 0.7);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(1, 0.2, 0.7);
	glVertex3f(1, 0.28, 0.65);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(1, 0.28, 0.65);
	glVertex3f(1, 0.32, 0.72);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(1, 0.32, 0.72);
	glVertex3f(1, 0.35, 0.67);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(1, 0.35, 0.67);
	glVertex3f(1, 0.41, 0.69);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(1, 0.41, 0.69);
	glVertex3f(1, 0.42, 0.75);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(1, 0.42, 0.75);
	glVertex3f(1, 0.5, 0.69);
	glVertex3f(0.5, 0.5, 0.75);
	glEnd();

	//Right Side
	glBegin(GL_TRIANGLE_STRIP);
	glVertex3f(1, 0.5, 0.69);
	glVertex3f(1, 0.55, 0.65);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(1, 0.55, 0.65);
	glVertex3f(1, 0.6, 0.8);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(1, 0.6, 0.8);
	glVertex3f(1, 0.7, 0.85);
	glVertex3f(0.5, 0.5, 0.75);

	glVertex3f(1, 0.7, 0.85);
	glVertex3f(1, 1, 0.85);
	glVertex3f(0.5, 0.5, 0.75);
	glEnd();

}
/**********************************************************************************************************************/



void create_Gate_Left_Door_Front_Face() {

    glPushMatrix();
    glRotatef(90, 1, 0, 0);
	glTranslatef(0.5, 0.5, 0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.5, 0, 0);
	glVertex3f(0, 0, 0);
	glVertex3f(0, -0.5, 0);
	glVertex3f(-0.5, -0.5, 0);
	glEnd();
    draw_Circle(PI / 2, PI, 0.5, 0.6, 0);
    glPopMatrix();

}

void create_Gate_Left_Door_Back_Face() {

	glPushMatrix();
	glRotatef(90, 1, 0, 0);
	glTranslatef(0.5, 0.5, 0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.5, 0, 0);
	glVertex3f(0, 0, 0);
	glVertex3f(0, -0.5, 0);
	glVertex3f(-0.5, -0.5, 0);
	glEnd();
	draw_Circle(PI / 2, PI, 0.5, 0.6, 0);
	glPopMatrix();

}

void create_Gate_Right_Door_Front_Face() {

    glPushMatrix();
    glRotatef(90, 1, 0, 0);
    glTranslatef(0.5, 0.5, 0);
	glBegin(GL_POLYGON);
	glVertex3f(0, -0.5, 0);
	glVertex3f(0, 0, 0);
	glVertex3f(0.5, 0, 0);
	glVertex3f(0.5, -0.5, 0);
	glEnd();
	/*
    */
    draw_Inverted_Circle(PI / 2, 0, 0.5, 0.6, 0);
    glPopMatrix();

}

void create_Gate_Left_Door_Top_Face() {

    glPushMatrix();
    glRotatef(90, 1, 0, 0);
    glTranslatef(0.5, 0.5, -1);
    glBegin(drawStyle);
    draw_Circle(PI / 2, PI, 0.5, 0.6, 0);
    draw_Inverted_Circle(PI, PI / 2, 0.5, 0.6, 1);
    glEnd();
    glPopMatrix();

}

void create_Gate_Right_Door_Top_Face() {

    glPushMatrix();
    glRotatef(90, 1, 0, 0);
    glTranslatef(0.5, 0.5, -1);
    glBegin(drawStyle);
    draw_Circle(0, PI / 2, 0.5, 0.6, 0);
    draw_Inverted_Circle(PI / 2, 0, 0.5, 0.6, 1);
    glEnd();
    glPopMatrix();

}
