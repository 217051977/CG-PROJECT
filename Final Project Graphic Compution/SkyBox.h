#pragma once

int skyTexture = 18;
int wallTexture = 17;
int lavaTexture = 16;

int floorTimes = 200;
int skyTimes = 1;
int yTimes = 10;
int xTimes = yTimes * 3;

void createFront() {

	glPushMatrix();

	glTranslatef(0, -1, 0);

	create_Back_Face(0, 0, xTimes, yTimes);

	glPopMatrix();

}

void createBack() {

	glPushMatrix();

	glTranslatef(0, 1, 0);

	create_Front_Face(0, 0, xTimes, yTimes);

	glPopMatrix();

}

void createRight() {

	glPushMatrix();

	glTranslatef(1, 0, 0);

	create_Left_Face(0, 0, xTimes, yTimes);

	glPopMatrix();

}

void createLeft() {

	glPushMatrix();

	glTranslatef(-1, 0, 0);

	create_Right_Face(0, 0, xTimes, yTimes);

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
	glScaled(35000, 35000, 7500);

	createSkyBox();

	glPopMatrix();

}
