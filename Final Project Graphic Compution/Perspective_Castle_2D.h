#pragma once

void setFrontOrtho_Castle() {

    glRotatef(90, 1, 0, 0);
    glOrtho(X_MIN_VIEW + 238 - 142, X_MAX_VIEW - 238 - 142, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 400 + 238, Z_FAR_VIEW + 400 - 238);

}

void setBackOrtho_Castle() {

    glRotatef(90, 1, 0, 0);
    glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 238 - 142, X_MAX_VIEW - 238 - 142, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 400 + 238, Z_FAR_VIEW + 400 - 238);

}

void setLeftOrtho_Castle() {

    glRotatef(90, 1, 0, 0);
    glRotatef(90, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 238 - 142, X_MAX_VIEW - 238 - 142, Y_MIN_VIEW + 270 + 170, Y_MAX_VIEW - 270 + 170, Z_NEAR_VIEW + 400 + 240, Z_FAR_VIEW + 400 - 240);

}

void setRightOrtho_Castle() {

    glRotatef(90, 1, 0, 0);
    glRotatef(-90, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 238 - 142, X_MAX_VIEW - 238 - 142, Y_MIN_VIEW + 270 + 170, Y_MAX_VIEW - 270 + 170, Z_NEAR_VIEW + 400 + 240, Z_FAR_VIEW + 400 - 240);

}

void setTopOrtho_Castle() {

    glOrtho(X_MIN_VIEW + 238 - 135, X_MAX_VIEW - 238 - 135, Y_MIN_VIEW + 270 + 170, Y_MAX_VIEW - 270 + 170, Z_NEAR_VIEW + 400 + 240, Z_FAR_VIEW + 400 - 240);

}

void setBotOrtho_Castle() {

    glRotatef(180, 1, 0, 0);
    glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 238 - 142, X_MAX_VIEW - 238 - 142, Y_MIN_VIEW + 270 + 170, Y_MAX_VIEW - 270 + 170, Z_NEAR_VIEW + 400 + 240, Z_FAR_VIEW + 400 - 240);

}