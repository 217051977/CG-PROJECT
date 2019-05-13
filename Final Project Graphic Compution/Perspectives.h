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

//Ortho

void setFrontOrtho_Entrance() {

    glRotatef(90, 1, 0, 0);
    topOrtho;

}

void setBackOrtho_Entrance() {

    glRotatef(90, 1, 0, 0);
    glRotatef(180, 0, 0, 1);
    topOrtho;

}

void setLeftOrtho_Entrance() {

    glRotatef(90, 1, 0, 0);
    glRotatef(90, 0, 0, 1);
    topOrtho;

}

void setRightOrtho_Entrance() {

    glRotatef(90, 1, 0, 0);
    glRotatef(-90, 0, 0, 1);
    topOrtho;

}

void setTopOrtho_Entrance() {

    glRotatef(180, 1, 0, 0);
    glRotatef(180, 0, 0, 1);
    topOrtho;

}

void setBotOrtho_Entrance() {

    glRotatef(180, 1, 0, 0);
    glRotatef(180, 0, 0, 1);
    topOrtho;

}



//Perspective

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

void setOrtho_Entrance(int option) {

    switch (option) {

//      front
        case -11: {

            setFrontOrtho_Entrance();

        }break;

//      back
        case -10: {

            setBackOrtho_Entrance();

        }break;

//      left
        case -9: {

            setLeftOrtho_Entrance();

        }break;

//      right
        case -8: {

            setRightOrtho_Entrance();

        }break;

//      top
        case -7: {

            setTopOrtho_Entrance();

        }break;

//      bot
        case -6: {

            setBotOrtho_Entrance();

        }

    }

}

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

            topOrtho;

        }break;

//      bot view
        case -5: {

            setBotOrtho();

        }break;

    }

}

void setPerspective_Regular(int option) {

    switch (option) {

//      front
        case 1: {

            setFrontPerspective();

        }break;

//      back
        case 2: {

            setBackPerspective();

        }break;

//      left
        case 3: {

            setLeftPerspective();

        }break;

//      right
        case 4: {

            setRightPerspective();

        }break;

//      Top
        case 5: {

            setTopPerspective();

        }break;

//      bot
        case 6: {

            setBotPerspective();

        }break;

    }

}

void setPerspective_Entrance(int option) {

    switch (option) {

//      front
        case 7: {

            setFrontPerspective_Entrance();

        }break;

//      back
        case 8: {

            setBackPerspective_Entrance();

        }break;

//      Left
        case 9: {

            setLeftPerspective_Entrance();

        }break;

//      Right
        case 10: {

            setRightPerspective_Entrance();

        }break;

//      Top
        case 11: {

            setTopPerspective_Entrance();

        }break;

//      Bot
        case 12: {

            setBotPerspective_Entrance();

        }break;

    }

}

void setPerspectives(int option) {

    switch (option) {

//      Entrance

        case -11: {}
        case -10: {}
        case -9: {}
        case -8: {}
        case -7: {}
        case -6: {

            setOrtho_Entrance(option);

        }break;

//      Regular

        case -5: {}
        case -4: {}
        case -3: {}
        case -2: {}
        case -1: {}
        case 0: {

            setOrtho_Regular(option);

        }break;

//      Regular

        case 1: {}
        case 2: {}
        case 3: {}
        case 4: {}
        case 5: {}
        case 6: {

            setPerspective_Regular();

        }break;

//      Irregulars

//      front
        case 7: {}
        case 8: {}
        case 9: {}
        case 10: {}
        case 11: {}
        case 12: {

            setPerspective_Entrance();

        }break;

    }

}