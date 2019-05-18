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

//makes the program where this header will be used add it just one time this header to it
#pragma once

/***********************************************************************************************************************
************************************************************************************************************************
**************************************************Set the regular view**************************************************
************************************************************************************************************************
***********************************************************************************************************************/

/***********************************************************************************************************************
*                                                                                                                      *
*                                                          2D                                                          *
*                                                                                                                      *
***********************************************************************************************************************/

void setBotOrtho() {

	glRotatef(180, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW, Z_FAR_VIEW);

}

void setLeftOrtho() {

	glRotatef(90, 1, 0, 0);
	glRotatef(90, 0, 0, 1);
    glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW, Z_FAR_VIEW);

}

void setRightOrtho() {

	glRotatef(90, 1, 0, 0);
	glRotatef(-90, 0, 0, 1);
    glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW, Z_FAR_VIEW);

}

void setFrontOrtho() {

	glRotatef(90, 1, 0, 0);
    glOrtho(X_MIN_VIEW + 90, X_MAX_VIEW + 90 - 465, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 465 + 160, Z_FAR_VIEW + 160);

}

void setBackOrtho() {

	glRotatef(90, 1, 0, 0);
	glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW, Z_FAR_VIEW);

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                          3D                                                          *
*                                                                                                                      *
***********************************************************************************************************************/

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

/***********************************************************************************************************************
************************************************************************************************************************
*************************************************Set the irregular view*************************************************
************************************************************************************************************************
***********************************************************************************************************************/

/***********************************************************************************************************************
*                                                                                                                      *
*                                                          2D                                                          *
*                                                                                                                      *
***********************************************************************************************************************/

/*******************************************************Entrance*******************************************************/

void setFrontOrtho_Entrance() {

    glRotatef(90, 1, 0, 0);
    glOrtho(X_MIN_VIEW + 110, X_MAX_VIEW + 110 - 550, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 550 + 100, Z_FAR_VIEW + 100);

}

void setBackOrtho_Entrance() {

    glRotatef(90, 1, 0, 0);
    glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 115, X_MAX_VIEW - 445, Y_MIN_VIEW + 125, Y_MAX_VIEW - 450, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 998);

}

void setLeftOrtho_Entrance() {

    glRotatef(90, 1, 0, 0);
    glRotatef(90, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 115, X_MAX_VIEW - 445, Y_MIN_VIEW + 125, Y_MAX_VIEW - 450, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 998);

}

void setRightOrtho_Entrance() {

    glRotatef(90, 1, 0, 0);
    glRotatef(-90, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 115, X_MAX_VIEW - 445, Y_MIN_VIEW + 125, Y_MAX_VIEW - 450, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 998);

}

void setTopOrtho_Entrance() {

    glOrtho(X_MIN_VIEW + 115, X_MAX_VIEW - 445, Y_MIN_VIEW + 125, Y_MAX_VIEW - 450, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 998);

}

void setBotOrtho_Entrance() {

    glRotatef(180, 1, 0, 0);
    glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 115, X_MAX_VIEW - 445, Y_MIN_VIEW + 125, Y_MAX_VIEW - 450, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 998);

}

/********************************************************Hallway*******************************************************/

