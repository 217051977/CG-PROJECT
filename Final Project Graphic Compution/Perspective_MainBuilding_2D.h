#pragma once

void setFrontOrtho_Main_Building() {

	glRotatef(90, 1, 0, 0);
    glOrtho(X_MIN_VIEW + 464 - 131.5, X_MAX_VIEW - 464 - 131.5, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 455 + 464, Z_FAR_VIEW + 455 - 464);

}

void setBackOrtho_Main_Building() {

	glRotatef(90, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 464 - 131.5, X_MAX_VIEW - 464 - 131.5, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 455 + 464, Z_FAR_VIEW + 455 - 464);

}

void setLeftOrtho_Main_Building() {

	glRotatef(90, 1, 0, 0);
	glRotatef(90, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 464 - 131.5, X_MAX_VIEW - 464 - 131.5, Y_MIN_VIEW + 464 + 165, Y_MAX_VIEW - 464 + 165, Z_NEAR_VIEW + 455 + 464, Z_FAR_VIEW + 455 - 464);

}

void setRightOrtho_Main_Building() {

	glRotatef(90, 1, 0, 0);
	glRotatef(-90, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 464 - 131.5, X_MAX_VIEW - 464 - 131.5, Y_MIN_VIEW + 464 + 165, Y_MAX_VIEW - 464 + 165, Z_NEAR_VIEW + 455 + 464, Z_FAR_VIEW + 455 - 464);

}

void setTopOrtho_Main_Building() {

    glOrtho(X_MIN_VIEW + 469 - 131.5, X_MAX_VIEW - 469 - 131.5, Y_MIN_VIEW + 469 + 165, Y_MAX_VIEW - 469 + 165, Z_NEAR_VIEW + 455 + 464, Z_FAR_VIEW + 455 - 464);

}

void setBotOrtho_Main_Building() {

	glRotatef(180, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 469 - 131.5, X_MAX_VIEW - 469 - 131.5, Y_MIN_VIEW + 469 + 165, Y_MAX_VIEW - 469 + 165, Z_NEAR_VIEW + 455 + 464, Z_FAR_VIEW + 455 - 464);

}