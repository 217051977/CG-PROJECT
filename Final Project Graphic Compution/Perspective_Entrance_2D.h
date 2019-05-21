#pragma once

void setFrontOrtho_Entrance() {

	glRotatef(90, 1, 0, 0);
    glOrtho(X_MIN_VIEW + 280 - 165.5, X_MAX_VIEW - 280 - 165.5, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 357.5 + 280, Z_FAR_VIEW + 357.5 - 280);

}

void setBackOrtho_Entrance() {

	glRotatef(90, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 280 - 165.5, X_MAX_VIEW - 280 - 165.5, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 357.5 + 280, Z_FAR_VIEW + 357.5 - 280);

}

void setLeftOrtho_Entrance() {

	glRotatef(90, 1, 0, 0);
	glRotatef(90, 0, 0, 1);
    glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW + 350 - 160, Y_MAX_VIEW - 350 - 160, Z_NEAR_VIEW + 347.5 + 350, Z_FAR_VIEW + 347.5 - 350);

}

void setRightOrtho_Entrance() {

	glRotatef(90, 1, 0, 0);
	glRotatef(-90, 0, 0, 1);
    glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW + 350 - 160, Y_MAX_VIEW - 350 - 160, Z_NEAR_VIEW + 347.5 + 350, Z_FAR_VIEW + 347.5 - 350);

}

void setTopOrtho_Entrance() {

    glOrtho(X_MIN_VIEW + 280 - 165.5, X_MAX_VIEW - 280 - 165.5, Y_MIN_VIEW + 280 - 160, Y_MAX_VIEW - 280 - 160, Z_NEAR_VIEW + 357.5 + 70, Z_FAR_VIEW + 357.5 - 70);

}

void setBotOrtho_Entrance() {

	glRotatef(180, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 280 - 165.5, X_MAX_VIEW - 280 - 165.5, Y_MIN_VIEW + 280 - 160, Y_MAX_VIEW - 280 - 160, Z_NEAR_VIEW + 357.5 + 70, Z_FAR_VIEW + 357.5 - 70);

}