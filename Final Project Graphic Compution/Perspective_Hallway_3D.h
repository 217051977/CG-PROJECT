#pragma once

void setFrontPerspective_Hallway() {

	gluPerspective(150, 1, 1, 230);
	gluLookAt(X_INITIAL + 268, Y_INITIAL + 239, 80, X_INITIAL + 268, Y_INITIAL + 240, 80, 0, 0, 1);

}

void setBackPerspective_Hallway() {

	gluPerspective(150, 1, 1, 230);
	gluLookAt(X_INITIAL + 268, Y_INITIAL + 491, 80, X_INITIAL + 268, Y_INITIAL + 490, 80, 0, 0, 1);

}

void setLeftPerspective_Hallway() {

	gluPerspective(150, 1, 1, 230);
	gluLookAt(X_INITIAL + 146, Y_INITIAL + 365, 80, X_INITIAL + 147, Y_INITIAL + 365, 80, 0, 0, 1);

}

void setRightPerspective_Hallway() {

	gluPerspective(150, 1, 1, 230);
	gluLookAt(X_INITIAL + 391, Y_INITIAL + 365, 80, X_INITIAL + 390, Y_INITIAL + 365, 80, 0, 0, 1);

}

void setTopPerspective_Hallway() {

	gluPerspective(150, 1, 1, 70);
	gluLookAt(X_INITIAL + 268, Y_INITIAL + 365, 68, X_INITIAL + 268, Y_INITIAL + 365, 67, 0, 1, 0);

}

void setBotPerspective_Hallway() {

	gluPerspective(150, 1, 1, 70);
	gluLookAt(X_INITIAL + 268, Y_INITIAL + 365, -28, X_INITIAL + 268, Y_INITIAL + 365, -27, 0, 1, 0);

}