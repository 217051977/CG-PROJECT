#pragma once

void setFrontOrtho_Entrance() {

	glRotatef(90, 1, 0, 0);
	glOrtho(X_MIN_VIEW + 110, X_MAX_VIEW + 110 - 550, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 550 + 100, Z_FAR_VIEW + 100);

}

void setBackOrtho_Entrance() {

	glRotatef(90, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
	glOrtho(X_MIN_VIEW + 115, X_MAX_VIEW - 445, Y_MIN_VIEW + 125, Y_MAX_VIEW - 450, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 998);

}

void setLeftOrtho_Entrance() {

	glRotatef(90, 1, 0, 0);
	glRotatef(90, 0, 0, 1);
	glOrtho(X_MIN_VIEW + 115, X_MAX_VIEW - 445, Y_MIN_VIEW + 125, Y_MAX_VIEW - 450, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 998);

}

void setRightOrtho_Entrance() {

	glRotatef(90, 1, 0, 0);
	glRotatef(-90, 0, 0, 1);
	glOrtho(X_MIN_VIEW + 115, X_MAX_VIEW - 445, Y_MIN_VIEW + 125, Y_MAX_VIEW - 450, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 998);

}

void setTopOrtho_Entrance() {

	glOrtho(X_MIN_VIEW + 115, X_MAX_VIEW - 445, Y_MIN_VIEW + 125, Y_MAX_VIEW - 450, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 998);

}

void setBotOrtho_Entrance() {

	glRotatef(180, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
	glOrtho(X_MIN_VIEW + 115, X_MAX_VIEW - 445, Y_MIN_VIEW + 125, Y_MAX_VIEW - 450, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 998);

}