#pragma once

void setFrontOrtho_Main_Building() {

	glRotatef(90, 1, 0, 0);
	glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setBackOrtho_Main_Building() {

	glRotatef(90, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
	glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setLeftOrtho_Main_Building() {

	glRotatef(90, 1, 0, 0);
	glRotatef(90, 0, 0, 1);
	glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW + 563, Y_MAX_VIEW - 233, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setRightOrtho_Main_Building() {

	glRotatef(90, 1, 0, 0);
	glRotatef(-90, 0, 0, 1);
	glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW + 563, Y_MAX_VIEW - 233, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setTopOrtho_Main_Building() {

	glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW + 563, Y_MAX_VIEW - 233, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setBotOrtho_Main_Building() {

	glRotatef(180, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
	glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW + 563, Y_MAX_VIEW - 233, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}