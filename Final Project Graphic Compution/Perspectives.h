/***********************************************************************************************************************
*                                                                                                                      *
*                                                    Perspectives.h                                                    *
*                                                                                                                      *
*                            This file is responsible to create and manage the perspectives                            *
*                                                                                                                      *
************************************************************************************************************************
*                                                                         *                                            *
*                               GROUP MEMBERS:                            *         GROUP MEMBERS' NUMBERS:            *
*                                                                         *                                            *
*                           Bruno Miguel Dias Leal                        *               Nº 21705197                  *
*              Diana Margarida Simões Soares da Silva de Jesus            *               Nº 21703012                  *
*                                                                         *                                            *
***********************************************************************************************************************/

#pragma once

#define topOrtho glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW, Z_FAR_VIEW);

//Regulars

//Ortho

void setBotOrtho() {

	glRotatef(180, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
	topOrtho;

}

void setLeftOrtho() {

	glRotatef(90, 1, 0, 0);
	glRotatef(90, 0, 0, 1);
	topOrtho;

}

void setRightOrtho() {

	glRotatef(90, 1, 0, 0);
	glRotatef(-90, 0, 0, 1);
	topOrtho;

}

void setFrontOrtho() {

	glRotatef(90, 1, 0, 0);
	topOrtho;

}

void setBackOrtho() {

	glRotatef(90, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
	topOrtho;

}

//Perspective

void setFrontPerspective() {

    gluPerspective(150, 1, 1, 1000);
    gluLookAt(X_INITIAL + 250, Y_INITIAL - 242, 80, X_INITIAL + 250, Y_INITIAL - 241, 80, 0, 0, 1);

}

void setRightPerspective() {

    gluPerspective(150, 1, 1, 1000);
    gluLookAt(X_INITIAL + 561, Y_INITIAL + 200, 80, X_INITIAL + 560, Y_INITIAL + 200, 80, 0, 0, 1);

}

void setBackPerspective() {

    gluPerspective(150, 1, 1, 1000);
    gluLookAt(X_INITIAL + 250, Y_INITIAL + 620, 110, X_INITIAL + 250, Y_INITIAL + 619, 110, 0, 0, 1);

}

void setTopPerspective() {

    gluPerspective(150, 1, 1, 1000);
    gluLookAt(X_INITIAL + 250, Y_INITIAL + 235, 322, X_INITIAL + 250, Y_INITIAL + 235, 321, 0, 1, 0);

}

void setLeftPerspective() {

    gluPerspective(150, 1, 1, 1000);
    gluLookAt(X_INITIAL - 44, Y_INITIAL + 200, 80, X_INITIAL - 43, Y_INITIAL + 200, 80, 0, 0, 1);

}

void setBotPerspective() {

    gluPerspective(150, 1, 1, 1000);
    gluLookAt(X_INITIAL + 250, Y_INITIAL + 195, -115, X_INITIAL + 250, Y_INITIAL + 195, -114, 0, 1, 0);

}

//Irregulars

void setFrontPerspective_Entrance() {

    gluPerspective(150, 1, 1, 130);
    gluLookAt(X_INITIAL + 250, Y_INITIAL - 50, 80, X_INITIAL + 250, Y_INITIAL - 49, 80, 0, 0, 1);

}

void setBackPerspective_Entrance() {

    gluPerspective(150, 1, 1, 140);
    gluLookAt(X_INITIAL + 250, Y_INITIAL + 122, 80, X_INITIAL + 250, Y_INITIAL + 121, 80, 0, 0, 1);

}

void setLeftPerspective_Entrance() {

    gluPerspective(150, 1, 1, 480);
    gluLookAt(X_INITIAL - 2, Y_INITIAL + 37, 80, X_INITIAL - 1, Y_INITIAL + 37, 80, 0, 0, 1);

}

void setRightPerspective_Entrance() {

    gluPerspective(150, 1, 1, 480);
    gluLookAt(X_INITIAL + 472, Y_INITIAL + 37, 80, X_INITIAL + 471, Y_INITIAL + 37, 80, 0, 0, 1);

}

void setTopPerspective_Entrance() {

    gluPerspective(150, 1, 1, 1000);
    gluLookAt(X_INITIAL + 250, Y_INITIAL + 45, 310, X_INITIAL + 250, Y_INITIAL + 45, 309, 0, 1, 0);

}

void setBotPerspective_Entrance() {

    gluPerspective(150, 1, 1, 1000);
    gluLookAt(X_INITIAL + 250, Y_INITIAL + 45, -61, X_INITIAL + 250, Y_INITIAL + 45, -60, 0, 1, 0);

}

//chose perspective

void setPerspectives(int option) {

    switch (option) {

        //ortho

//      back view
        case -5: {

            setBackOrtho();

        }break;

//      right view
        case -4: {

            setRightOrtho();

        }break;

        case -3: {

            setFrontOrtho();

        }break;

//      bot view
        case -2: {

            setBotOrtho();

        }break;

//      left view
        case -1: {

            setLeftOrtho();

        }break;

//      top view
        case 0: {

            topOrtho;

        }break;

//      perspective

//      top view
        case 1: {

            setTopPerspective();

        }break;

//      left view
        case 2: {

            setLeftPerspective();

        }break;

//      bot view
        case 3: {

            setBotPerspective();

        }break;

//      front view
        case 4: {

            setFrontPerspective();

        }break;

//      right view
        case 5: {

            setRightPerspective();

        }break;

//      back view
        case 6: {

            setBackPerspective();

        }break;

//      Irregulars

//      front
        case 7: {

            setFrontPerspective_Entrance();

        }break;

//      back
        case 8: {

            setBackPerspective_Entrance();

        }break;

//      back
        case 9: {

            setLeftPerspective_Entrance();

        }break;

//      back
        case 10: {

            setRightPerspective_Entrance();

        }break;

//      back
        case 11: {

            setTopPerspective_Entrance();

        }break;

//      back
        case 12: {

            setBotPerspective_Entrance();

        }break;

    }

}