#pragma once

void setFrontOrtho_Courtyard() {

	glRotatef(90, 1, 0, 0);
    glOrtho(X_MIN_VIEW + 402 - 131.5, X_MAX_VIEW - 402 - 131.5, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 462.5 + 402, Z_FAR_VIEW + 462.5 - 402);

}

void setBackOrtho_Courtyard() {

	glRotatef(90, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 402 - 131.5, X_MAX_VIEW - 402 - 131.5, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 462.5 + 402, Z_FAR_VIEW + 462.5 - 402);

}

void setLeftOrtho_Courtyard() {

	glRotatef(90, 1, 0, 0);
	glRotatef(90, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 398 - 131.5, X_MAX_VIEW - 398 - 131.5, Y_MIN_VIEW + 449 + 15, Y_MAX_VIEW - 449 + 15, Z_NEAR_VIEW + 477.5 + 449, Z_FAR_VIEW + 477.5 - 449);

}

void setRightOrtho_Courtyard() {

	glRotatef(90, 1, 0, 0);
	glRotatef(-90, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 398 - 131.5, X_MAX_VIEW - 398 - 131.5, Y_MIN_VIEW + 449 + 15, Y_MAX_VIEW - 449 + 15, Z_NEAR_VIEW + 477.5 + 449, Z_FAR_VIEW + 477.5 - 449);

}

void setTopOrtho_Courtyard() {

    glOrtho(X_MIN_VIEW + 398 - 131.5, X_MAX_VIEW - 398 - 131.5, Y_MIN_VIEW + 449 + 15, Y_MAX_VIEW - 449 + 15, Z_NEAR_VIEW + 477.5 + 449, Z_FAR_VIEW + 477.5 - 449);

}

void setBotOrtho_Courtyard() {

	glRotatef(180, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 398 - 131.5, X_MAX_VIEW - 398 - 131.5, Y_MIN_VIEW + 449 + 15, Y_MAX_VIEW - 449 + 15, Z_NEAR_VIEW + 477.5 + 449, Z_FAR_VIEW + 477.5 - 449);

}