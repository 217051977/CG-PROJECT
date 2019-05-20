#pragma once

void setFrontPerspective() {

	gluPerspective(150, 1, 1, 1000);
	gluLookAt(X_INITIAL + 250, Y_INITIAL - 242, 80, X_INITIAL + 250, Y_INITIAL - 241, 80, 0, 0, 1);

}

void setRightPerspective() {

	gluPerspective(150, 1, 1, 1000);
	gluLookAt(X_INITIAL + 561, Y_INITIAL + 200, 80, X_INITIAL + 560, Y_INITIAL + 200, 80, 0, 0, 1);

}

void setBackPerspective() {

	gluPerspective(150, 1, 1, 1000);
	gluLookAt(X_INITIAL + 250, Y_INITIAL + 620, 110, X_INITIAL + 250, Y_INITIAL + 619, 110, 0, 0, 1);

}

void setTopPerspective() {

	gluPerspective(150, 1, 1, 1000);
	gluLookAt(X_INITIAL + 250, Y_INITIAL + 235, 322, X_INITIAL + 250, Y_INITIAL + 235, 321, 0, 1, 0);

}

void setLeftPerspective() {

	gluPerspective(150, 1, 1, 1000);
	gluLookAt(X_INITIAL - 44, Y_INITIAL + 200, 80, X_INITIAL - 43, Y_INITIAL + 200, 80, 0, 0, 1);

}

void setBotPerspective() {

	gluPerspective(150, 1, 1, 1000);
	gluLookAt(X_INITIAL + 250, Y_INITIAL + 195, -115, X_INITIAL + 250, Y_INITIAL + 195, -114, 0, 1, 0);

}