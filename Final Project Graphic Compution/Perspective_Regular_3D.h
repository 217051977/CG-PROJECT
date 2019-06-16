#pragma once

void setFrontPerspective() {

	glFrustum(X_INITIAL, X_INITIAL, 0, 0, 100, 2000);

	//gluPerspective(500, 20, 1, 10000000000000000);

}

void setBackPerspective() {

    gluPerspective(150, 1, 1, 1000);

}

void setLeftPerspective() {

    gluPerspective(150, 1, 1, 1000);

}

void setRightPerspective() {

	gluPerspective(150, 1, 1, 1000);

}

void setTopPerspective() {

	gluPerspective(150, 1, 1, 1000);

}

void setBotPerspective() {

	gluPerspective(150, 1, 1, 1000);

}

void setPerspective() {

	gluPerspective(150, 1, 1, 1000);

}