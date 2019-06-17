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
	glTranslatef(53, -39, 0);
	glScalef(107, 80, 1);

	glBindTexture(GL_TEXTURE_2D, texture[17]);

	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0.6875); glVertex3f(0, 0.6875, 0);
	glTexCoord2f(0.18, 0.75); glVertex3f(0.18, 0.75, 0);
	glTexCoord2f(0.36, 0.875); glVertex3f(0.36, 0.875, 0);
	glTexCoord2f(0.45, 1); glVertex3f(0.45, 1, 0);
	glTexCoord2f(0.72, 0.96875); glVertex3f(0.72, 0.96875, 0);
	glTexCoord2f(0.81, 0.875); glVertex3f(0.81, 0.875, 0);

	glTexCoord2f(.93, 1); glVertex3f(.93, 1, 0);
	glTexCoord2f(0.86, 0.8); glVertex3f(0.86, 0.8, 0);
	glTexCoord2f(0.85, 0.7); glVertex3f(0.85, 0.7, 0);
	glTexCoord2f(.82, .6); glVertex3f(.82, .6, 0);
	glTexCoord2f(.81, .5); glVertex3f(.81, .5, 0);
	glTexCoord2f(.8, .4); glVertex3f(.8, .4, 0);
	glTexCoord2f(.775, .26); glVertex3f(.775, .26, 0);

	glTexCoord2f(0.783, 0.1875); glVertex3f(0.783, 0.1875, 0);
	glTexCoord2f(0.72, 0.1875); glVertex3f(0.72, 0.1875, 0);
	glTexCoord2f(0.54, 0.25); glVertex3f(0.54, 0.25, 0);
	glTexCoord2f(0.45, 0.1875); glVertex3f(0.45, 0.1875, 0);
	glTexCoord2f(0.36, 0.0625); glVertex3f(0.36, 0.0625, 0);
	glTexCoord2f(0.2475, 0.125); glVertex3f(0.2475, 0.125, 0);
	glTexCoord2f(0.18, 0.25); glVertex3f(0.18, 0.25, 0);
	glTexCoord2f(0, 0.1875); glVertex3f(0, 0.1875, 0);
	glTexCoord2f(-0.27, 0.08); glVertex3f(-0.27, 0.08, 0);
	glTexCoord2f(-0.27, 0.8); glVertex3f(-0.27, 0.8, 0);

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
	glTexCoord2f(0.3591 * x, 1 * y); glVertex3f(0.3591, 1, 0);
	
	glTexCoord2f(0.3591 * x, 0.98 * y); glVertex3f(0.3591, 0.98, 0);
	glTexCoord2f(0.5643 * x, 0.98 * y); glVertex3f(0.5643, 0.98, 0);
	glTexCoord2f(0.69255 * x, 1 * y); glVertex3f(0.69255, 1, 0);
	glTexCoord2f(0.74385 * x, 0.98 * y); glVertex3f(0.74385, 0.98, 0);
	glTexCoord2f(0.89775 * x, 0.91 * y); glVertex3f(0.89775, 0.91, 0);
	glTexCoord2f(0.933 * x, 0.875 * y); glVertex3f(0.933, 0.875, 0);
	glTexCoord2f(0.955 * x, 0.805 * y); glVertex3f(0.955, 0.805, 0);
	glTexCoord2f(1.00035 * x, 0.667 * y); glVertex3f(1.00035, 0.667, 0);
	glTexCoord2f(0.955 * x, 0.49 * y); glVertex3f(0.955, 0.49, 0);
	glTexCoord2f(0.933 * x, 0.42 * y); glVertex3f(0.933, 0.42, 0);
	glTexCoord2f(0.85 * x, 0.28 * y); glVertex3f(0.85, 0.28, 0);
	glTexCoord2f(0.8208 * x, 0.21 * y); glVertex3f(0.8208, 0.21, 0);
	glTexCoord2f(0.79515 * x, 0.105 * y); glVertex3f(0.79515, 0.105, 0);
	glTexCoord2f(0.74385 * x, 0 * y); glVertex3f(0.74385, 0, 0);
	
	glEnd();

	glPopMatrix();

}

