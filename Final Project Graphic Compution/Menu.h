/***********************************************************************************************************************
*                                                                                                                      *
*                                                        Menu.h                                                        *
*                                                                                                                      *
*                                 This file is responsible manage and create the menus                                 *
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
***********************************************Set the new scene and view***********************************************
************************************************************************************************************************
***********************************************************************************************************************/
void changeViewAndScene(int scene, int view) {

    scene_To_print = scene;

    perspective_Or_Animation = view;

    printf("Changing the value of the variable perspective_Or_Animation to %d\n", view);

    printf("Changing the value of the variable scene_To_print to %d\n\n", scene);

}

/***********************************************************************************************************************
************************************************************************************************************************
*************************************************Declares the menus IDs*************************************************
************************************************************************************************************************
***********************************************************************************************************************/
int color_Menu_ID;

/**********************************************************************/
int perspective_Menu_ID;

/**********************************************************************/
int animation_Menu_ID;

/**********************************************************************/
int animation_Entrance_Doors_Menu_ID;
int animation_Delivery_Doors_Menu_ID;
int animation_Both_Doors_Menu_ID;

/**********************************************************************/
int perspective_2D_Menu_ID;
int regular_Perspective_2D_Menu_ID;
int irregular_Perspective_2D_Menu_ID;

/**********************************************************************/
int entrance_Perspective_2D_Menu_ID;
int hallway_Perspective_2D_Menu_ID;
int courtyard_Perspective_2D_Menu_ID;
int main_Building_Perspective_2D_Menu_ID;
int delivery_Door_Perspective_2D_Menu_ID;
int castle_Perspective_2D_Menu_ID;

/**********************************************************************/
int perspective_3D_Menu_ID;
int regular_Perspective_3D_Menu_ID;
int irregular_Perspective_3D_Menu_ID;

/**********************************************************************/
int entrance_Perspective_3D_Menu_ID;
int hallway_Perspective_3D_Menu_ID;
int courtyard_Perspective_3D_Menu_ID;
int main_Building_Perspective_3D_Menu_ID;
int delivery_Door_Perspective_3D_Menu_ID;
int castle_Perspective_3D_Menu_ID;