void setFrontOrtho_Hallway() {

    glRotatef(90, 1, 0, 0);
    glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setBackOrtho_Hallway() {

    glRotatef(90, 1, 0, 0);
    glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setLeftOrtho_Hallway() {

    glRotatef(90, 1, 0, 0);
    glRotatef(90, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW + 563, Y_MAX_VIEW - 233, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setRightOrtho_Hallway() {

    glRotatef(90, 1, 0, 0);
    glRotatef(-90, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW + 563, Y_MAX_VIEW - 233, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setTopOrtho_Hallway() {

    glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW + 563, Y_MAX_VIEW - 233, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setBotOrtho_Hallway() {

    glRotatef(180, 1, 0, 0);
    glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW + 563, Y_MAX_VIEW - 233, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

/*******************************************************Courtyard******************************************************/

void setFrontOrtho_Courtyard() {

    glRotatef(90, 1, 0, 0);
    glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setBackOrtho_Courtyard() {

    glRotatef(90, 1, 0, 0);
    glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setLeftOrtho_Courtyard() {

    glRotatef(90, 1, 0, 0);
    glRotatef(90, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW + 463, Y_MAX_VIEW - 433, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setRightOrtho_Courtyard() {

    glRotatef(90, 1, 0, 0);
    glRotatef(-90, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW + 463, Y_MAX_VIEW - 433, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setTopOrtho_Courtyard() {

    glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW + 463, Y_MAX_VIEW - 433, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setBotOrtho_Courtyard() {

    glRotatef(180, 1, 0, 0);
    glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW + 463, Y_MAX_VIEW - 433, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

/*****************************************************Main Building****************************************************/

void setFrontOrtho_Main_Building() {

    glRotatef(90, 1, 0, 0);
    glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setBackOrtho_Main_Building() {

    glRotatef(90, 1, 0, 0);
    glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setLeftOrtho_Main_Building() {

    glRotatef(90, 1, 0, 0);
    glRotatef(90, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW + 563, Y_MAX_VIEW - 233, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setRightOrtho_Main_Building() {

    glRotatef(90, 1, 0, 0);
    glRotatef(-90, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW + 563, Y_MAX_VIEW - 233, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setTopOrtho_Main_Building() {

    glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW + 563, Y_MAX_VIEW - 233, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

void setBotOrtho_Main_Building() {

    glRotatef(180, 1, 0, 0);
    glRotatef(180, 0, 0, 1);
    glOrtho(X_MIN_VIEW + 272, X_MAX_VIEW - 535, Y_MIN_VIEW + 563, Y_MAX_VIEW - 233, Z_NEAR_VIEW + 710, Z_FAR_VIEW - 999);

}

/*****************************************************Delivery Door****************************************************/

void setFrontOrtho_Delivery_Door() {}

void setBackOrtho_Delivery_Door() {}

void setLeftOrtho_Delivery_Door() {}

void setRightOrtho_Delivery_Door() {}

void setTopOrtho_Delivery_Door() {}

void setBotOrtho_Delivery_Door() {}

/********************************************************Castle********************************************************/

void setFrontOrtho_Castle() {}

void setBackOrtho_Castle() {}

void setLeftOrtho_Castle() {}

void setRightOrtho_Castle() {}

void setTopOrtho_Castle() {}

void setBotOrtho_Castle() {}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                          3D                                                          *
*                                                                                                                      *
***********************************************************************************************************************/

/*******************************************************Entrance*******************************************************/

void setFrontPerspective_Entrance() {

    gluPerspective(150, 1, 1, 1000);
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

/********************************************************Hallway*******************************************************/

void setFrontPerspective_Hallway() {

    gluPerspective(150, 1, 1, 230);
    gluLookAt(X_INITIAL + 268, Y_INITIAL + 239, 80, X_INITIAL + 268, Y_INITIAL + 240, 80, 0, 0, 1);

}

void setBackPerspective_Hallway() {

    gluPerspective(150, 1, 1, 230);
    gluLookAt(X_INITIAL + 268, Y_INITIAL + 491, 80, X_INITIAL + 268, Y_INITIAL + 490, 80, 0, 0, 1);

}

void setLeftPerspective_Hallway() {

    gluPerspective(150, 1, 1, 230);
    gluLookAt(X_INITIAL + 146, Y_INITIAL + 365, 80, X_INITIAL + 147, Y_INITIAL + 365, 80, 0, 0, 1);

}

void setRightPerspective_Hallway() {

    gluPerspective(150, 1, 1, 230);
    gluLookAt(X_INITIAL + 391, Y_INITIAL + 365, 80, X_INITIAL + 390, Y_INITIAL + 365, 80, 0, 0, 1);

}

void setTopPerspective_Hallway() {

    gluPerspective(150, 1, 1, 70);
    gluLookAt(X_INITIAL + 268, Y_INITIAL + 365, 68, X_INITIAL + 268, Y_INITIAL + 365, 67, 0, 1, 0);

}

void setBotPerspective_Hallway() {

    gluPerspective(150, 1, 1, 70);
    gluLookAt(X_INITIAL + 268, Y_INITIAL + 365, -28, X_INITIAL + 268, Y_INITIAL + 365, -27, 0, 1, 0);

}

/*******************************************************Courtyard******************************************************/

void setFrontPerspective_Courtyard() {}

void setBackPerspective_Courtyard() {}

void setLeftPerspective_Courtyard() {}

void setRightPerspective_Courtyard() {}

void setTopPerspective_Courtyard() {}

void setBotPerspective_Courtyard() {}

/*****************************************************Main Building****************************************************/

void setFrontPerspective_Main_Building() {}

void setBackPerspective_Main_Building() {}

void setLeftPerspective_Main_Building() {}

void setRightPerspective_Main_Building() {}

void setTopPerspective_Main_Building() {}

void setBotPerspective_Main_Building() {}

/*****************************************************Delivery Door****************************************************/

void setFrontPerspective_Delivery_Door() {}

void setBackPerspective_Delivery_Door() {}

void setLeftPerspective_Delivery_Door() {}

void setRightPerspective_Delivery_Door() {}

void setTopPerspective_Delivery_Door() {}

void setBotPerspective_Delivery_Door() {}

/********************************************************Castle********************************************************/

void setFrontPerspective_Castle() {}

void setBackPerspective_Castle() {}

void setLeftPerspective_Castle() {}

void setRightPerspective_Castle() {}

void setTopPerspective_Castle() {}

void setBotPerspective_Castle() {}

/***********************************************************************************************************************
************************************************************************************************************************
*************************************************Chose the regular view*************************************************
************************************************************************************************************************
***********************************************************************************************************************/

/***********************************************************************************************************************
*                                                                                                                      *
*                                                          2D                                                          *
*                                                                                                                      *
***********************************************************************************************************************/

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

            glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW, Z_FAR_VIEW);

        }break;

//      bot view
        case -5: {

            setBotOrtho();

        }break;

    }

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                          3D                                                          *
*                                                                                                                      *
***********************************************************************************************************************/

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

/***********************************************************************************************************************
************************************************************************************************************************
************************************************Chose the irregular view************************************************
************************************************************************************************************************
***********************************************************************************************************************/

/***********************************************************************************************************************
*                                                                                                                      *
*                                                          2D                                                          *
*                                                                                                                      *
***********************************************************************************************************************/

void setOrtho_Entrance(int option) {

    switch (option) {

//      front
        case -6: {

            setFrontOrtho_Entrance();

        }break;

//      back
        case -7: {

            setBackOrtho_Entrance();

        }break;

//      left
        case -8: {

            setLeftOrtho_Entrance();

        }break;

//      right
        case -9: {

            setRightOrtho_Entrance();

        }break;

//      top
        case -10: {

            setTopOrtho_Entrance();

        }break;

//      bot
        case -11: {

            setBotOrtho_Entrance();

        }

    }

}

void setOrtho_Hallway(int option) {

    switch (option) {

//      front
        case -12: {

            setFrontOrtho_Hallway();

        }break;

//      back
        case -13: {

            setBackOrtho_Hallway();

        }break;

//      Left
        case -14: {

            setLeftOrtho_Hallway();

        }break;

//      Right
        case -15: {

            setRightOrtho_Hallway();

        }break;

//      Top
        case -16: {

            setTopOrtho_Hallway();

        }break;

//      Bot
        case -17: {

            setBotOrtho_Hallway();

        }break;

    }

}

void setOrtho_Courtyard(int option) {

    switch (option) {

//      front
        case -18: {

            setFrontOrtho_Courtyard();

        }break;

//      back
        case -19: {

            setBackOrtho_Courtyard();

        }break;

//      Left
        case -20: {

            setLeftOrtho_Courtyard();

        }break;

//      Right
        case -21: {

            setRightOrtho_Courtyard();

        }break;

//      Top
        case -22: {

            setTopOrtho_Courtyard();

        }break;

//      Bot
        case -23: {

            setBotOrtho_Courtyard();

        }break;

    }

}

void setOrtho_Main_Building(int option) {

    switch (option) {

//      front
        case -24: {

            setFrontOrtho_Main_Building();

        }break;

//      back
        case -25: {

            setBackOrtho_Main_Building();

        }break;

//      Left
        case -26: {

            setLeftOrtho_Main_Building();

        }break;

//      Right
        case -27: {

            setRightOrtho_Main_Building();

        }break;

//      Top
        case -28: {

            setTopOrtho_Main_Building();

        }break;

//      Bot
        case -29: {

            setBotOrtho_Main_Building();

        }break;

    }

}

void setOrtho_Delivery_Door(int option) {

    switch (option) {

//      front
        case -30: {

            setFrontOrtho_Delivery_Door();

        }break;

//      back
        case -31: {

            setBackOrtho_Delivery_Door();

        }break;

//      Left
        case -32: {

            setLeftOrtho_Delivery_Door();

        }break;

//      Right
        case -33: {

            setRightOrtho_Delivery_Door();

        }break;

//      Top
        case -34: {

            setTopOrtho_Delivery_Door();

        }break;

//      Bot
        case -35: {

            setBotOrtho_Delivery_Door();

        }break;

    }

}

void setOrtho_Castle(int option) {

    switch (option) {

//      front
        case -36: {

            setFrontOrtho_Castle();

        }break;

//      back
        case -37: {

            setBackOrtho_Castle();

        }break;

//      Left
        case -38: {

            setLeftOrtho_Castle();

        }break;

//      Right
        case -39: {

            setRightOrtho_Castle();

        }break;

//      Top
        case -40: {

            setTopOrtho_Castle();

        }break;

//      Bot
        case -41: {

            setBotOrtho_Castle();

        }break;

    }

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                          3D                                                          *
*                                                                                                                      *
***********************************************************************************************************************/

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

void setPerspective_Hallway(int option) {

    switch (option) {

//      front
        case 13: {

            setFrontPerspective_Hallway();

        }break;

//      back
        case 14: {

            setBackPerspective_Hallway();

        }break;

//      Left
        case 15: {

            setLeftPerspective_Hallway();

        }break;

//      Right
        case 16: {

            setRightPerspective_Hallway();

        }break;

//      Top
        case 17: {

            setTopPerspective_Hallway();

        }break;

//      Bot
        case 18: {

            setBotPerspective_Hallway();

        }break;

    }

}

void setPerspective_Courtyard(int option) {

    switch (option) {

//      front
        case 19: {

            setFrontPerspective_Courtyard();

        }break;

//      back
        case 20: {

            setBackPerspective_Courtyard();

        }break;

//      Left
        case 21: {

            setLeftPerspective_Courtyard();

        }break;

//      Right
        case 22: {

            setRightPerspective_Courtyard();

        }break;

//      Top
        case 23: {

            setTopPerspective_Courtyard();

        }break;

//      Bot
        case 24: {

            setBotPerspective_Courtyard();

        }break;

    }

}

void setPerspective_Main_Building(int option) {

    switch (option) {

//      front
        case 25: {

            setFrontPerspective_Main_Building();

        }break;

//      back
        case 26: {

            setBackPerspective_Main_Building();

        }break;

//      Left
        case 27: {

            setLeftPerspective_Main_Building();

        }break;

//      Right
        case 28: {

            setRightPerspective_Main_Building();

        }break;

//      Top
        case 29: {

            setTopPerspective_Main_Building();

        }break;

//      Bot
        case 30: {

            setBotPerspective_Main_Building();

        }break;

    }

}

void setPerspective_Delivery_Door(int option) {

    switch (option) {

//      front
        case 31: {

            setFrontPerspective_Delivery_Door();

        }break;

//      back
        case 32: {

            setFrontPerspective_Delivery_Door();

        }break;

//      Left
        case 33: {

            setFrontPerspective_Delivery_Door();

        }break;

//      Right
        case 34: {

            setFrontPerspective_Delivery_Door();

        }break;

//      Top
        case 35: {

            setFrontPerspective_Delivery_Door();

        }break;

//      Bot
        case 36: {

            setFrontPerspective_Delivery_Door();

        }break;

    }

}

void setPerspective_Castle(int option) {

    switch (option) {

//      front
        case 37: {

            setFrontPerspective_Castle();

        }break;

//      back
        case 38: {

            setFrontPerspective_Castle();

        }break;

//      Left
        case 39: {

            setFrontPerspective_Castle();

        }break;

//      Right
        case 40: {

            setFrontPerspective_Castle();

        }break;

//      Top
        case 41: {

            setFrontPerspective_Castle();

        }break;

//      Bot
        case 42: {

            setFrontPerspective_Castle();

        }break;

    }

}

/***********************************************************************************************************************
************************************************************************************************************************
**********************************************Chose the perspective option**********************************************
************************************************************************************************************************
***********************************************************************************************************************/

void setPerspectives(int option) {

    switch (option) {

//      Castle
        case -36: {}
        case -37: {}
        case -38: {}
        case -39: {}
        case -40: {}
        case -41: {

            setOrtho_Castle(option);

        }break;

//      Delivery Door
        case -30: {}
        case -31: {}
        case -32: {}
        case -33: {}
        case -34: {}
        case -35: {

            setOrtho_Delivery_Door(option);

        }break;

//      Main Building
        case -24: {}
        case -25: {}
        case -26: {}
        case -27: {}
        case -28: {}
        case -29: {

            setOrtho_Main_Building(option);

        }break;

//      Courtyard
        case -18: {}
        case -19: {}
        case -20: {}
        case -21: {}
        case -22: {}
        case -23: {

            setOrtho_Courtyard(option);

        }break;

//      Hallway

        case -17: {}
        case -16: {}
        case -15: {}
        case -14: {}
        case -13: {}
        case -12: {

            setOrtho_Hallway(option);

        }break;

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

//      IRegular

        case 1: {}
        case 2: {}
        case 3: {}
        case 4: {}
        case 5: {}
        case 6: {

            setPerspective_Regular(option);

        }break;

//      Entrance
        case 7: {}
        case 8: {}
        case 9: {}
        case 10: {}
        case 11: {}
        case 12: {

            setPerspective_Entrance(option);

        }break;

//      Hallway
        case 13: {}
        case 14: {}
        case 15: {}
        case 16: {}
        case 17: {}
        case 18: {

            setPerspective_Hallway(option);

        }break;

//      Courtyard
        case 19: {}
        case 20: {}
        case 21: {}
        case 22: {}
        case 23: {}
        case 24: {

            setPerspective_Courtyard(option);

        }break;

//      Main Building
        case 25: {}
        case 26: {}
        case 27: {}
        case 28: {}
        case 29: {}
        case 30: {

            setPerspective_Main_Building(option);

        }break;

//      Delivery Door
        case 31: {}
        case 32: {}
        case 33: {}
        case 34: {}
        case 35: {}
        case 36: {

            setPerspective_Delivery_Door(option);

        }break;

//      Castle
        case 37: {}
        case 38: {}
        case 39: {}
        case 40: {}
        case 41: {}
        case 42: {

            setPerspective_Castle(option);

        }break;

    }

}