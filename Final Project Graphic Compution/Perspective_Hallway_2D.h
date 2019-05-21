#pragma once

void setFrontOrtho_Hallway() {

	glRotatef(90, 1, 0, 0);
    glOrtho(X_MIN_VIEW + 402 - 131.5, X_MAX_VIEW - 402 - 131.5, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 462.5 + 402, Z_FAR_VIEW + 462.5 - 402);

}

void setBackOrtho_Hallway() {

	glRotatef(90, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 402 - 131.5, X_MAX_VIEW - 402 - 131.5, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 462.5 + 402, Z_FAR_VIEW + 462.5 - 402);

}

void setLeftOrtho_Hallway() {

	glRotatef(90, 1, 0, 0);
	glRotatef(90, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 398 - 131.5, X_MAX_VIEW - 398 - 131.5, Y_MIN_VIEW + 398 + 165, Y_MAX_VIEW - 398 + 165, Z_NEAR_VIEW + 462.5 + 398, Z_FAR_VIEW + 462.5 - 398);

}

void setRightOrtho_Hallway() {

	glRotatef(90, 1, 0, 0);
	glRotatef(-90, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 398 - 131.5, X_MAX_VIEW - 398 - 131.5, Y_MIN_VIEW + 398 + 165, Y_MAX_VIEW - 398 + 165, Z_NEAR_VIEW + 462.5 + 398, Z_FAR_VIEW + 462.5 - 398);

}

void setTopOrtho_Hallway() {

    glOrtho(X_MIN_VIEW + 398 - 131.5, X_MAX_VIEW - 398 - 131.5, Y_MIN_VIEW + 398 + 165, Y_MAX_VIEW - 398 + 165, Z_NEAR_VIEW + 462.5 + 398, Z_FAR_VIEW + 462.5 - 398);

}

void setBotOrtho_Hallway() {

	glRotatef(180, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 398 - 131.5, X_MAX_VIEW - 398 - 131.5, Y_MIN_VIEW + 398 + 165, Y_MAX_VIEW - 398 + 165, Z_NEAR_VIEW + 462.5 + 398, Z_FAR_VIEW + 462.5 - 398);

}