//right__middle connection
void draw_RightMiddle_RockBlock_Connection() {

	glPushMatrix();
	glTranslatef(-10, 2, 0);
	glScalef(60, 80, 1);

	glBindTexture(GL_TEXTURE_2D, texture[17]);

	glBegin(GL_POLYGON);

	glTexCoord2f(.04, .78); glVertex3f(.04, .78, 0);
	glTexCoord2f(.08335, .8375); glVertex3f(.08335, .8375, 0);
	glTexCoord2f(.5, .5); glVertex3f(.5, .5, 0);
	glTexCoord2f(.33, .35); glVertex3f(.33, .35, 0);

	glEnd();

	glBegin(GL_POLYGON);
	
	glTexCoord2f(.08335, .8375); glVertex3f(.08335, .8375, 0);
	glTexCoord2f(.405, .73); glVertex3f(.405, .73, 0);
	glTexCoord2f(.5, .75); glVertex3f(.5, .75, 0);
	glTexCoord2f(.75, .66); glVertex3f(.75, .66, 0);
	glTexCoord2f(.5, .5); glVertex3f(.5, .5, 0);
	
	glEnd();

	glBegin(GL_POLYGON);

	glTexCoord2f(.75, .66); glVertex3f(.75, .66, 0);
	glTexCoord2f(1, .72); glVertex3f(1, .72, 0);
	glTexCoord2f(.86, .61); glVertex3f(.86, .61, 0);
	glTexCoord2f(.6, .485); glVertex3f(.6, .485, 0);
	glTexCoord2f(.46, .29); glVertex3f(.46, .29, 0);
	glTexCoord2f(.33, .35); glVertex3f(.33, .35, 0);
	glTexCoord2f(.5, .5); glVertex3f(.5, .5, 0);

	glEnd();

	glBegin(GL_POLYGON);

	glTexCoord2f(.46, .29); glVertex3f(.46, .29, 0);
	glTexCoord2f(.5, .1); glVertex3f(.5, .1, 0);
	glTexCoord2f(.6, -.1); glVertex3f(.6, -.1, 0);
	glTexCoord2f(.335, -.2); glVertex3f(.335, -.2, 0);
	glTexCoord2f(0.15, -.02); glVertex3f(0.15, -.02, 0);
	glTexCoord2f(.33, .35); glVertex3f(.33, .35, 0);

	glEnd();

	glPopMatrix();

}

//right
void draw_Right_RockBlock() {

	int n = 2;

	glPushMatrix();
	glTranslatef(-2, 0, 0);
	glScalef(137, 105, 1);

	glBindTexture(GL_TEXTURE_2D, texture[17]);

	glBegin(GL_POLYGON);

	glTexCoord2f(.1241 * n, 0.2 * n); glVertex3f(.1241, 0.2, 0);
	glTexCoord2f(.0511 * n, .3332 * n); glVertex3f(.0511, .3332, 0);
	glTexCoord2f(.0146 * n, .476 * n); glVertex3f(.0146, .476, 0);
	glTexCoord2f(0 * n, .476 * n); glVertex3f(0, .476, 0);
	glTexCoord2f(0 * n, .7 * n); glVertex3f(0, .7, 0);
	glTexCoord2f(.0511 * n, .7616 * n); glVertex3f(.0511, .7616, 0);
	glTexCoord2f(.1971 * n, .9 * n); glVertex3f(.1971, .9, 0);
	glTexCoord2f(.2336 * n, .952 * n); glVertex3f(.2336, .952, 0);
	glTexCoord2f(.4891 * n, .9996 * n); glVertex3f(.4891, .9996, 0);
	glTexCoord2f(.7446 * n, 0.952 * n); glVertex3f(.7446, 0.952, 0);
	glTexCoord2f(.8176 * n, .9044 * n); glVertex3f(.8176, .9044, 0);
	glTexCoord2f(.8906 * n, .8092 * n); glVertex3f(.8906, .8092, 0);
	glTexCoord2f(.9271 * n, .714 * n); glVertex3f(.9271, .714, 0);
	glTexCoord2f(.9636 * n, .6664 * n); glVertex3f(.9636, .6664, 0);
	glTexCoord2f(.9782 * n, .476 * n); glVertex3f(.9782, .476, 0);
	glTexCoord2f(.9636 * n, .5712 * n); glVertex3f(.9636, .5712, 0);
	glTexCoord2f(1 * n, .476 * n); glVertex3f(1, .476, 0);
	glTexCoord2f(.9271 * n, .1904 * n); glVertex3f(.9271, .1904, 0);
	glTexCoord2f(.8541 * n, .1904 * n); glVertex3f(.8541, .1904, 0);
	glTexCoord2f(.7957 * n, .0952 * n); glVertex3f(.7957, .0952, 0);
	glTexCoord2f(.7446 * n, .02856 * n); glVertex3f(.7446, .02856, 0);
	glTexCoord2f(.50735 * n, 0 * n); glVertex3f(.50735, 0, 0);
	glTexCoord2f(.3796 * n, .0476 * n); glVertex3f(.3796, .0476, 0);
	glTexCoord2f(.2336 * n, .0476 * n); glVertex3f(.2336, .0476, 0);
	glTexCoord2f(.1971 * n, .1428 * n); glVertex3f(.1971, .1428, 0);

	glEnd();

	glPopMatrix();

}

