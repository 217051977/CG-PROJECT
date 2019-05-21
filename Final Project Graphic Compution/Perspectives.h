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