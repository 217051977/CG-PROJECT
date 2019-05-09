#pragma once

#define topOrtho glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW, Z_FAR_VIEW);

#define abovePerspective gluPerspective(150, 1, 1, 600);
#define aboveLookAt gluLookAt(X_INITIAL + 250, Y_INITIAL - 50, 300, X_INITIAL + 250, Y_INITIAL + 50, -45, 0, 0, 1);

#define downFrontPerspective gluPerspective(150, 1, 1, 600);
#define downFrontLookAt gluLookAt(X_INITIAL + 250, Y_INITIAL - 50, 0, X_INITIAL + 250, Y_INITIAL + 50, 10, 0, 0, 1);

//Regulares

//Ortho

void setBotOrtho() {

	glRotatef(180, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
	topOrtho;

}

void setLeftOrtho() {

	glRotatef(90, 1, 0, 0);
	glRotatef(90, 0, 0, 1);
	topOrtho;

}

void setRightOrtho() {

	glRotatef(90, 1, 0, 0);
	glRotatef(-90, 0, 0, 1);
	topOrtho;

}

void setFrontOrtho() {

	glRotatef(90, 1, 0, 0);
	topOrtho;

}

void setBackOrtho() {

	glRotatef(90, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
	topOrtho;

}

//Perspective

void setBotOrtho() {

	glRotatef(180, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
	topOrtho;

}

void setLeftOrtho() {

	glRotatef(90, 1, 0, 0);
	glRotatef(90, 0, 0, 1);
	topOrtho;

}

void setRightOrtho() {

	glRotatef(90, 1, 0, 0);
	glRotatef(-90, 0, 0, 1);
	topOrtho;

}

void setFrontOrtho() {

	glRotatef(90, 1, 0, 0);
	topOrtho;

}

void setBackOrtho() {

	glRotatef(90, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
	topOrtho;

}



void setPerspectives(int option) {

	switch (option) {

		//ortho


		//front view from front 
		case -1: {



		}break;

		//prespective
	
		//front view from down front
		case 0: {

			downFrontPerspective;
			downFrontLookAt;

		}break;
		
		//front view from looking up
		case 1: {

			gluPerspective(150, 1, 1, 600);
			gluLookAt(X_INITIAL + 250, Y_INITIAL - 50, 0, X_INITIAL + 250, Y_INITIAL + 50, 50, 0, 0, 1);

		}break;

		//front view from above
		case 2: {

			gluPerspective(150, 1, 1, 600);
			gluLookAt(X_INITIAL + 250, Y_INITIAL - 50, 300, X_INITIAL + 250, Y_INITIAL + 50, -45, 0, 0, 1);

		}
	}

}