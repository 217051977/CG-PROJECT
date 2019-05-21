#pragma once

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
void create_Entrance_perspective_2D_Menu() {

	entrance_Perspective_2D_Menu_ID = glutCreateMenu(entrance_Perspective_2D_Menu_Options);
	glutAddMenuEntry("Front", -6);
	glutAddMenuEntry("Back", -7);
	glutAddMenuEntry("Left", -8);
	glutAddMenuEntry("Right", -9);
	glutAddMenuEntry("Top", -10);
	glutAddMenuEntry("Bot", -11);

}

/**********************************************************************/
void create_Hallway_perspective_2D_Menu() {

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

/**********************************************************************************************************************/
void create_Entrance_Full_perspective_2D_Menu() {

    entrance_Full_Perspective_2D_Menu_ID = glutCreateMenu(entrance_Full_Perspective_2D_Menu_Options);
	glutAddMenuEntry("Front", -6);
	glutAddMenuEntry("Back", -7);
	glutAddMenuEntry("Left", -8);
	glutAddMenuEntry("Right", -9);
	glutAddMenuEntry("Top", -10);
	glutAddMenuEntry("Bot", -11);

}

/**********************************************************************/
void create_Hallway_Full_perspective_2D_Menu() {

    hallway_Full_Perspective_2D_Menu_ID = glutCreateMenu(hallway_Full_Perspective_2D_Menu_Options);
	glutAddMenuEntry("Front", -12);
	glutAddMenuEntry("Back", -13);
	glutAddMenuEntry("Left", -14);
	glutAddMenuEntry("Right", -15);
	glutAddMenuEntry("Top", -16);
	glutAddMenuEntry("Bot", -17);

}

/**********************************************************************/
void create_Courtyard_Full_perspective_2D_Menu() {

    courtyard_Full_Perspective_2D_Menu_ID = glutCreateMenu(courtyard_Full_Perspective_2D_Menu_Options);
	glutAddMenuEntry("Front", -18);
	glutAddMenuEntry("Back", -19);
	glutAddMenuEntry("Left", -20);
	glutAddMenuEntry("Right", -21);
	glutAddMenuEntry("Top", -22);
	glutAddMenuEntry("Bot", -23);

}

/**********************************************************************/
void create_Main_Building_Full_perspective_2D_Menu() {

    main_Building_Full_Perspective_2D_Menu_ID = glutCreateMenu(Main_Building_Full_Perspective_2D_Menu_Options);
	glutAddMenuEntry("Front", -24);
	glutAddMenuEntry("Back", -25);
	glutAddMenuEntry("Left", -26);
	glutAddMenuEntry("Right", -27);
	glutAddMenuEntry("Top", -28);
	glutAddMenuEntry("Bot", -29);

}

/**********************************************************************/
void create_Delivery_Door_Full_perspective_2D_Menu() {

    delivery_Door_Full_Perspective_2D_Menu_ID = glutCreateMenu(Delivery_Door_Full_Perspective_2D_Menu_Options);
	glutAddMenuEntry("Front", -30);
	glutAddMenuEntry("Back", -31);
	glutAddMenuEntry("Left", -32);
	glutAddMenuEntry("Right", -33);
	glutAddMenuEntry("Top", -34);
	glutAddMenuEntry("Bot", -35);

}

/**********************************************************************/
void create_Castle_Full_perspective_2D_Menu() {

    castle_Full_Perspective_2D_Menu_ID = glutCreateMenu(castle_Full_Perspective_2D_Menu_Options);
	glutAddMenuEntry("Front", -36);
	glutAddMenuEntry("Back", -37);
	glutAddMenuEntry("Left", -38);
	glutAddMenuEntry("Right", -39);
	glutAddMenuEntry("Top", -40);
	glutAddMenuEntry("Bot", -41);

}

/**********************************************************************************************************************/
void create_Full_perspective_2D_Menu() {

    create_Entrance_Full_perspective_2D_Menu();
    create_Hallway_Full_perspective_2D_Menu();
    create_Courtyard_Full_perspective_2D_Menu();
    create_Main_Building_Full_perspective_2D_Menu();
    create_Delivery_Door_Full_perspective_2D_Menu();
    create_Castle_Full_perspective_2D_Menu();

    full_Perspective_2D_Menu_ID = glutCreateMenu(makeSubMenu);
    glutAddSubMenu("Entrance", entrance_Full_Perspective_2D_Menu_ID);
    glutAddSubMenu("Hallway", hallway_Full_Perspective_2D_Menu_ID);
    glutAddSubMenu("Courtyard", courtyard_Full_Perspective_2D_Menu_ID);
    glutAddSubMenu("Main Building", main_Building_Full_Perspective_2D_Menu_ID);
    glutAddSubMenu("Delivery Door", delivery_Door_Full_Perspective_2D_Menu_ID);
    glutAddSubMenu("Castle", castle_Full_Perspective_2D_Menu_ID);

}

/**********************************************************************/
void create_Cut_perspective_2D_Menu() {

    create_Entrance_perspective_2D_Menu();
    create_Hallway_perspective_2D_Menu();
    create_Courtyard_perspective_2D_Menu();
    create_Main_Building_perspective_2D_Menu();
    create_Delivery_Door_perspective_2D_Menu();
    create_Castle_perspective_2D_Menu();

    cut_Perspective_2D_Menu_ID = glutCreateMenu(makeSubMenu);
    glutAddSubMenu("Entrance", entrance_Perspective_2D_Menu_ID);
    glutAddSubMenu("Hallway", hallway_Perspective_2D_Menu_ID);
    glutAddSubMenu("Courtyard", courtyard_Perspective_2D_Menu_ID);
    glutAddSubMenu("Main Building", main_Building_Perspective_2D_Menu_ID);
    glutAddSubMenu("Delivery Door", delivery_Door_Perspective_2D_Menu_ID);
    glutAddSubMenu("Castle", castle_Perspective_2D_Menu_ID);

}

/**********************************************************************************************************************/
void create_Irregular_perspective_2D_Menu() {

    create_Cut_perspective_2D_Menu();
    create_Full_perspective_2D_Menu();

    irregular_Perspective_2D_Menu_ID = glutCreateMenu(makeSubMenu);
    glutAddSubMenu("Cut", cut_Perspective_2D_Menu_ID);
    glutAddSubMenu("Full", full_Perspective_2D_Menu_ID);

}

/**********************************************************************/
void create_perspective_2D_Menu() {

	create_Regular_perspective_2D_Menu();

	create_Irregular_perspective_2D_Menu();

	perspective_2D_Menu_ID = glutCreateMenu(makeSubMenu);
	glutAddSubMenu("Regular", regular_Perspective_2D_Menu_ID);
	glutAddSubMenu("Irregular", irregular_Perspective_2D_Menu_ID);

}