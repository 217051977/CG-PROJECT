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
*************************************************Declares the menus IDs*************************************************
************************************************************************************************************************
***********************************************************************************************************************/
int color_Menu_ID;

/**********************************************************************/
int perspective_Menu_ID;

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

/**********************************************************************/
void regular_Perspective_2D_Menu_Options(int optionID) {

    switch (optionID) {

        case 0: {}
        case -1: {}
        case -2: {}
        case -3: {}
        case -4: {}
        case -5: {

            perspective_Or_Animation = optionID;

            printf("Changing the value of the variable perspective_Or_Animation to %d\n", optionID);

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

    visualization_Manager();

    glutPostRedisplay();

}

/**********************************************************************/
void regular_Perspective_3D_Menu_Options(int optionID) {

    switch (optionID) {

        case 1: {}
        case 2: {}
        case 3: {}
        case 4: {}
        case 5: {}
        case 6: {

            perspective_Or_Animation = optionID;

            printf("Changing the value of the variable perspective_Or_Animation to %d\n", optionID);

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

    visualization_Manager();

    glutPostRedisplay();

}

void entrance_Perspective_3D_Menu_Options(int optionID) {

    int sceneAux = 1;

    switch (optionID) {

        case 7: {}
        case 8: {}
        case 9: {}
        case 10: {}
        case 11: {}
        case 12: {

            scene_To_print = sceneAux;

            perspective_Or_Animation = optionID;

            printf("Changing the value of the variable perspective_Or_Animation to %d\n", optionID);

            printf("Changing the value of the variable scene_To_print to %d\n", optionID);

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

    visualization_Manager();

    glutPostRedisplay();

}

/***********************************************************************************************************************
************************************************************************************************************************
*******************************************Create the menus and menus option********************************************
************************************************************************************************************************
***********************************************************************************************************************/
void makeSubMenu(int someValue) {}

/**********************************************************************/
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
void create_Entrance_Perspective_2D_Menu() {}

/**********************************************************************/
void create_Irregular_perspective_2D_Menu() {

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

/**********************************************************************/
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
void create_Hallway_perspective_3D_Menu() {}

/**********************************************************************/
void create_Courtyard_perspective_3D_Menu() {}

/**********************************************************************/
void create_Main_Building_perspective_3D_Menu() {}

/**********************************************************************/
void create_Delivery_Building_perspective_3D_Menu() {}

/**********************************************************************/
void create_Castle_perspective_3D_Menu() {}

/**********************************************************************/
void create_Irregular_perspective_3D_Menu() {

    create_Entrance_perspective_3D_Menu();

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

/**********************************************************************/
void create_perspective_Menu() {

    create_perspective_2D_Menu();
    create_perspective_3D_Menu();

    perspective_Menu_ID = glutCreateMenu(makeSubMenu);
    glutAddSubMenu("2D", perspective_2D_Menu_ID);
    glutAddSubMenu("3D", perspective_3D_Menu_ID);

}

/**********************************************************************/
void create_Menu() {

    create_perspective_Menu();

    glutCreateMenu(quitOption);
    glutAddMenuEntry("Animation", 1);
    glutAddSubMenu("Perspective", perspective_Menu_ID);
    glutAddMenuEntry("Quit", -1);

    // The menu is attached to a mouse button.
    glutAttachMenu(GLUT_RIGHT_BUTTON);

}
