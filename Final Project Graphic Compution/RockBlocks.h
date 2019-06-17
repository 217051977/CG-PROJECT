/***********************************************************************************************************************
*                                                                                                                      *
*                                                     RockBlocks.h                                                     *
*                                                                                                                      *
*                                  This file is responsible to create the rock blocks                                  *
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

//left
void draw_Left_RockBlock() {

	glPushMatrix();
	glTranslatef(-40, -40, 0);
	glScalef(80, 80, 1);

	glBindTexture(GL_TEXTURE_2D, texture[17]);

	glBegin(GL_POLYGON);

	glTexCoord2f(0.5, 1); glVertex3f(0.5, 1, 0);
	glTexCoord2f(0.6, 0.97); glVertex3f(0.6, 0.97, 0);
	glTexCoord2f(0.7, 0.95); glVertex3f(0.7, 0.95, 0);
	glTexCoord2f(0.8, 0.9); glVertex3f(0.8, 0.9, 0);
	glTexCoord2f(0.9, 0.8); glVertex3f(0.9, 0.8, 0);
	glTexCoord2f(1, 0.5); glVertex3f(1, 0.5, 0);
	glTexCoord2f(0.9, 0.2); glVertex3f(0.9, 0.2, 0);
	glTexCoord2f(0.8, 0.1); glVertex3f(0.8, 0.1, 0);
	glTexCoord2f(0.7, 0.05); glVertex3f(0.7, 0.05, 0);
	glTexCoord2f(0.6, 0.005); glVertex3f(0.6, 0.005, 0);
	glTexCoord2f(0.5, 0); glVertex3f(0.5, 0, 0);

	glTexCoord2f(0.425, 0); glVertex3f(0.425, 0, 0);
	glTexCoord2f(0.4, 0.003125); glVertex3f(0.4, 0.003125, 0);
	glTexCoord2f(0.375, 0.00625); glVertex3f(0.375, 0.00625, 0);
	glTexCoord2f(0.35, 0.003125); glVertex3f(0.35, 0.003125, 0);
	glTexCoord2f(0.325, 0.0125); glVertex3f(0.325, 0.0125, 0);
	glTexCoord2f(0.25, 0.0625); glVertex3f(0.25, 0.0625, 0);
	glTexCoord2f(0.125, 0.15); glVertex3f(0.125, 0.15, 0);
	glTexCoord2f(0.0625, 0.25); glVertex3f(0.0625, 0.25, 0);
	glTexCoord2f(0.03125, 0.5); glVertex3f(0.03125, 0.5, 0);
	glTexCoord2f(0, 0.5625); glVertex3f(0, 0.5625, 0);
	glTexCoord2f(0.03125, 0.625); glVertex3f(0.03125, 0.625, 0);
	glTexCoord2f(0.0625, 0.6875); glVertex3f(0.0625, 0.6875, 0);
	glTexCoord2f(0.09375, 0.8125); glVertex3f(0.09375, 0.8125, 0);
	glTexCoord2f(0.1875, 0.9375); glVertex3f(0.1875, 0.9375, 0);
	
	glEnd();

	glPopMatrix();

}

//left__middle connection
void draw_LeftMiddle_RockBlock_Connection() {

	glPushMatrix();
	glTranslatef(51, -40, 0);
	glScalef(107, 80, 1);

	glBindTexture(GL_TEXTURE_2D, texture[17]);

	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0.6875); glVertex3f(0, 0.6875, 0);
	glTexCoord2f(0.18, 0.75); glVertex3f(0.18, 0.75, 0);
	glTexCoord2f(0.36, 0.875); glVertex3f(0.36, 0.875, 0);

	glTexCoord2f(0.45, 1); glVertex3f(0.45, 1, 0);
	glTexCoord2f(0.72, 0.96875); glVertex3f(0.72, 0.96875, 0);
	glTexCoord2f(0.81, 0.875); glVertex3f(0.81, 0.875, 0);
	glTexCoord2f(1, 1); glVertex3f(1, 1, 0);
	glTexCoord2f(0.945, 0.975); glVertex3f(0.945, 0.975, 0);
	glTexCoord2f(0.9, 0.85); glVertex3f(0.9, 0.85, 0);
	glTexCoord2f(0.855, 0.725); glVertex3f(0.855, 0.725, 0);
	glTexCoord2f(0.765, 0.225); glVertex3f(0.765, 0.225, 0);

	glTexCoord2f(0.783, 0.1875); glVertex3f(0.783, 0.1875, 0);
	glTexCoord2f(0.72, 0.1875); glVertex3f(0.72, 0.1875, 0);
	glTexCoord2f(0.54, 0.25); glVertex3f(0.54, 0.25, 0);
	glTexCoord2f(0.45, 0.1875); glVertex3f(0.45, 0.1875, 0);
	glTexCoord2f(0.36, 0.0625); glVertex3f(0.36, 0.0625, 0);
	glTexCoord2f(0.2475, 0.125); glVertex3f(0.2475, 0.125, 0);
	glTexCoord2f(0.18, 0.25); glVertex3f(0.18, 0.25, 0);
	glTexCoord2f(0, 0.1875); glVertex3f(0, 0.1875, 0);
	glTexCoord2f(-0.27, 0.07); glVertex3f(-0.27, 0.07, 0);
	glTexCoord2f(-0.17, 0.8); glVertex3f(-0.17, 0.8, 0);

	glEnd();

	glPopMatrix();

}

//middle rock block
void draw_Middle_RockBlock() {

	int x = 2;
	int y = 2;

	glPushMatrix();
	glTranslatef(-5, 0, 0);
	glScalef(195, 150, 1);

	glBindTexture(GL_TEXTURE_2D, texture[17]);

	glBegin(GL_POLYGON);

	glTexCoord2f(0.325 * x, 0 * y); glVertex3f(0.325, 0, 0);
	glTexCoord2f(0.3 * x, 0 * y); glVertex3f(0.3, 0, 0);
	glTexCoord2f(0.175 * x, 0.07 * y); glVertex3f(0.175, 0.07, 0);

	glTexCoord2f(0.125 * x, 0.28 * y); glVertex3f(0.125, 0.28, 0);
	glTexCoord2f(0.035 * x, 0.35 * y); glVertex3f(0.035, 0.35, 0);
	glTexCoord2f(0 * x, 0.49 * y); glVertex3f(0, 0.49, 0);
	glTexCoord2f(0.05 * x, 0.77 * y); glVertex3f(0.05, 0.77, 0);
	glTexCoord2f(0.075 * x, 0.84 * y); glVertex3f(0.075, 0.84, 0);
	glTexCoord2f(0.1 * x, 0.91 * y); glVertex3f(0.1, 0.91, 0);
	glTexCoord2f(0.15 * x, 0.98 * y); glVertex3f(0.15, 0.98, 0);
	glTexCoord2f(0.35 * x, 1 * y); glVertex3f(0.35, 1, 0);

	glTexCoord2f(0.35 * x, 0.98 * y); glVertex3f(0.35, 0.98, 0);
	glTexCoord2f(0.55 * x, 0.98 * y); glVertex3f(0.55, 0.98, 0);
	glTexCoord2f(0.675 * x, 1 * y); glVertex3f(0.675, 1, 0);
	glTexCoord2f(0.725 * x, 0.98 * y); glVertex3f(0.725, 0.98, 0);
	glTexCoord2f(0.875 * x, 0.91 * y); glVertex3f(0.875, 0.91, 0);
	glTexCoord2f(0.9 * x, 0.875 * y); glVertex3f(0.9, 0.875, 0);
	glTexCoord2f(0.925 * x, 0.805 * y); glVertex3f(0.925, 0.805, 0);
	glTexCoord2f(0.975 * x, 0.7 * y); glVertex3f(0.975, 0.7, 0);
	glTexCoord2f(0.925 * x, 0.49 * y); glVertex3f(0.925, 0.49, 0);
	glTexCoord2f(0.9 * x, 0.42 * y); glVertex3f(0.9, 0.42, 0);
	glTexCoord2f(0.825 * x, 0.28 * y); glVertex3f(0.825, 0.28, 0);
	glTexCoord2f(0.8 * x, 0.21 * y); glVertex3f(0.8, 0.21, 0);
	glTexCoord2f(0.775 * x, 0.105 * y); glVertex3f(0.775, 0.105, 0);
	glTexCoord2f(0.725 * x, 0 * y); glVertex3f(0.725, 0, 0);

	glEnd();

	glPopMatrix();

//  sets the beginning with only the lines that surrounds it
    glBegin(GL_LINE_LOOP);

    glVertex3f(60, 0, 0);
    glVertex3f(55, 0, 0);
    glVertex3f(30, 10, 0);
    glVertex3f(20, 40, 0);
    glVertex3f(2, 50, 0);
    glVertex3f(-5, 70, 0);
    glVertex3f(5, 110, 0);
    glVertex3f(10, 120, 0);
    glVertex3f(15, 130, 0);
    glVertex3f(25, 140, 0);
    glVertex3f(65, 150, 0);
    glVertex3f(65, 140, 0);
    glVertex3f(105, 140, 0);
    glVertex3f(130, 145, 0);
    glVertex3f(140, 140, 0);
    glVertex3f(170, 130, 0);
    glVertex3f(175, 125, 0);
    glVertex3f(180, 115, 0);
    glVertex3f(190, 100, 0);
    glVertex3f(180, 70, 0);
    glVertex3f(175, 60, 0);
    glVertex3f(160, 40, 0);
    glVertex3f(155, 30, 0);
    glVertex3f(150, 15, 0);
    glVertex3f(140, 0, 0);

//	sets the ending of the draw connecting the first vertex draw with the last
    glEnd();

}

//right__middle connection
void draw_RightMiddle_RockBlock_Connection() {

	glPushMatrix();
	glTranslatef(-10, -10, 0);
	glScalef(60, 80, 1);

	glBindTexture(GL_TEXTURE_2D, texture[17]);

	glBegin(GL_POLYGON);

	glTexCoord2f(0.17, 0.125); glVertex3f(0.17, 0.125, 0);
	glTexCoord2f(0.34, -0.03125); glVertex3f(0.34, -0.03125, 0);
	glTexCoord2f(0.51, 0.025); glVertex3f(0.51, 0.025, 0);
	glTexCoord2f(0.595, 0.0625); glVertex3f(0.595, 0.0625, 0);
	glTexCoord2f(0.51, 0.25); glVertex3f(0.51, 0.25, 0);
	glTexCoord2f(0.476, 0.4375); glVertex3f(0.476, 0.4375, 0);
	glTexCoord2f(0.595, 0.625); glVertex3f(0.595, 0.625, 0);
	glTexCoord2f(0.85, 0.75); glVertex3f(0.85, 0.75, 0);
	glTexCoord2f(1.02, 0.875); glVertex3f(1.02, 0.875, 0);
	glTexCoord2f(0.765, 0.8125); glVertex3f(0.765, 0.8125, 0);
	glTexCoord2f(0.51, 0.9); glVertex3f(0.51, 0.9, 0);
	glTexCoord2f(0.425, 0.875); glVertex3f(0.425, 0.875, 0);
	glTexCoord2f(0.085, 0.975); glVertex3f(0.085, 0.975, 0);
	glTexCoord2f(0, 0.875); glVertex3f(0, 0.875, 0);
	glTexCoord2f(0.085, 0.8125); glVertex3f(0.085, 0.8125, 0);
	glTexCoord2f(0.17, 0.6875); glVertex3f(0.17, 0.6875, 0);
	glTexCoord2f(0.34, 0.5); glVertex3f(0.34, 0.5, 0);

	glEnd();

	glPopMatrix();

//  sets the beginning with only the lines that surrounds it
    glBegin(GL_LINE_LOOP);

    glVertex3f(0, 0, 0);
    glVertex3f(10, -12.5, 0);
    glVertex3f(20, -8, 0);
    glVertex3f(25, -5, 0);
    glVertex3f(20, 10, 0);
    glVertex3f(18, 25, 0);
    glVertex3f(25, 40, 0);
    glVertex3f(40, 50, 0);
    glVertex3f(50, 60, 0);
    glVertex3f(35, 55, 0);
    glVertex3f(20, 62, 0);
    glVertex3f(15, 60, 0);
    glVertex3f(-5, 68, 0);
    glVertex3f(-10, 60, 0);
    glVertex3f(-5, 55, 0);
    glVertex3f(0, 45, 0);
    glVertex3f(10, 30, 0);

//	sets the ending of the draw connecting the first vertex draw with the last
    glEnd();

}

//right
void draw_Right_RockBlock() {

//  sets the beginning with only the lines that surrounds it
    glBegin(GL_LINE_LOOP);

    /*
     * set a vertex on the position (15, 30, 0)
     * set a vertex on the position (5, 35, 0)
     * set a vertex on the position (0, 50, 0)
     * set a vertex on the position (-2, 65, 0)
     * set a vertex on the position (5, 80, 0)
     * set a vertex on the position (20, 90, 0)
     * set a vertex on the position (30, 100, 0)
     * set a vertex on the position (65, 105, 0)
     * set a vertex on the position (100, 100, 0)
     * set a vertex on the position (110, 95, 0)
     * set a vertex on the position (120, 85, 0)
     * set a vertex on the position (125, 75, 0)
     * set a vertex on the position (130, 70, 0)
     * set a vertex on the position (132, 65, 0)
     * set a vertex on the position (130, 60, 0)
     * set a vertex on the position (135, 50, 0)
     * set a vertex on the position (125, 20, 0)
     * set a vertex on the position (115, 20, 0)
     * set a vertex on the position (107, 10, 0)
     * set a vertex on the position (100, 3, 0)
     * set a vertex on the position (67.5, 0, 0)
     * set a vertex on the position (50, 5, 0)
     * set a vertex on the position (30, 5, 0)
     * set a vertex on the position (20, 15, 0)
     * */
    glVertex3f(15, 30, 0);
    glVertex3f(5, 35, 0);
    glVertex3f(0, 50, 0);
    glVertex3f(-2, 65, 0);
    glVertex3f(5, 80, 0);
    glVertex3f(20, 90, 0);
    glVertex3f(30, 100, 0);
    glVertex3f(65, 105, 0);
    glVertex3f(100, 100, 0);
    glVertex3f(110, 95, 0);
    glVertex3f(120, 85, 0);
    glVertex3f(125, 75, 0);
    glVertex3f(130, 70, 0);
    glVertex3f(132, 65, 0);
    glVertex3f(130, 60, 0);
    glVertex3f(135, 50, 0);
    glVertex3f(125, 20, 0);
    glVertex3f(115, 20, 0);
    glVertex3f(107, 10, 0);
    glVertex3f(100, 3, 0);
    glVertex3f(67.5, 0, 0);
    glVertex3f(50, 5, 0);
    glVertex3f(30, 5, 0);
    glVertex3f(20, 15, 0);

