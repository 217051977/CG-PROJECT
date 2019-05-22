#pragma once

void setFrontOrtho_Delivery_Door() {

    glRotatef(90, 1, 0, 0);
    glOrtho(X_MIN_VIEW + 440 - 131.5, X_MAX_VIEW - 440 - 131.5, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 432 + 440, Z_FAR_VIEW + 432 - 440);

}

void setBackOrtho_Delivery_Door() {

    glRotatef(90, 1, 0, 0);
    glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 440 - 131.5, X_MAX_VIEW - 440 - 131.5, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 432 + 440, Z_FAR_VIEW + 432 - 440);

}

void setLeftOrtho_Delivery_Door() {

    glRotatef(90, 1, 0, 0);
    glRotatef(90, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 440 - 131.5, X_MAX_VIEW - 440 - 131.5, Y_MIN_VIEW + 440 - 40, Y_MAX_VIEW - 440 - 40, Z_NEAR_VIEW + 432 + 440, Z_FAR_VIEW + 432 - 440);

}

void setRightOrtho_Delivery_Door() {

    glRotatef(90, 1, 0, 0);
    glRotatef(-90, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 440 - 131.5, X_MAX_VIEW - 440 - 131.5, Y_MIN_VIEW + 440 - 40, Y_MAX_VIEW - 440 - 40, Z_NEAR_VIEW + 432 + 440, Z_FAR_VIEW + 432 - 440);

}

void setTopOrtho_Delivery_Door() {

    glOrtho(X_MIN_VIEW + 477 - 132.5, X_MAX_VIEW - 477 - 132.5, Y_MIN_VIEW + 477 - 38, Y_MAX_VIEW - 477 - 38, Z_NEAR_VIEW + 432 + 440, Z_FAR_VIEW + 432 - 440);

}

void setBotOrtho_Delivery_Door() {

    glRotatef(180, 1, 0, 0);
    glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 477 - 132.5, X_MAX_VIEW - 477 - 132.5, Y_MIN_VIEW + 477 - 38, Y_MAX_VIEW - 477 - 38, Z_NEAR_VIEW + 432 + 440, Z_FAR_VIEW + 432 - 440);

}