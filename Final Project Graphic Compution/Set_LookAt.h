#pragma once

void set_LookAt(int option) {

    switch (option) {

//  Regular

//      setFrontPerspective
        case 1: {

            gluLookAt(X_INITIAL + 250, Y_INITIAL - 242, 80, X_INITIAL + 250, Y_INITIAL - 241, 80, 0, 0, 1);

        } break;

//      setBackPerspective
        case 2: {

            gluLookAt(X_INITIAL + 250, Y_INITIAL + 620, 110, X_INITIAL + 250, Y_INITIAL + 619, 110, 0, 0, 1);

        } break;

//      setLeftPerspective
        case 3: {

            gluLookAt(X_INITIAL - 44, Y_INITIAL + 200, 80, X_INITIAL - 43, Y_INITIAL + 200, 80, 0, 0, 1);

        } break;

//      setRightPerspective
        case 4: {

            gluLookAt(X_INITIAL + 561, Y_INITIAL + 200, 80, X_INITIAL + 560, Y_INITIAL + 200, 80, 0, 0, 1);

        } break;

//      setTopPerspective
        case 5: {

            gluLookAt(X_INITIAL + 250, Y_INITIAL + 235, 322, X_INITIAL + 250, Y_INITIAL + 235, 321, 0, 1, 0);

        } break;

//      setBotPerspective
        case 6: {

            gluLookAt(X_INITIAL + 250, Y_INITIAL + 195, -115, X_INITIAL + 250, Y_INITIAL + 195, -114, 0, 1, 0);

        } break;

//  Entrance

//      setFrontPerspective
        case 7: {

            gluLookAt(X_INITIAL + 250, Y_INITIAL - 50, 80, X_INITIAL + 250, Y_INITIAL - 49, 80, 0, 0, 1);

        } break;

//      setBackPerspective
        case 8: {

            gluLookAt(X_INITIAL + 250, Y_INITIAL + 122, 80, X_INITIAL + 250, Y_INITIAL + 121, 80, 0, 0, 1);

        } break;

//      setLeftPerspective
        case 9: {

            gluLookAt(X_INITIAL - 2, Y_INITIAL + 37, 80, X_INITIAL - 1, Y_INITIAL + 37, 80, 0, 0, 1);

        } break;

//      setRightPerspective
        case 10: {

            gluLookAt(X_INITIAL + 472, Y_INITIAL + 37, 80, X_INITIAL + 471, Y_INITIAL + 37, 80, 0, 0, 1);

        } break;

//      setTopPerspective
        case 11: {

            gluLookAt(X_INITIAL + 250, Y_INITIAL + 45, 310, X_INITIAL + 250, Y_INITIAL + 45, 309, 0, 1, 0);

        } break;

//      setBotPerspective
        case 12: {

            gluLookAt(X_INITIAL + 250, Y_INITIAL + 45, -61, X_INITIAL + 250, Y_INITIAL + 45, -60, 0, 1, 0);

        } break;

//  Hallway

//      setFrontPerspective
        case 13: {

            gluLookAt(X_INITIAL + 268, Y_INITIAL + 239, 80, X_INITIAL + 268, Y_INITIAL + 240, 80, 0, 0, 1);

        } break;

//      setBackPerspective
        case 14: {

            gluLookAt(X_INITIAL + 268, Y_INITIAL + 491, 80, X_INITIAL + 268, Y_INITIAL + 490, 80, 0, 0, 1);

        } break;

//      setLeftPerspective
        case 15: {

            gluLookAt(X_INITIAL + 146, Y_INITIAL + 365, 80, X_INITIAL + 147, Y_INITIAL + 365, 80, 0, 0, 1);

        } break;

//      setRightPerspective
        case 16: {

            gluLookAt(X_INITIAL + 391, Y_INITIAL + 365, 80, X_INITIAL + 390, Y_INITIAL + 365, 80, 0, 0, 1);

        } break;

//      setTopPerspective
        case 17: {

            gluLookAt(X_INITIAL + 268, Y_INITIAL + 365, 68, X_INITIAL + 268, Y_INITIAL + 365, 67, 0, 1, 0);

        } break;

//      setBotPerspective
        case 18: {

            gluLookAt(X_INITIAL + 268, Y_INITIAL + 365, -28, X_INITIAL + 268, Y_INITIAL + 365, -27, 0, 1, 0);

        } break;

//  Courtyard

//      setFrontPerspective
        case 19: {


        } break;

//      setBackPerspective
        case 20: {


        } break;

//      setLeftPerspective
        case 21: {


        } break;

//      setRightPerspective
        case 22: {


        } break;

//      setTopPerspective
        case 23: {


        } break;

//      setBotPerspective
        case 24: {


        } break;

//  Main Building

//      setFrontPerspective
        case 25: {


        } break;

//      setBackPerspective
        case 26: {


        } break;

//      setLeftPerspective
        case 27: {


        } break;

//      setRightPerspective
        case 28: {


        } break;

//      setTopPerspective
        case 29: {


        } break;

//      setBotPerspective
        case 30: {


        } break;

//  Delivery Door

//      setFrontPerspective
        case 31: {


        } break;

//      setBackPerspective
        case 32: {


        } break;

//      setLeftPerspective
        case 33: {


        } break;

//      setRightPerspective
        case 34: {


        } break;

//      setTopPerspective
        case 35: {


        } break;

//      setBotPerspective
        case 36: {


        } break;

//  Castle

//      setFrontPerspective
        case 37: {


        } break;

//      setBackPerspective
        case 38: {


        } break;

//      setLeftPerspective
        case 39: {


        } break;

//      setRightPerspective
        case 40: {


        } break;

//      setTopPerspective
        case 41: {


        } break;

//      setBotPerspective
        case 42: {


        } break;

    }

}