//	sets the ending of the draw connecting the first vertex draw with the last
    glEnd();

}

/**********************************************************************/
//delivery path
void draw_DeliveryPath_RockBlock() {

//  sets the beginning with only the lines that surrounds it
    glBegin(GL_LINE_LOOP);

    /*
     * set a vertex on the position (0, 0, 0)
     * set a vertex on the position (40, 0, 0)
     * set a vertex on the position (65, 5, 0)
     * set a vertex on the position (50, 10, 0)
     * set a vertex on the position (55, 30, 0)
     * set a vertex on the position (45, 40, 0)
     * set a vertex on the position (40, 70, 0)
     * set a vertex on the position (5, 70, 0)
     * set a vertex on the position (5, 60, 0)
     * set a vertex on the position (0, 45, 0)
     * set a vertex on the position (0, 30, 0)
     * set a vertex on the position (-5, 15, 0)
     * set a vertex on the position (0, 10, 0)
     * */
    glVertex3f(0, 0, 0);
    glVertex3f(40, 0, 0);
    glVertex3f(65, 5, 0);
    glVertex3f(50, 10, 0);
    glVertex3f(55, 30, 0);
    glVertex3f(45, 40, 0);
    glVertex3f(40, 70, 0);
    glVertex3f(5, 70, 0);
    glVertex3f(5, 60, 0);
    glVertex3f(0, 45, 0);
    glVertex3f(0, 30, 0);
    glVertex3f(-5, 15, 0);
    glVertex3f(0, 10, 0);

//	sets the ending of the draw connecting the first vertex draw with the last
    glEnd();

}