/**********************************************************************/
//delivery path
void draw_DeliveryPath_RockBlock() {

	glPushMatrix();
	glTranslatef(-5, 7, 0);
	glScalef(70, 65, 1);

	glBindTexture(GL_TEXTURE_2D, texture[17]);

	glBegin(GL_POLYGON);

	glTexCoord2f(.07145, .1429); glVertex3f(.07145, .1429, 0);
	glTexCoord2f(0, .3); glVertex3f(0, .3, 0);
	glTexCoord2f(.07145, .4287); glVertex3f(.07145, .4287, 0);
	glTexCoord2f(.07145, .64305); glVertex3f(.07145, .64305, 0);
	glTexCoord2f(.1429, .8574); glVertex3f(.1429, .8574, 0);
	glTexCoord2f(.1429, 1); glVertex3f(.1429, 1, 0);
	glTexCoord2f(.64305, 1); glVertex3f(.64305, 1, 0);
	glTexCoord2f(.7145, .5716); glVertex3f(.7145, .5716, 0);
	glTexCoord2f(.8574, .4287); glVertex3f(.8574, .4287, 0);
	glTexCoord2f(.78595, .1429); glVertex3f(.78595, .1429, 0);
	glTexCoord2f(1, .03); glVertex3f(1, .03, 0);
	glTexCoord2f(.8, .01); glVertex3f(.8, .01, 0);
	glTexCoord2f(.64305, 0); glVertex3f(.64305, 0, 0);
	glTexCoord2f(.07145, 0); glVertex3f(.07145, 0, 0);

	glEnd();

	glPopMatrix();

}

/**********************************************************************/
//entrance path full
void draw_EntrancePath_Full_RockBlock() {

	int n = 2;

	glPushMatrix();
	glTranslatef(-129, -155, 0);
	glScalef(185, 170, 1);

	glBindTexture(GL_TEXTURE_2D, texture[17]);

	glBegin(GL_POLYGON);

	glTexCoord2f(.27 * n, .2 * n); glVertex3f(.27, .2, 0);
	glTexCoord2f(.3 * n, .1 * n); glVertex3f(.3, .1, 0);
	glTexCoord2f(.27 * n, 0 * n); glVertex3f(.27, 0, 0);
	glTexCoord2f(0.08 * n, 0 * n); glVertex3f(0.08, 0, 0);
	glTexCoord2f(0 * n, .1 * n); glVertex3f(0, .1, 0);
	glTexCoord2f(.03 * n, .25 * n); glVertex3f(.03, .25, 0);
	glTexCoord2f(.14 * n, .3 * n); glVertex3f(.14, .3, 0);

	glEnd();

	glBegin(GL_POLYGON);

	glTexCoord2f(.9 * n, .55 * n); glVertex3f(.9, .55, 0);
	glTexCoord2f(1 * n, .4 * n); glVertex3f(1, .4, 0);
	glTexCoord2f(.9 * n, .3 * n); glVertex3f(.9, .3, 0);
	glTexCoord2f(.55 * n, .25 * n); glVertex3f(.55, .25, 0);
	glTexCoord2f(.4 * n, .18 * n); glVertex3f(.4, .18, 0);
	glTexCoord2f(.27 * n, .2 * n); glVertex3f(.27, .2, 0);
	glTexCoord2f(.14 * n, .3 * n); glVertex3f(.14, .3, 0);
	glTexCoord2f(.24 * n, .45 * n); glVertex3f(.24, .45, 0);
	glTexCoord2f(.33 * n, .47 * n); glVertex3f(.33, .47, 0);
	glTexCoord2f(.5 * n, .4 * n); glVertex3f(.5, .4, 0);
	glTexCoord2f(.59 * n, .45 * n); glVertex3f(.59, .45, 0);
	glTexCoord2f(.71 * n, .47 * n); glVertex3f(.71, .47, 0);

	glEnd();

	glBegin(GL_POLYGON);

	glTexCoord2f(.9 * n, .55 * n); glVertex3f(.9, .55, 0);
	glTexCoord2f(.71 * n, .47 * n); glVertex3f(.71, .47, 0);
	glTexCoord2f(.63 * n, .53 * n); glVertex3f(.63, .53, 0);
	glTexCoord2f(.65 * n, .61 * n); glVertex3f(.65, .61, 0);
	glTexCoord2f(.65 * n, .65 * n); glVertex3f(.65, .65, 0);
	glTexCoord2f(.55 * n, .7 * n); glVertex3f(.55, .7, 0);
	glTexCoord2f(.475 * n, .89 * n); glVertex3f(.475, .89, 0);
	glTexCoord2f(.35 * n, 1 * n); glVertex3f(.35, 1, 0);
	glTexCoord2f(.7 * n, 1 * n); glVertex3f(.7, 1, 0);
	glTexCoord2f(.75 * n, .8 * n); glVertex3f(.75, .8, 0);
	glTexCoord2f(.905 * n, .63 * n); glVertex3f(.905, .63, 0);

	glEnd();

	glPopMatrix();

}