/***********************************************************************************************************************
************************************************************************************************************************
******************************************Manage the option chosen in the menu******************************************
************************************************************************************************************************
***********************************************************************************************************************/
void quitOption(int optionID) {

    if (optionID == -1) {

        exit(0);

        printf("Bye!");

    } else {

        printf("There's no %d as optionID\n", optionID);

    }

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                          2D                                                          *
*                                                                                                                      *
***********************************************************************************************************************/
void regular_Perspective_2D_Menu_Options(int optionID) {

    switch (optionID) {

        case 0: {}
        case -1: {}
        case -2: {}
        case -3: {}
        case -4: {}
        case -5: {

            changeViewAndScene(0, optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

/**********************************************************************************************************************/
void entrance_Perspective_2D_Menu_Options(int optionID) {

    switch (optionID) {

        case -6: {}
        case -7: {}
        case -8: {}
        case -9: {}
        case -10: {}
        case -11: {

            changeViewAndScene(1, optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

void hallway_Perspective_2D_Menu_Options(int optionID) {

    switch (optionID) {

        case -12: {}
        case -13: {}
        case -14: {}
        case -15: {}
        case -16: {}
        case -17: {

            changeViewAndScene(2, optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

void courtyard_Perspective_2D_Menu_Options(int optionID) {

    switch (optionID) {

        case -18: {}
        case -19: {}
        case -20: {}
        case -21: {}
        case -22: {}
        case -23: {

            changeViewAndScene(3, optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

void Main_Building_Perspective_2D_Menu_Options(int optionID) {

    switch (optionID) {

        case -24: {}
        case -25: {}
        case -26: {}
        case -27: {}
        case -28: {}
        case -29: {

            changeViewAndScene(4, optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

void Delivery_Door_Perspective_2D_Menu_Options(int optionID) {

    switch (optionID) {

        case -30: {}
        case -31: {}
        case -32: {}
        case -33: {}
        case -34: {}
        case -35: {

            changeViewAndScene(5, optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

void castle_Perspective_2D_Menu_Options(int optionID) {

    switch (optionID) {

        case -36: {}
        case -37: {}
        case -38: {}
        case -39: {}
        case -40: {}
        case -41: {

            changeViewAndScene(6, optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                          3D                                                          *
*                                                                                                                      *
***********************************************************************************************************************/
void regular_Perspective_3D_Menu_Options(int optionID) {

    switch (optionID) {

        case 1: {}
        case 2: {}
        case 3: {}
        case 4: {}
        case 5: {}
        case 6: {

            changeViewAndScene(0, optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

/**********************************************************************************************************************/
void entrance_Perspective_3D_Menu_Options(int optionID) {

    switch (optionID) {

        case 7: {}
        case 8: {}
        case 9: {}
        case 10: {}
        case 11: {}
        case 12: {

            changeViewAndScene(1, optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

void hallway_Perspective_3D_Menu_Options(int optionID) {

    switch (optionID) {

        case 13: {}
        case 14: {}
        case 15: {}
        case 16: {}
        case 17: {}
        case 18: {

            changeViewAndScene(2, optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

void courtyard_Perspective_3D_Menu_Options(int optionID) {

    switch (optionID) {

        case 19: {}
        case 20: {}
        case 21: {}
        case 22: {}
        case 23: {}
        case 24: {

            changeViewAndScene(3, optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

void Main_Building_Perspective_3D_Menu_Options(int optionID) {

    switch (optionID) {

        case 25: {}
        case 26: {}
        case 27: {}
        case 28: {}
        case 29: {}
        case 30: {

            changeViewAndScene(4, optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

void Delivery_Door_Perspective_3D_Menu_Options(int optionID) {

    switch (optionID) {

        case 31: {}
        case 32: {}
        case 33: {}
        case 34: {}
        case 35: {}
        case 36: {

            changeViewAndScene(5, optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

void castle_Perspective_3D_Menu_Options(int optionID) {

    switch (optionID) {

        case 37: {}
        case 38: {}
        case 39: {}
        case 40: {}
        case 41: {}
        case 42: {

            changeViewAndScene(6, optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                      Animation                                                       *
*                                                                                                                      *
***********************************************************************************************************************/
void doors_Menu_Options(int optionID) {

    switch (optionID) {

//      Entrance
//      Open doors
        case 0: {

            if(entranceDoors_AreOpening == 0) {

                entranceDoors_AreOpening = 1;

                glutTimerFunc(100, open_The_Entrance_Doors, 1);

                printf(" *                          Animation started - Entrance doors are opening                         *\n");

                printf(" *                                                                                                 * \n");

            }

            visualization_Manager();

            glutPostRedisplay();

        }break;

//      Close doors
        case 1: {

            if(entranceDoors_AreOpening == 1) {

                entranceDoors_AreOpening = 0;

                glutTimerFunc(100, close_The_Entrance_Doors, 1);

                printf(" *                          Animation started - Entrance doors are closing                         *\n");

                printf(" *                                                                                                 * \n");

            }

            visualization_Manager();

            glutPostRedisplay();

        }break;

//      Delivery
//      Open doors
        case 2: {

            if(deliveryDoors_AreOpening == 0) {

                deliveryDoors_AreOpening = 1;

                glutTimerFunc(100, open_The_Delivery_Doors, 1);

                printf(" *                          Animation started - Delivery doors are opening                         *\n");

                printf(" *                                                                                                 * \n");

            }

            visualization_Manager();

            glutPostRedisplay();

        }break;

//      Close doors
        case 3: {

            if(deliveryDoors_AreOpening == 1) {

                deliveryDoors_AreOpening = 0;

                glutTimerFunc(100, close_The_Delivery_Doors, 1);

                printf(" *                          Animation started - Delivery doors are closing                         *\n");

                printf(" *                                                                                                 * \n");

            }

            visualization_Manager();

            glutPostRedisplay();

        }break;

//      Both
//      Open doors
        case 4: {

            if(deliveryDoors_AreOpening == 0) {

                if(entranceDoors_AreOpening == 0) {

                    entranceDoors_AreOpening = 1;
                    deliveryDoors_AreOpening = 1;

                    glutTimerFunc(100, open_The_Doors, 1);

                    printf(" *                            Animation started - Both doors are opening                           *\n");

                    printf(" *                                                                                                 * \n");

                } else {

                    deliveryDoors_AreOpening = 1;

                    glutTimerFunc(100, open_The_Delivery_Doors, 1);

                    printf(" *                          Animation started - Delivery doors are opening                         *\n");

                    printf(" *                                                                                                 * \n");

                }

            } else {

                if(entranceDoors_AreOpening == 0) {

                    entranceDoors_AreOpening = 1;

                    glutTimerFunc(100, open_The_Entrance_Doors, 1);

                    printf(" *                          Animation started - Entrance doors are opening                         *\n");

                    printf(" *                                                                                                 * \n");

                }

            }

            visualization_Manager();

            glutPostRedisplay();

        }break;

//      Close doors
        case 5: {

            if(deliveryDoors_AreOpening == 1) {

                if(entranceDoors_AreOpening == 1) {

                    entranceDoors_AreOpening = 0;
                    deliveryDoors_AreOpening = 0;

                    glutTimerFunc(100, close_The_Doors, 1);

                    printf(" *                            Animation started - Both doors are opening                           *\n");

                    printf(" *                                                                                                 * \n");

                } else {

                    deliveryDoors_AreOpening = 0;

                    glutTimerFunc(100, close_The_Delivery_Doors, 1);

                    printf(" *                          Animation started - Delivery doors are opening                         *\n");

                    printf(" *                                                                                                 * \n");

                }

            } else {

                if(entranceDoors_AreOpening == 1) {

                    entranceDoors_AreOpening = 0;

                    glutTimerFunc(100, close_The_Entrance_Doors, 1);

                    printf(" *                          Animation started - Entrance doors are opening                         *\n");

                    printf(" *                                                                                                 * \n");

                }

            }

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                        Color                                                         *
*                                                                                                                      *
***********************************************************************************************************************/
void color_Menu_Options(int optionID) {

    switch (optionID) {

//      Black and white
        case 0: {

//          background -> black
            B_RED = 0;
            B_GREEN = 0;
            B_BLUE = 0;
//          draw line -> white
            D_RED = 1;
            D_GREEN = 1;
            D_BLUE = 1;

            //call the function
            setup();

            visualization_Manager();

            glutPostRedisplay();

        }break;

//      White and black
        case 1: {

//          background -> black
            B_RED = 1;
            B_GREEN = 1;
            B_BLUE = 1;
//          draw line -> white
            D_RED = 0;
            D_GREEN = 0;
            D_BLUE = 0;

            //call the function
            setup();

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}
/***********************************************************************************************************************
************************************************************************************************************************
************************************************Create the menus options************************************************
************************************************************************************************************************
***********************************************************************************************************************/
void makeSubMenu(int someValue) {}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                          2D                                                          *
*                                                                                                                      *
***********************************************************************************************************************/
void create_Regular_perspective_2D_Menu() {

    regular_Perspective_2D_Menu_ID = glutCreateMenu(regular_Perspective_2D_Menu_Options);
    glutAddMenuEntry("Front", 0);
    glutAddMenuEntry("Back", -1);
    glutAddMenuEntry("Left", -2);
    glutAddMenuEntry("Right", -3);
    glutAddMenuEntry("Top", -4);
    glutAddMenuEntry("Bot", -5);

}

/**********************************************************************/
void create_Entrance_Perspective_2D_Menu() {

    entrance_Perspective_2D_Menu_ID = glutCreateMenu(entrance_Perspective_2D_Menu_Options);
    glutAddMenuEntry("Front", -6);
    glutAddMenuEntry("Back", -7);
    glutAddMenuEntry("Left", -8);
    glutAddMenuEntry("Right", -9);
    glutAddMenuEntry("Top", -10);
    glutAddMenuEntry("Bot", -11);

}

/**********************************************************************/
void create_Hallway_Perspective_2D_Menu() {

    hallway_Perspective_2D_Menu_ID = glutCreateMenu(hallway_Perspective_2D_Menu_Options);
    glutAddMenuEntry("Front", -12);
    glutAddMenuEntry("Back", -13);
    glutAddMenuEntry("Left", -14);
    glutAddMenuEntry("Right", -15);
    glutAddMenuEntry("Top", -16);
    glutAddMenuEntry("Bot", -17);

}

/**********************************************************************/
void create_Courtyard_perspective_2D_Menu() {

    courtyard_Perspective_2D_Menu_ID = glutCreateMenu(courtyard_Perspective_2D_Menu_Options);
    glutAddMenuEntry("Front", -18);
    glutAddMenuEntry("Back", -19);
    glutAddMenuEntry("Left", -20);
    glutAddMenuEntry("Right", -21);
    glutAddMenuEntry("Top", -22);
    glutAddMenuEntry("Bot", -23);

}

/**********************************************************************/
void create_Main_Building_perspective_2D_Menu() {

    main_Building_Perspective_2D_Menu_ID = glutCreateMenu(Main_Building_Perspective_2D_Menu_Options);
    glutAddMenuEntry("Front", -24);
    glutAddMenuEntry("Back", -25);
    glutAddMenuEntry("Left", -26);
    glutAddMenuEntry("Right", -27);
    glutAddMenuEntry("Top", -28);
    glutAddMenuEntry("Bot", -29);

}

/**********************************************************************/
void create_Delivery_Door_perspective_2D_Menu() {

    delivery_Door_Perspective_2D_Menu_ID = glutCreateMenu(Delivery_Door_Perspective_2D_Menu_Options);
    glutAddMenuEntry("Front", -30);
    glutAddMenuEntry("Back", -31);
    glutAddMenuEntry("Left", -32);
    glutAddMenuEntry("Right", -33);
    glutAddMenuEntry("Top", -34);
    glutAddMenuEntry("Bot", -35);

}

/**********************************************************************/
void create_Castle_perspective_2D_Menu() {

    castle_Perspective_2D_Menu_ID = glutCreateMenu(castle_Perspective_2D_Menu_Options);
    glutAddMenuEntry("Front", -36);
    glutAddMenuEntry("Back", -37);
    glutAddMenuEntry("Left", -38);
    glutAddMenuEntry("Right", -39);
    glutAddMenuEntry("Top", -40);
    glutAddMenuEntry("Bot", -41);

}

/**********************************************************************/
void create_Irregular_perspective_2D_Menu() {

    create_Entrance_Perspective_2D_Menu();
    create_Hallway_Perspective_2D_Menu();
    create_Courtyard_perspective_2D_Menu();
    create_Main_Building_perspective_2D_Menu();
    create_Delivery_Door_perspective_2D_Menu();
    create_Castle_perspective_2D_Menu();

    irregular_Perspective_2D_Menu_ID = glutCreateMenu(makeSubMenu);
    glutAddSubMenu("Entrance", entrance_Perspective_2D_Menu_ID);
    glutAddSubMenu("Hallway", hallway_Perspective_2D_Menu_ID);
    glutAddSubMenu("Courtyard", courtyard_Perspective_2D_Menu_ID);
    glutAddSubMenu("Main Building", main_Building_Perspective_2D_Menu_ID);
    glutAddSubMenu("Delivery Door", delivery_Door_Perspective_2D_Menu_ID);
    glutAddSubMenu("Castle", castle_Perspective_2D_Menu_ID);

}

/**********************************************************************/
void create_perspective_2D_Menu() {

    create_Regular_perspective_2D_Menu();
    create_Irregular_perspective_2D_Menu();

    perspective_2D_Menu_ID = glutCreateMenu(makeSubMenu);
    glutAddSubMenu("Regular", regular_Perspective_2D_Menu_ID);
    glutAddSubMenu("Irregular", irregular_Perspective_2D_Menu_ID);

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                          3D                                                          *
*                                                                                                                      *
***********************************************************************************************************************/
void create_Regular_perspective_3D_Menu() {

    regular_Perspective_3D_Menu_ID = glutCreateMenu(regular_Perspective_3D_Menu_Options);
    glutAddMenuEntry("Front", 1);
    glutAddMenuEntry("Back", 2);
    glutAddMenuEntry("Left", 3);
    glutAddMenuEntry("Right", 4);
    glutAddMenuEntry("Top", 5);
    glutAddMenuEntry("Bot", 6);

}

/**********************************************************************/
void create_Entrance_perspective_3D_Menu() {

    entrance_Perspective_3D_Menu_ID = glutCreateMenu(entrance_Perspective_3D_Menu_Options);
    glutAddMenuEntry("Front", 7);
    glutAddMenuEntry("Back", 8);
    glutAddMenuEntry("Left", 9);
    glutAddMenuEntry("Right", 10);
    glutAddMenuEntry("Top", 11);
    glutAddMenuEntry("Bot", 12);

}

/**********************************************************************/
void create_Hallway_perspective_3D_Menu() {

    hallway_Perspective_3D_Menu_ID = glutCreateMenu(hallway_Perspective_3D_Menu_Options);
    glutAddMenuEntry("Front", 13);
    glutAddMenuEntry("Back", 14);
    glutAddMenuEntry("Left", 15);
    glutAddMenuEntry("Right", 16);
    glutAddMenuEntry("Top", 17);
    glutAddMenuEntry("Bot", 18);

}

/**********************************************************************/
void create_Courtyard_perspective_3D_Menu() {

    courtyard_Perspective_3D_Menu_ID = glutCreateMenu(courtyard_Perspective_3D_Menu_Options);
    glutAddMenuEntry("Front", 19);
    glutAddMenuEntry("Back", 20);
    glutAddMenuEntry("Left", 21);
    glutAddMenuEntry("Right", 22);
    glutAddMenuEntry("Top", 23);
    glutAddMenuEntry("Bot", 24);

}

/**********************************************************************/
void create_Main_Building_perspective_3D_Menu() {

    main_Building_Perspective_3D_Menu_ID = glutCreateMenu(Main_Building_Perspective_3D_Menu_Options);
    glutAddMenuEntry("Front", 25);
    glutAddMenuEntry("Back", 26);
    glutAddMenuEntry("Left", 27);
    glutAddMenuEntry("Right", 28);
    glutAddMenuEntry("Top", 29);
    glutAddMenuEntry("Bot", 30);

}

/**********************************************************************/
void create_Delivery_Door_perspective_3D_Menu() {

    delivery_Door_Perspective_3D_Menu_ID = glutCreateMenu(Delivery_Door_Perspective_3D_Menu_Options);
    glutAddMenuEntry("Front", 31);
    glutAddMenuEntry("Back", 32);
    glutAddMenuEntry("Left", 33);
    glutAddMenuEntry("Right", 34);
    glutAddMenuEntry("Top", 35);
    glutAddMenuEntry("Bot", 36);

}

/**********************************************************************/
void create_Castle_perspective_3D_Menu() {

    castle_Perspective_3D_Menu_ID = glutCreateMenu(castle_Perspective_3D_Menu_Options);
    glutAddMenuEntry("Front", 37);
    glutAddMenuEntry("Back", 38);
    glutAddMenuEntry("Left", 39);
    glutAddMenuEntry("Right", 40);
    glutAddMenuEntry("Top", 41);
    glutAddMenuEntry("Bot", 42);

}

/**********************************************************************/
void create_Irregular_perspective_3D_Menu() {

    create_Entrance_perspective_3D_Menu();
    create_Hallway_perspective_3D_Menu();
    create_Courtyard_perspective_3D_Menu();
    create_Main_Building_perspective_3D_Menu();
    create_Delivery_Door_perspective_3D_Menu();
    create_Castle_perspective_3D_Menu();

    irregular_Perspective_3D_Menu_ID = glutCreateMenu(makeSubMenu);
    glutAddSubMenu("Entrance", entrance_Perspective_3D_Menu_ID);
    glutAddSubMenu("Hallway", hallway_Perspective_3D_Menu_ID);
    glutAddSubMenu("Courtyard", courtyard_Perspective_3D_Menu_ID);
    glutAddSubMenu("Main Building", main_Building_Perspective_3D_Menu_ID);
    glutAddSubMenu("Delivery Door", delivery_Door_Perspective_3D_Menu_ID);
    glutAddSubMenu("Castle", castle_Perspective_3D_Menu_ID);

}

/**********************************************************************/
void create_perspective_3D_Menu() {

    create_Regular_perspective_3D_Menu();

    create_Irregular_perspective_3D_Menu();

    perspective_3D_Menu_ID = glutCreateMenu(makeSubMenu);
    glutAddSubMenu("Regular", regular_Perspective_3D_Menu_ID);
    glutAddSubMenu("Irregular", irregular_Perspective_3D_Menu_ID);

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                      Animation                                                       *
*                                                                                                                      *
***********************************************************************************************************************/
void create_Animation_Menu_Entrance_Doors() {

    animation_Entrance_Doors_Menu_ID = glutCreateMenu(doors_Menu_Options);
    glutAddMenuEntry("Open doors", 0);
    glutAddMenuEntry("Close doors", 1);


}

void create_Animation_Menu_Delivery_Doors() {

    animation_Delivery_Doors_Menu_ID = glutCreateMenu(doors_Menu_Options);
    glutAddMenuEntry("Open doors", 2);
    glutAddMenuEntry("Close doors", 3);


}

void create_Animation_Menu_Both_Doors() {

    animation_Both_Doors_Menu_ID = glutCreateMenu(doors_Menu_Options);
    glutAddMenuEntry("Open doors", 4);
    glutAddMenuEntry("Close doors", 5);


}

/***********************************************************************************************************************
************************************************************************************************************************
****************************************************Create the menus****************************************************
************************************************************************************************************************
***********************************************************************************************************************/
void create_perspective_Menu() {

    create_perspective_2D_Menu();
    create_perspective_3D_Menu();

    perspective_Menu_ID = glutCreateMenu(makeSubMenu);
    glutAddSubMenu("2D", perspective_2D_Menu_ID);
    glutAddSubMenu("3D", perspective_3D_Menu_ID);

}

void create_Animation_Menu() {

    create_Animation_Menu_Entrance_Doors();
    create_Animation_Menu_Delivery_Doors();
    create_Animation_Menu_Both_Doors();

    animation_Menu_ID = glutCreateMenu(makeSubMenu);
    glutAddSubMenu("Entrance doors", animation_Entrance_Doors_Menu_ID);
    glutAddSubMenu("Delivery doors", animation_Delivery_Doors_Menu_ID);
    glutAddSubMenu("Both doors", animation_Both_Doors_Menu_ID);


}

void create_Color_Menu() {

    color_Menu_ID = glutCreateMenu(color_Menu_Options);
    glutAddMenuEntry("Black and white", 0);
    glutAddMenuEntry("White and black", 1);


}

/**********************************************************************/
void create_Menu() {

    create_perspective_Menu();
    create_Animation_Menu();
    create_Color_Menu();

    glutCreateMenu(quitOption);
    glutAddSubMenu("Color", color_Menu_ID);
    glutAddSubMenu("Animation", animation_Menu_ID);
    glutAddSubMenu("Perspective", perspective_Menu_ID);
    glutAddMenuEntry("Quit", -1);

    // The menu is attached to a mouse button.
    glutAttachMenu(GLUT_RIGHT_BUTTON);

}
