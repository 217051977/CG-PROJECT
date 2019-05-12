#pragma once

int color_Menu_ID;

int perspective_Menu_ID;

int perspective_2D_Menu_ID;
int regular_Perspective_2D_Menu_ID;
int irregular_Perspective_2D_Menu_ID;

int entrance_Perspective_2D_Menu_ID;
int hallway_Perspective_2D_Menu_ID;
int courtyard_Perspective_2D_Menu_ID;
int main_Building_Perspective_2D_Menu_ID;
int delivery_Door_Perspective_2D_Menu_ID;
int castle_Perspective_2D_Menu_ID;

int perspective_3D_Menu_ID;
int regular_Perspective_3D_Menu_ID;
int irregular_Perspective_3D_Menu_ID;

int entrance_Perspective_3D_Menu_ID;
int hallway_Perspective_3D_Menu_ID;
int courtyard_Perspective_3D_Menu_ID;
int main_Building_Perspective_3D_Menu_ID;
int delivery_Door_Perspective_3D_Menu_ID;
int castle_Perspective_3D_Menu_ID;

void makeSubMenu(int someValue) {}



void quitOption(int optionID) {

    if (optionID == -1) {

        exit(0);

    }

}



void regular_Perspective_2D_Menu_Options(int optionID) {

    switch (optionID) {

        case -5: {

            perspective_Or_Animation = -5;

            printf("set perspective_Or_Animation to %d", perspective_Or_Animation);

        }break;

        case -4: {

            perspective_Or_Animation = -4;

        }break;

        case -3: {

            perspective_Or_Animation = -3;

        }break;

        case -2: {

            perspective_Or_Animation = -2;

        }break;

        case -1: {

            perspective_Or_Animation = -1;

        }break;

        case 0: {

            perspective_Or_Animation = 0;

        }break;

    }

    visualization_Manager();

    glutPostRedisplay();

}



void regular_Perspective_3D_Menu_Options(int optionID) {

    switch (optionID) {

        case 1: {

            perspective_Or_Animation = 1;

        }break;

        case 2: {

            perspective_Or_Animation = 2;

        }break;

        case 3: {

            perspective_Or_Animation = 3;

        }break;

        case 4: {

            perspective_Or_Animation = 4;

        }break;

        case 5: {

            perspective_Or_Animation = 5;

        }break;

        case 6: {

            perspective_Or_Animation = 6;

        }break;

    }

    visualization_Manager();

    glutPostRedisplay();

}

void entrance_Perspective_3D_Menu_Options(int optionID) {

    scene_To_print = 1;

    switch (optionID) {

        case 0: {

            perspective_Or_Animation = 7;

        }break;

        case 1: {

            perspective_Or_Animation = 8;

        }break;

        case 2: {

            perspective_Or_Animation = 9;

        }break;

        case 3: {

            perspective_Or_Animation = 10;

        }break;

        case 4: {

            perspective_Or_Animation = 11;

        }break;

        case 5: {

            perspective_Or_Animation = 12;

        }break;

    }

    visualization_Manager();

    glutPostRedisplay();

}




void create_Regular_perspective_2D_Menu() {

    regular_Perspective_2D_Menu_ID = glutCreateMenu(regular_Perspective_2D_Menu_Options);
    glutAddMenuEntry("Top", 0);
    glutAddMenuEntry("Bot", -2);
    glutAddMenuEntry("Front", -3);
    glutAddMenuEntry("Back", -5);
    glutAddMenuEntry("Left", -1);
    glutAddMenuEntry("Right", -4);

}



void create_Entrance_Perspective_2D_Menu() {}



void create_Irregular_perspective_2D_Menu() {

    irregular_Perspective_2D_Menu_ID = glutCreateMenu(makeSubMenu);
    glutAddSubMenu("Entrance", entrance_Perspective_2D_Menu_ID);
    glutAddSubMenu("Hallway", hallway_Perspective_2D_Menu_ID);
    glutAddSubMenu("Courtyard", courtyard_Perspective_2D_Menu_ID);
    glutAddSubMenu("Main Building", main_Building_Perspective_2D_Menu_ID);
    glutAddSubMenu("Delivery Door", delivery_Door_Perspective_2D_Menu_ID);
    glutAddSubMenu("Castle", castle_Perspective_2D_Menu_ID);

}



void create_perspective_2D_Menu() {

    create_Regular_perspective_2D_Menu();
    create_Irregular_perspective_2D_Menu();

    perspective_2D_Menu_ID = glutCreateMenu(makeSubMenu);
    glutAddSubMenu("Regular", regular_Perspective_2D_Menu_ID);
    glutAddSubMenu("Irregular", irregular_Perspective_2D_Menu_ID);

}



void create_Regular_perspective_3D_Menu() {

    regular_Perspective_3D_Menu_ID = glutCreateMenu(regular_Perspective_3D_Menu_Options);
    glutAddMenuEntry("Top", 1);
    glutAddMenuEntry("Bot", 3);
    glutAddMenuEntry("Front", 4);
    glutAddMenuEntry("Back", 6);
    glutAddMenuEntry("Left", 2);
    glutAddMenuEntry("Right", 5);

}



void create_Entrance_perspective_3D_Menu() {

    entrance_Perspective_3D_Menu_ID = glutCreateMenu(entrance_Perspective_3D_Menu_Options);
    glutAddMenuEntry("Front", 0);
    glutAddMenuEntry("Back", 1);
    glutAddMenuEntry("Left", 2);
    glutAddMenuEntry("Right", 3);
    glutAddMenuEntry("Top", 4);
    glutAddMenuEntry("Bot", 5);

}

void create_Hallway_perspective_3D_Menu() {}

void create_Courtyard_perspective_3D_Menu() {}

void create_Main_Building_perspective_3D_Menu() {}

void create_Delivery_Building_perspective_3D_Menu() {}

void create_Castle_perspective_3D_Menu() {}



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

void create_perspective_3D_Menu() {

    create_Regular_perspective_3D_Menu();

    create_Irregular_perspective_3D_Menu();

    perspective_3D_Menu_ID = glutCreateMenu(makeSubMenu);
    glutAddSubMenu("Regular", regular_Perspective_3D_Menu_ID);
    glutAddSubMenu("Irregular", irregular_Perspective_3D_Menu_ID);

}

void create_perspective_Menu() {

    create_perspective_2D_Menu();
    create_perspective_3D_Menu();

    perspective_Menu_ID = glutCreateMenu(makeSubMenu);
    glutAddSubMenu("2D", perspective_2D_Menu_ID);
    glutAddSubMenu("3D", perspective_3D_Menu_ID);

}

void create_Menu() {

    create_perspective_Menu();

    glutCreateMenu(quitOption);
    glutAddMenuEntry("Animation", 1);
    glutAddSubMenu("Perspective", perspective_Menu_ID);
    glutAddMenuEntry("Quit", -1);

    // The menu is attached to a mouse button.
    glutAttachMenu(GLUT_RIGHT_BUTTON);

}
