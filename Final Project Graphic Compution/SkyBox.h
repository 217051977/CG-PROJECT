#pragma once

int skyTexture = 18;
int wallTexture = 17;
int lavaTexture = 16;

int floorTimes = 200;
int skyTimes = 1;
int yTimes = 5;
int xTimes = yTimes * 3;
int yTimesSideSky = 0.999;

void createBack() {

	glPushMatrix();

	glTranslatef(0, -1, 0);

	//glBindTexture(GL_TEXTURE_2D, texture[skyTexture]);
	//
	//glPushMatrix();
	//glTranslatef(0, 0, 0.5);
	//glScalef(1, 1, 0.5);
	//
	//create_Back_Face(0, yTimesSideSky, 1, 1);
	//
	//glPopMatrix();

	glBindTexture(GL_TEXTURE_2D, texture[wallTexture]);

	//glPushMatrix();
	//glScalef(1, 1, 0.5);

	create_Back_Face(0, 0, xTimes, yTimes);

	//glPopMatrix();

	glPopMatrix();

}

void createFront() {

	glPushMatrix();

	glTranslatef(0, 1, 0);

	//glBindTexture(GL_TEXTURE_2D, texture[skyTexture]);
	//
	//glPushMatrix();
	//glTranslatef(0, 0, 0.5);
	//glScalef(1, 1, 0.5);
	//
	//create_Front_Face(0, yTimesSideSky, 1, 1);
	//
	//glPopMatrix();

	glBindTexture(GL_TEXTURE_2D, texture[wallTexture]);

	//glPushMatrix();
	//glScalef(1, 1, 0.5);

	create_Front_Face(0, 0, xTimes, yTimes);

	//glPopMatrix();

	glPopMatrix();

}

void createRight() {

	glPushMatrix();

	glTranslatef(1, 0, 0);

	//glBindTexture(GL_TEXTURE_2D, texture[skyTexture]);
	//
	//glPushMatrix();
	//glTranslatef(0, 0, 0.5);
	//glScalef(1, 1, 0.5);
	//
	//create_Left_Face(1, yTimesSideSky, 0, 1);
	//
	//glPopMatrix();

	glBindTexture(GL_TEXTURE_2D, texture[wallTexture]);

	//glPushMatrix();
	//glScalef(1, 1, 0.5);

	create_Left_Face(0, 0, xTimes, yTimes);

	//glPopMatrix();

	glPopMatrix();

}

void createLeft() {

	glPushMatrix();

	glTranslatef(-1, 0, 0);

	//glBindTexture(GL_TEXTURE_2D, texture[skyTexture]);
	//
	//glPushMatrix();
	//glTranslatef(0, 0, 0.5);
	//glScalef(1, 1, 0.5);
	//
	//create_Right_Face(1, yTimesSideSky, 0, 1);
	//
	//glPopMatrix();
	
	glBindTexture(GL_TEXTURE_2D, texture[wallTexture]);
	
	//glPushMatrix();
	//glScalef(1, 1, 0.5);

	create_Right_Face(0, 0, xTimes, yTimes);

	//glPopMatrix();

	glPopMatrix();

}

void createBot() {

	glPushMatrix();

	glTranslatef(0, 0, -1);

	glBindTexture(GL_TEXTURE_2D, texture[lavaTexture]);

	create_Top_Face(0, 0, floorTimes, floorTimes);

	glPopMatrix();

}

void createTop() {

	glPushMatrix();

	glTranslatef(0, 0, 1);

	glBindTexture(GL_TEXTURE_2D, texture[skyTexture]);

	create_Bot_Face(0, 0, skyTimes, skyTimes);

	glPopMatrix();

}

void createSkyBox() {

	glPushMatrix();

	glBindTexture(GL_TEXTURE_2D, texture[wallTexture]);

	glTranslatef(-0.5, -0.5, 0);

	createFront();

	createBack();

	createLeft();

	createRight();

	createTop();

	createBot();

	glPopMatrix();

}

void drawSkyBox() {

	glPushMatrix();
	glTranslatef(X_INITIAL + 250, -  2 * Y_INITIAL, -1.1);
	glScaled(60000, 60000, 7500);

	createSkyBox();

	glPopMatrix();

}
