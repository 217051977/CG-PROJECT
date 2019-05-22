#pragma once

void set_LookAt(int option) {

    if(option > 0 && option < 43) {

        switch (option) {

//  Regular

//          setFrontPerspective
            case 1: {

                gluLookAt(X_INITIAL + 250, Y_INITIAL - 242, 80, X_INITIAL + 250, Y_INITIAL - 241, 80, 0, 0, 1);

            } break;

//          setBackPerspective
            case 2: {

                gluLookAt(X_INITIAL + 250, Y_INITIAL + 620, 110, X_INITIAL + 250, Y_INITIAL + 619, 110, 0, 0, 1);

            } break;

//          setLeftPerspective
            case 3: {

                gluLookAt(X_INITIAL - 44, Y_INITIAL + 200, 80, X_INITIAL - 43, Y_INITIAL + 200, 80, 0, 0, 1);

            } break;

//          setRightPerspective
            case 4: {

                gluLookAt(X_INITIAL + 561, Y_INITIAL + 200, 80, X_INITIAL + 560, Y_INITIAL + 200, 80, 0, 0, 1);

            } break;

//          setTopPerspective
            case 5: {

                gluLookAt(X_INITIAL + 250, Y_INITIAL + 235, 342, X_INITIAL + 250, Y_INITIAL + 235, 341, 0, 1, 0);

            } break;

//          setBotPerspective
            case 6: {

                gluLookAt(X_INITIAL + 250, Y_INITIAL + 195, -115, X_INITIAL + 250, Y_INITIAL + 195, -114, 0, 1, 0);

            } break;

//  Entrance

//          setFrontPerspective
            case 7: {

                gluLookAt(X_INITIAL + 250, Y_INITIAL - 50, 80, X_INITIAL + 250, Y_INITIAL - 49, 80, 0, 0, 1);

            } break;

//          setBackPerspective
            case 8: {

                gluLookAt(X_INITIAL + 250, Y_INITIAL + 122, 80, X_INITIAL + 250, Y_INITIAL + 121, 80, 0, 0, 1);

            } break;

//          setLeftPerspective
            case 9: {

                gluLookAt(X_INITIAL - 2, Y_INITIAL + 37, 80, X_INITIAL - 1, Y_INITIAL + 37, 80, 0, 0, 1);

            } break;

//          setRightPerspective
            case 10: {

                gluLookAt(X_INITIAL + 472, Y_INITIAL + 37, 80, X_INITIAL + 471, Y_INITIAL + 37, 80, 0, 0, 1);

            } break;

//          setTopPerspective
            case 11: {

                gluLookAt(X_INITIAL + 250, Y_INITIAL + 45, 310, X_INITIAL + 250, Y_INITIAL + 45, 309, 0, 1, 0);

            } break;

//          setBotPerspective
            case 12: {

                gluLookAt(X_INITIAL + 250, Y_INITIAL + 45, -61, X_INITIAL + 250, Y_INITIAL + 45, -60, 0, 1, 0);

            } break;

//  Hallway

//          setFrontPerspective
            case 13: {

                gluLookAt(X_INITIAL + 268, Y_INITIAL + 239, 80, X_INITIAL + 268, Y_INITIAL + 240, 80, 0, 0, 1);

            } break;

//          setBackPerspective
            case 14: {

                gluLookAt(X_INITIAL + 268, Y_INITIAL + 491, 80, X_INITIAL + 268, Y_INITIAL + 490, 80, 0, 0, 1);

            } break;

//          setLeftPerspective
            case 15: {

                gluLookAt(X_INITIAL + 146, Y_INITIAL + 365, 80, X_INITIAL + 147, Y_INITIAL + 365, 80, 0, 0, 1);

            } break;

//          setRightPerspective
            case 16: {

                gluLookAt(X_INITIAL + 391, Y_INITIAL + 365, 80, X_INITIAL + 390, Y_INITIAL + 365, 80, 0, 0, 1);

            } break;

//          setTopPerspective
            case 17: {

                gluLookAt(X_INITIAL + 268, Y_INITIAL + 365, 68, X_INITIAL + 268, Y_INITIAL + 365, 67, 0, 1, 0);

            } break;

//          setBotPerspective
            case 18: {

                gluLookAt(X_INITIAL + 268, Y_INITIAL + 365, -28, X_INITIAL + 268, Y_INITIAL + 365, -27, 0, 1, 0);

            } break;

//  Courtyard

//          setFrontPerspective
            case 19: {

                gluLookAt(X_INITIAL + 268, Y_INITIAL + 169, 80, X_INITIAL + 268, Y_INITIAL + 170, 80, 0, 0, 1);

            } break;

//          setBackPerspective
            case 20: {

                gluLookAt(X_INITIAL + 268, Y_INITIAL + 291, 80, X_INITIAL + 268, Y_INITIAL + 290, 80, 0, 0, 1);

            } break;

//          setLeftPerspective
            case 21: {

                gluLookAt(X_INITIAL + 151, Y_INITIAL + 230, 80, X_INITIAL + 152, Y_INITIAL + 230, 80, 0, 0, 1);

            } break;

//          setRightPerspective
            case 22: {

                gluLookAt(X_INITIAL + 388, Y_INITIAL + 230, 80, X_INITIAL + 387, Y_INITIAL + 230, 80, 0, 0, 1);

            } break;

//          setTopPerspective
            case 23: {

                gluLookAt(X_INITIAL + 268, Y_INITIAL + 230, 43, X_INITIAL + 268, Y_INITIAL + 230, 42, 0, 1, 0);

            } break;

//          setBotPerspective
            case 24: {

                gluLookAt(X_INITIAL + 268, Y_INITIAL + 230, -28, X_INITIAL + 268, Y_INITIAL + 230, -27, 0, 1, 0);

            } break;

//  Main Building

//          setFrontPerspective
            case 25: {

                gluLookAt(X_INITIAL + 268, Y_INITIAL + 309, 80, X_INITIAL + 268, Y_INITIAL + 310, 80, 0, 0, 1);

            } break;

//          setBackPerspective
            case 26: {

                gluLookAt(X_INITIAL + 268, Y_INITIAL + 421, 80, X_INITIAL + 268, Y_INITIAL + 420, 80, 0, 0, 1);

            } break;

//          setLeftPerspective
            case 27: {

                gluLookAt(X_INITIAL + 216, Y_INITIAL + 365, 80, X_INITIAL + 217, Y_INITIAL + 365, 80, 0, 0, 1);

            } break;

//          setRightPerspective
            case 28: {

                gluLookAt(X_INITIAL + 321, Y_INITIAL + 365, 80, X_INITIAL + 320, Y_INITIAL + 365, 80, 0, 0, 1);

            } break;

//          setTopPerspective
            case 29: {

                gluLookAt(X_INITIAL + 268, Y_INITIAL + 365, 83, X_INITIAL + 268, Y_INITIAL + 365, 82, 0, 1, 0);

            } break;

//          setBotPerspective
            case 30: {

                gluLookAt(X_INITIAL + 268, Y_INITIAL + 365, -13, X_INITIAL + 268, Y_INITIAL + 365, -12, 0, 1, 0);

            } break;

//  Delivery Door

//          setFrontPerspective
            case 31: {

                gluLookAt(X_INITIAL + 268, Y_INITIAL + 134, 80, X_INITIAL + 268, Y_INITIAL + 135, 80, 0, 0, 1);

            } break;

//          setBackPerspective
            case 32: {

                gluLookAt(X_INITIAL + 268, Y_INITIAL + 191, 80, X_INITIAL + 268, Y_INITIAL + 190, 80, 0, 0, 1);

            } break;

//          setLeftPerspective
            case 33: {

                gluLookAt(X_INITIAL + 222, Y_INITIAL + 162.5, 80, X_INITIAL + 223, Y_INITIAL + 162.5, 80, 0, 0, 1);

            } break;

//          setRightPerspective
            case 34: {

                gluLookAt(X_INITIAL + 324, Y_INITIAL + 162.5, 80, X_INITIAL + 323, Y_INITIAL + 162.5, 80, 0, 0, 1);

            } break;

//          setTopPerspective
            case 35: {

                gluLookAt(X_INITIAL + 267.5, Y_INITIAL + 162.5, 116, X_INITIAL + 267.5, Y_INITIAL + 162.5, 115, 0, 1, 0);

            } break;

//          setBotPerspective
            case 36: {

                gluLookAt(X_INITIAL + 267.5, Y_INITIAL + 162.5, -7, X_INITIAL + 267.5, Y_INITIAL + 162.5, -6, 0, 1, 0);

            } break;

//  Castle

//          setFrontPerspective
            case 37: {

                gluLookAt(X_INITIAL + 268, Y_INITIAL + 129, 80, X_INITIAL + 268, Y_INITIAL + 130, 80, 0, 0, 1);

            } break;

//          setBackPerspective
            case 38: {

                gluLookAt(X_INITIAL + 268, Y_INITIAL + 616, 80, X_INITIAL + 268, Y_INITIAL + 615, 80, 0, 0, 1);

            } break;

//          setLeftPerspective
            case 39: {

                gluLookAt(X_INITIAL + 21, Y_INITIAL + 365, 80, X_INITIAL + 22, Y_INITIAL + 365, 80, 0, 0, 1);

            } break;

//          setRightPerspective
            case 40: {

                gluLookAt(X_INITIAL + 526, Y_INITIAL + 365, 80, X_INITIAL + 525, Y_INITIAL + 365, 80, 0, 0, 1);

            } break;

//          setTopPerspective
            case 41: {

                gluLookAt(X_INITIAL + 268, Y_INITIAL + 365, 288, X_INITIAL + 268, Y_INITIAL + 365, 287, 0, 1, 0);

            } break;

//          setBotPerspective
            case 42: {

                gluLookAt(X_INITIAL + 268, Y_INITIAL + 365, -63, X_INITIAL + 268, Y_INITIAL + 365, -62, 0, 1, 0);

            } break;

        }

    }

}