/**********************************************************************/
//entrance path full
void draw_EntrancePath_Full_RockBlock() {

//  sets the beginning with only the lines that surrounds it
    glBegin(GL_LINE_LOOP);

    /*
     * set a vertex on the position (-64, 15, 0)
     * set a vertex on the position (1, 15, 0)
     * set a vertex on the position (1, 10, 0)
     * call the function draw_Circle()
     * set a vertex on the position (6, -10, 0)
     * set a vertex on the position (4, -15, 0)
     * set a vertex on the position (21, -25, 0)
     * set a vertex on the position (36, -45, 0)
     * set a vertex on the position (36, -55, 0)
     * set a vertex on the position (37, -60, 0)
     * set a vertex on the position (41, -65, 0)
     * set a vertex on the position (45, -70, 0)
     * set a vertex on the position (46, -75, 0)
     * set a vertex on the position (56, -85, 0)
     * set a vertex on the position (46, -95, 0)
     * set a vertex on the position (44, -97, 0)
     * set a vertex on the position (41, -97, 0)
     * set a vertex on the position (34, -105, 0)
     * set a vertex on the position (-4, -115, 0)
     * set a vertex on the position (-24, -113, 0)
     * set a vertex on the position (-54, -125, 0)
     * set a vertex on the position (-79, -122, 0)
     * set a vertex on the position (-74, -135, 0)
     * set a vertex on the position (-79, -150, 0)
     * set a vertex on the position (-79, -155, 0)
     * set a vertex on the position (-114, -155, 0)
     * set a vertex on the position (-124, -145, 0)
     * set a vertex on the position (-126, -140, 0)
     * set a vertex on the position (-129, -135, 0)
     * set a vertex on the position (-126, -130, 0)
     * set a vertex on the position (-124, -115, 0)
     * set a vertex on the position (-114, -115, 0)
     * set a vertex on the position (-104, -110, 0)
     * set a vertex on the position (-101.5, -105, 0)
     * set a vertex on the position (-104, -95, 0)
     * set a vertex on the position (-89, -90, 0)
     * set a vertex on the position (-84, -80, 0)
     * set a vertex on the position (-69, -75, 0)
     * set a vertex on the position (-44, -85, 0)
     * set a vertex on the position (-39, -90, 0)
     * set a vertex on the position (-24, -80, 0)
     * set a vertex on the position (1, -75, 0)
     * set a vertex on the position (-14, -65, 0)
     * set a vertex on the position (-7, -52, 0)
     * set a vertex on the position (-9, -45, 0)
     * set a vertex on the position (-29, -35, 0)
     * set a vertex on the position (-39, -5, 0)
     * */
    glVertex3f(-64, 15, 0);
    glVertex3f(1, 15, 0);
    glVertex3f(1, 10, 0);
    draw_Circle((PI / 2), ((3 * PI) / 2), 2, 5, 0); //74 -15
    glVertex3f(6, -10, 0);
    glVertex3f(4, -15, 0);
    glVertex3f(21, -25, 0);
    glVertex3f(36, -45, 0);
    glVertex3f(36, -55, 0);
    glVertex3f(37, -60, 0);
    glVertex3f(41, -65, 0);
    glVertex3f(45, -70, 0);
    glVertex3f(46, -75, 0);
    glVertex3f(56, -85, 0);
    glVertex3f(46, -95, 0);
    glVertex3f(44, -97, 0);
    glVertex3f(41, -97, 0);
    glVertex3f(34, -105, 0);
    glVertex3f(-4, -115, 0);
    glVertex3f(-24, -113, 0);
    glVertex3f(-54, -125, 0);
    glVertex3f(-79, -122, 0);
    glVertex3f(-74, -135, 0);
    glVertex3f(-79, -150, 0);
    glVertex3f(-79, -155, 0);
    glVertex3f(-114, -155, 0);
    glVertex3f(-124, -145, 0);
    glVertex3f(-126, -140, 0);
    glVertex3f(-129, -135, 0);
    glVertex3f(-126, -130, 0);
    glVertex3f(-124, -115, 0);
    glVertex3f(-114, -115, 0);
    glVertex3f(-104, -110, 0);
    glVertex3f(-101.5, -105, 0);
    glVertex3f(-104, -95, 0);
    glVertex3f(-89, -90, 0);
    glVertex3f(-84, -80, 0);
    glVertex3f(-69, -75, 0);
    glVertex3f(-44, -85, 0);
    glVertex3f(-39, -90, 0);
    glVertex3f(-24, -80, 0);
    glVertex3f(1, -75, 0);
    glVertex3f(-14, -65, 0);
    glVertex3f(-7, -52, 0);
    glVertex3f(-9, -45, 0);
    glVertex3f(-29, -35, 0);
    glVertex3f(-39, -5, 0);

//	sets the ending of the draw connecting the first vertex draw with the last
    glEnd();

}

