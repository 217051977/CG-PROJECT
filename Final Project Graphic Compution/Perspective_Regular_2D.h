#pragma once

void setBotOrtho() {

	glRotatef(180, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
	glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW, Z_FAR_VIEW);

}

void setLeftOrtho() {

	glRotatef(90, 1, 0, 0);
	glRotatef(90, 0, 0, 1);
	glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW, Z_FAR_VIEW);

}

void setRightOrtho() {

	glRotatef(90, 1, 0, 0);
	glRotatef(-90, 0, 0, 1);
	glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW, Z_FAR_VIEW);

}

void setFrontOrtho() {

	glRotatef(90, 1, 0, 0);
	glOrtho(X_MIN_VIEW + 90, X_MAX_VIEW + 90 - 465, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 465 + 160, Z_FAR_VIEW + 160);

}

void setBackOrtho() {

	glRotatef(90, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
	glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW, Z_FAR_VIEW);

}