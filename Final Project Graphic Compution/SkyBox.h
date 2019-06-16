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

	glBindTexture(GL_TEXTURE_2D, texture[skyTexture]);

	glPushMatrix();
	glTranslatef(0, 0, 0.5);
	glScalef(1, 1, 0.5);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, yTimesSideSky); glVertex3f(0, 1, 1);
	glTexCoord2f(0, 1); glVertex3f(0, 1, 0);
	glTexCoord2f(1, 1); glVertex3f(1, 1, 0);
	glTexCoord2f(1, yTimesSideSky); glVertex3f(1, 1, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glPopMatrix();

	glBindTexture(GL_TEXTURE_2D, texture[wallTexture]);

	glPushMatrix();
	glScalef(1, 1, 0.5);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(1, 1, 0);
	glTexCoord2f(0, yTimes); glVertex3f(1, 1, 1);
	glTexCoord2f(xTimes, yTimes); glVertex3f(0, 1, 1);
	glTexCoord2f(xTimes, 0); glVertex3f(0, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glPopMatrix();

	glPopMatrix();

}

void createFront() {

	glPushMatrix();

	glTranslatef(0, 1, 0);

	glBindTexture(GL_TEXTURE_2D, texture[skyTexture]);

	glPushMatrix();
	glTranslatef(0, 0, 0.5);
	glScalef(1, 1, 0.5);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, yTimesSideSky); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(0, 0, 1);
	glTexCoord2f(1, 1); glVertex3f(1, 0, 1);
	glTexCoord2f(1, yTimesSideSky); glVertex3f(1, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glPopMatrix();

	glBindTexture(GL_TEXTURE_2D, texture[wallTexture]);

	glPushMatrix();
	glScalef(1, 1, 0.5);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, yTimes); glVertex3f(0, 0, 1);
	glTexCoord2f(xTimes, yTimes); glVertex3f(1, 0, 1);
	glTexCoord2f(xTimes, 0); glVertex3f(1, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glPopMatrix();

	glPopMatrix();

}

void createRight() {

	glPushMatrix();

	glTranslatef(1, 0, 0);

	glBindTexture(GL_TEXTURE_2D, texture[skyTexture]);

	glPushMatrix();
	glTranslatef(0, 0, 0.5);
	glScalef(1, 1, 0.5);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(1, yTimesSideSky); glVertex3f(0, 1, 0);
	glTexCoord2f(1, 1); glVertex3f(0, 1, 1);
	glTexCoord2f(0, 1); glVertex3f(0, 0, 1);
	glTexCoord2f(0, yTimesSideSky); glVertex3f(0, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glPopMatrix();

	glBindTexture(GL_TEXTURE_2D, texture[wallTexture]);

	glPushMatrix();
	glScalef(1, 1, 0.5);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 1, 0);
	glTexCoord2f(0, yTimes); glVertex3f(0, 1, 1);
	glTexCoord2f(xTimes, yTimes); glVertex3f(0, 0, 1);
	glTexCoord2f(xTimes, 0); glVertex3f(0, 0, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glPopMatrix();

	glPopMatrix();

}

void createLeft() {

	glPushMatrix();

	glTranslatef(-1, 0, 0);

	glBindTexture(GL_TEXTURE_2D, texture[skyTexture]);

	glPushMatrix();
	glTranslatef(0, 0, 0.5);
	glScalef(1, 1, 0.5);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(1, yTimesSideSky); glVertex3f(1, 0, 0);
	glTexCoord2f(1, 1); glVertex3f(1, 0, 1);
	glTexCoord2f(0, 1); glVertex3f(1, 1, 1);
	glTexCoord2f(0, yTimesSideSky); glVertex3f(1, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glPopMatrix();

	glBindTexture(GL_TEXTURE_2D, texture[wallTexture]);

	glPushMatrix();
	glScalef(1, 1, 0.5);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(1, 0, 0);
	glTexCoord2f(0, yTimes); glVertex3f(1, 0, 1);
	glTexCoord2f(xTimes, yTimes); glVertex3f(1, 1, 1);
	glTexCoord2f(xTimes, 0); glVertex3f(1, 1, 0);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

	glPopMatrix();

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
