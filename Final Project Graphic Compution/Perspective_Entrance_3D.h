#pragma once

void setFrontPerspective_Entrance() {

	gluPerspective(150, 1, 1, 1000);
	gluLookAt(X_INITIAL + 250, Y_INITIAL - 50, 80, X_INITIAL + 250, Y_INITIAL - 49, 80, 0, 0, 1);

}

void setBackPerspective_Entrance() {

	gluPerspective(150, 1, 1, 140);
	gluLookAt(X_INITIAL + 250, Y_INITIAL + 122, 80, X_INITIAL + 250, Y_INITIAL + 121, 80, 0, 0, 1);

}

void setLeftPerspective_Entrance() {

	gluPerspective(150, 1, 1, 480);
	gluLookAt(X_INITIAL - 2, Y_INITIAL + 37, 80, X_INITIAL - 1, Y_INITIAL + 37, 80, 0, 0, 1);

}

void setRightPerspective_Entrance() {

	gluPerspective(150, 1, 1, 480);
	gluLookAt(X_INITIAL + 472, Y_INITIAL + 37, 80, X_INITIAL + 471, Y_INITIAL + 37, 80, 0, 0, 1);

}

void setTopPerspective_Entrance() {

	gluPerspective(150, 1, 1, 1000);
	gluLookAt(X_INITIAL + 250, Y_INITIAL + 45, 310, X_INITIAL + 250, Y_INITIAL + 45, 309, 0, 1, 0);

}

void setBotPerspective_Entrance() {

	gluPerspective(150, 1, 1, 1000);
	gluLookAt(X_INITIAL + 250, Y_INITIAL + 45, -61, X_INITIAL + 250, Y_INITIAL + 45, -60, 0, 1, 0);

}