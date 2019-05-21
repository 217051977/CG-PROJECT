#pragma once

void setOrtho_Regular(int option) {

    switch (option) {

        //      front
        case 0: {

            setFrontOrtho();

        }break;

            //      back view
        case -1: {

            setBackOrtho();

        }break;

            //      left view
        case -2: {

            setLeftOrtho();

        }break;

            //      right view
        case -3: {

            setRightOrtho();

        }break;

            //      top view
        case -4: {

            glOrtho(X_MIN_VIEW + 80 - 150, X_MAX_VIEW - 80 - 150, Y_MIN_VIEW + 80 - 15, Y_MAX_VIEW - 80 - 15, Z_NEAR_VIEW + 357.5 + 70, Z_FAR_VIEW + 357.5 - 70);

        }break;

            //      bot view
        case -5: {

            setBotOrtho();

        }break;

    }

}