/**********************************************************************/
//entrance path
void draw_Castle_RockBlock() {

//  sets the beginning with only the lines that surrounds it
    glBegin(GL_LINE_LOOP);

    /*
     * call the function draw_circle()
     * set a vertex on the position (-18, -205, 100)
     * set a vertex on the position (-18, -205, 0)
     * set a vertex on the position (-70, -205, 0)
     * set a vertex on the position (-98.5, -185, 0)
     * set a vertex on the position (-128.5, -180, 0)
     * set a vertex on the position (-134.5, -175, 0)
     * set a vertex on the position (-158.5, -155, 0)
     * set a vertex on the position (-183.5, -145, 0)
     * set a vertex on the position (-188.5, -140, 0)
     * set a vertex on the position (-188.5, -135, 0)
     * set a vertex on the position (-183.5, -115, 0)
     * set a vertex on the position (-193.5, -95, 0)
     * set a vertex on the position (-203.5, -85, 0)
     * set a vertex on the position (-218.5, -45, 0)
     * set a vertex on the position (-221.5, 0, 0)
     * set a vertex on the position (-218.5, 25, 0)
     * set a vertex on the position (-208.5, 45, 0)
     * set a vertex on the position (-193.5, 75, 0)
     * set a vertex on the position (-198.5, 115, 0)
     * set a vertex on the position (-183.5, 145, 0)
     * set a vertex on the position (-183.5, 155, 0)
     * set a vertex on the position (-168.5, 175, 0)
     * set a vertex on the position (-158.5, 165, 0)
     * set a vertex on the position (-153.5, 195, 0)
     * set a vertex on the position (-123.5, 210, 0)
     * set a vertex on the position (-108.5, 205, 0)
     * set a vertex on the position (-58.5, 215, 0)
     * set a vertex on the position (0, 210, 0)
     * set a vertex on the position (11.5, 225, 0)
     * set a vertex on the position (51.5, 215, 0)
     * set a vertex on the position (71.5, 195, 0)
     * set a vertex on the position (91.5, 195, 0)
     * set a vertex on the position (111.5, 175, 0)
     * set a vertex on the position (141.5, 165, 0)
     * set a vertex on the position (151.5, 155, 0)
     * set a vertex on the position (171.5, 150, 0)
     * set a vertex on the position (188.5, 135, 0)
     * set a vertex on the position (201.5, 115, 0)
     * set a vertex on the position (191.5, 105, 0)
     * set a vertex on the position (201.5, 85, 0)
     * set a vertex on the position (201.5, 65, 0)
     * set a vertex on the position (221, 35, 0)
     * set a vertex on the position (211.5, 0, 0)
     * set a vertex on the position (231.5, -25, 0)
     * set a vertex on the position (226.5, -30, 0)
     * set a vertex on the position (211.5, -55, 0)
     * set a vertex on the position (201.5, -58, 0)
     * set a vertex on the position (206.5, -80, 0)
     * set a vertex on the position (191.5, -95, 0)
     * set a vertex on the position (181.5, -105, 0)
     * set a vertex on the position (171.5, -130, 0)
     * set a vertex on the position (151.5, -155, 0)
     * set a vertex on the position (141.5, -165, 0)
     * set a vertex on the position (90.5, -195, 0)
     * set a vertex on the position (55, -205, 0)
     * set a vertex on the position (30, -210, 0)
     * set a vertex on the position (17, -205, 0)
     * set a vertex on the position (17, -205, 100)
     * */
    draw_Circle(-(13 * PI) / 30, (37 * PI) / 26, 205, 205, 150);
    glVertex3f(-18, -205, 100);
    glVertex3f(-18, -205, 0);
    glVertex3f(-70, -205, 0);
    glVertex3f(-98.5, -185, 0);
    glVertex3f(-128.5, -180, 0);
    glVertex3f(-134.5, -175, 0);
    glVertex3f(-158.5, -155, 0);
    glVertex3f(-183.5, -145, 0);
    glVertex3f(-188.5, -140, 0);
    glVertex3f(-188.5, -135, 0);
    glVertex3f(-183.5, -115, 0);
    glVertex3f(-193.5, -95, 0);
    glVertex3f(-203.5, -85, 0);
    glVertex3f(-218.5, -45, 0);
    glVertex3f(-221.5, 0, 0);
    glVertex3f(-218.5, 25, 0);
    glVertex3f(-208.5, 45, 0);
    glVertex3f(-193.5, 75, 0);
    glVertex3f(-198.5, 115, 0);
    glVertex3f(-183.5, 145, 0);
    glVertex3f(-183.5, 155, 0);
    glVertex3f(-168.5, 175, 0);
    glVertex3f(-158.5, 165, 0);
    glVertex3f(-153.5, 195, 0);
    glVertex3f(-123.5, 210, 0);
    glVertex3f(-108.5, 205, 0);
    glVertex3f(-58.5, 215, 0);
    glVertex3f(0, 210, 0);
    glVertex3f(11.5, 225, 0);
    glVertex3f(51.5, 215, 0);
    glVertex3f(71.5, 195, 0);
    glVertex3f(91.5, 195, 0);
    glVertex3f(111.5, 175, 0);
    glVertex3f(141.5, 165, 0);
    glVertex3f(151.5, 155, 0);
    glVertex3f(171.5, 150, 0);
    glVertex3f(188.5, 135, 0);
    glVertex3f(201.5, 115, 0);
    glVertex3f(191.5, 105, 0);
    glVertex3f(201.5, 85, 0);
    glVertex3f(201.5, 65, 0);
    glVertex3f(221, 35, 0);
    glVertex3f(211.5, 0, 0);
    glVertex3f(231.5, -25, 0);
    glVertex3f(226.5, -30, 0);
    glVertex3f(211.5, -55, 0);
    glVertex3f(201.5, -58, 0);
    glVertex3f(206.5, -80, 0);
    glVertex3f(191.5, -95, 0);
    glVertex3f(181.5, -105, 0);
    glVertex3f(171.5, -130, 0);
    glVertex3f(151.5, -155, 0);
    glVertex3f(141.5, -165, 0);
    glVertex3f(90.5, -195, 0);
    glVertex3f(55, -205, 0);
    glVertex3f(30, -210, 0);
    glVertex3f(17, -205, 0);
    glVertex3f(17, -205, 100);

//	sets the ending of the draw connecting the first vertex draw with the last
    glEnd();

}