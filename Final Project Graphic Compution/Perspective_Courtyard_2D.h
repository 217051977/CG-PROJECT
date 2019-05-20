#pragma once

void setFrontOrtho_Courtyard() {

	glRotatef(90, 1, 0, 0);
	glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setBackOrtho_Courtyard() {

	glRotatef(90, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
	glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setLeftOrtho_Courtyard() {

	glRotatef(90, 1, 0, 0);
	glRotatef(90, 0, 0, 1);
	glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW + 463, Y_MAX_VIEW - 433, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setRightOrtho_Courtyard() {

	glRotatef(90, 1, 0, 0);
	glRotatef(-90, 0, 0, 1);
	glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW + 463, Y_MAX_VIEW - 433, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setTopOrtho_Courtyard() {

	glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW + 463, Y_MAX_VIEW - 433, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setBotOrtho_Courtyard() {

	glRotatef(180, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
	glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW + 463, Y_MAX_VIEW - 433, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}