/**********************************************************************/
//entrance path
void draw_Castle_RockBlock() {

	int n = 6;

	glPushMatrix();
	glTranslatef(-221, -210, 0);
	glScalef(441, 435, 1);

	glBindTexture(GL_TEXTURE_2D, texture[17]);

	glBegin(/*GL_LINE_LOOP*/GL_POLYGON);

	glTexCoord2f(.538, .013); glVertex3f(.538, .013, 0);
	glTexCoord2f(.5, .013); glVertex3f(.5, .013, 0);
	glTexCoord2f(.5, .5); glVertex3f(.5, .5, 0);
	glTexCoord2f(.5, .013); glVertex3f(.5, .013, 0);
	glTexCoord2f(.465, .01); glVertex3f(.465, .01, 0);
	glTexCoord2f(.34, .01); glVertex3f(.34, .01, 0);
	glTexCoord2f(.28, .06); glVertex3f(.28, .06, 0);
	glTexCoord2f(.21, .066); glVertex3f(.21, .066, 0);
	glTexCoord2f(.135, .13); glVertex3f(.135, .13, 0);
	glTexCoord2f(.087, .152); glVertex3f(.087, .152, 0);
	glTexCoord2f(.078, .17); glVertex3f(.078, .17, 0);
	glTexCoord2f(.089, .22); glVertex3f(.089, .22, 0);
	glTexCoord2f(.06, .27); glVertex3f(.06, .27, 0);
	glTexCoord2f(.055, .3); glVertex3f(.055, .3, 0);
	glTexCoord2f(.005, .37); glVertex3f(.005, .37, 0);
	glTexCoord2f(.01, .4); glVertex3f(.01, .4, 0);
	glTexCoord2f(0, .5); glVertex3f(0, .5, 0);
	glTexCoord2f(0, .55); glVertex3f(0, .55, 0);
	glTexCoord2f(.06, .65); glVertex3f(.06, .65, 0);
	glTexCoord2f(.06, .75); glVertex3f(.06, .75, 0);
	glTexCoord2f(.09, .82); glVertex3f(.09, .82, 0);
	glTexCoord2f(.09, .85); glVertex3f(.09, .85, 0);
	glTexCoord2f(.12, .88); glVertex3f(.12, .88, 0);
	glTexCoord2f(.145, .86); glVertex3f(.145, .86, 0);
	glTexCoord2f(.15, .934); glVertex3f(.15, .934, 0);
	glTexCoord2f(.22, .97); glVertex3f(.22, .97, 0);
	glTexCoord2f(.255, .95); glVertex3f(.255, .95, 0);
	glTexCoord2f(.3775, .975); glVertex3f(.3775, .975, 0);
	glTexCoord2f(.5, .97); glVertex3f(.5, .97, 0);
	glTexCoord2f(.53, 1); glVertex3f(.53, 1, 0);
	glTexCoord2f(.61, .98); glVertex3f(.61, .98, 0);
	glTexCoord2f(.65, .945); glVertex3f(.65, .945, 0);
	glTexCoord2f(.705, .945); glVertex3f(.705, .945, 0);
	glTexCoord2f(.75, .9); glVertex3f(.75, .9, 0);
	glTexCoord2f(.82, .87); glVertex3f(.82, .87, 0);
	glTexCoord2f(.84, .85); glVertex3f(.84, .85, 0);


	glTexCoord2f(1, .5); glVertex3f(1, .5, 0);

	glEnd();

	glPopMatrix();

//  sets the beginning with only the lines that surrounds it
    glBegin(GL_LINE_LOOP);

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