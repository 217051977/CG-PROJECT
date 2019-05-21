#pragma once

void setFrontOrtho() {

    glRotatef(90, 1, 0, 0);
    glOrtho(X_MIN_VIEW + 235 - 142.5, X_MAX_VIEW - 235 - 142.5, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 357.5 + 70, Z_FAR_VIEW + 357.5 - 70);

}

void setBackOrtho() {

    glRotatef(90, 1, 0, 0);
    glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 235 - 142.5, X_MAX_VIEW - 235 - 142.5, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 357.5 + 235, Z_FAR_VIEW + 357.5 - 235);

}

void setLeftOrtho() {

	glRotatef(90, 1, 0, 0);
	glRotatef(90, 0, 0, 1);
    glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW + 80 - 15, Y_MAX_VIEW - 80 - 15, Z_NEAR_VIEW + 357.5 + 80, Z_FAR_VIEW + 357.5 - 80);

}

void setRightOrtho() {

	glRotatef(90, 1, 0, 0);
	glRotatef(-90, 0, 0, 1);
    glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW + 80 - 15, Y_MAX_VIEW - 80 - 15, Z_NEAR_VIEW + 357.5 + 80, Z_FAR_VIEW + 357.5 - 80);

}

void setBotOrtho() {

    glRotatef(180, 1, 0, 0);
    glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 80 - 150, X_MAX_VIEW - 80 - 150, Y_MIN_VIEW + 80 - 15, Y_MAX_VIEW - 80 - 15, Z_NEAR_VIEW + 357.5 + 70, Z_FAR_VIEW + 357.5 - 70);

}