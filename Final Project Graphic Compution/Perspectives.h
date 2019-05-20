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