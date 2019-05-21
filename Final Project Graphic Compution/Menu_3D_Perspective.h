#pragma once

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
void create_Entrance_Full_perspective_3D_Menu() {

    entrance_Full_Perspective_3D_Menu_ID = glutCreateMenu(entrance_Full_Perspective_3D_Menu_Options);
    glutAddMenuEntry("Front", 7);
    glutAddMenuEntry("Back", 8);
    glutAddMenuEntry("Left", 9);
    glutAddMenuEntry("Right", 10);
    glutAddMenuEntry("Top", 11);
    glutAddMenuEntry("Bot", 12);

}

/**********************************************************************/
void create_Hallway_Full_perspective_3D_Menu() {

    hallway_Full_Perspective_3D_Menu_ID = glutCreateMenu(hallway_Full_Perspective_3D_Menu_Options);
    glutAddMenuEntry("Front", 13);
    glutAddMenuEntry("Back", 14);
    glutAddMenuEntry("Left", 15);
    glutAddMenuEntry("Right", 16);
    glutAddMenuEntry("Top", 17);
    glutAddMenuEntry("Bot", 18);

}

/**********************************************************************/
void create_Courtyard_Full_perspective_3D_Menu() {

    courtyard_Full_Perspective_3D_Menu_ID = glutCreateMenu(courtyard_Full_Perspective_3D_Menu_Options);
    glutAddMenuEntry("Front", 19);
    glutAddMenuEntry("Back", 20);
    glutAddMenuEntry("Left", 21);
    glutAddMenuEntry("Right", 22);
    glutAddMenuEntry("Top", 23);
    glutAddMenuEntry("Bot", 24);

}

/**********************************************************************/
void create_Main_Building_Full_perspective_3D_Menu() {

    main_Building_Full_Perspective_3D_Menu_ID = glutCreateMenu(Main_Building_Full_Perspective_3D_Menu_Options);
    glutAddMenuEntry("Front", 25);
    glutAddMenuEntry("Back", 26);
    glutAddMenuEntry("Left", 27);
    glutAddMenuEntry("Right", 28);
    glutAddMenuEntry("Top", 29);
    glutAddMenuEntry("Bot", 30);

}

/**********************************************************************/
void create_Delivery_Door_Full_perspective_3D_Menu() {

    delivery_Door_Full_Perspective_3D_Menu_ID = glutCreateMenu(Delivery_Door_Full_Perspective_3D_Menu_Options);
    glutAddMenuEntry("Front", 31);
    glutAddMenuEntry("Back", 32);
    glutAddMenuEntry("Left", 33);
    glutAddMenuEntry("Right", 34);
    glutAddMenuEntry("Top", 35);
    glutAddMenuEntry("Bot", 36);

}

/**********************************************************************/
void create_Castle_Full_perspective_3D_Menu() {

    castle_Full_Perspective_3D_Menu_ID = glutCreateMenu(castle_Full_Perspective_3D_Menu_Options);
    glutAddMenuEntry("Front", 37);
    glutAddMenuEntry("Back", 38);
    glutAddMenuEntry("Left", 39);
    glutAddMenuEntry("Right", 40);
    glutAddMenuEntry("Top", 41);
    glutAddMenuEntry("Bot", 42);

}

                        /**********************************************************************/
void create_Full_perspective_3D_Menu() {

    create_Entrance_Full_perspective_3D_Menu();
    create_Hallway_Full_perspective_3D_Menu();
    create_Courtyard_Full_perspective_3D_Menu();
    create_Main_Building_Full_perspective_3D_Menu();
    create_Delivery_Door_Full_perspective_3D_Menu();
    create_Castle_Full_perspective_3D_Menu();

    full_Perspective_3D_Menu_ID = glutCreateMenu(makeSubMenu);
    glutAddSubMenu("Entrance", entrance_Full_Perspective_3D_Menu_ID);
    glutAddSubMenu("Hallway", hallway_Full_Perspective_3D_Menu_ID);
    glutAddSubMenu("Courtyard", courtyard_Full_Perspective_3D_Menu_ID);
    glutAddSubMenu("Main Building", main_Building_Full_Perspective_3D_Menu_ID);
    glutAddSubMenu("Delivery Door", delivery_Door_Full_Perspective_3D_Menu_ID);
    glutAddSubMenu("Castle", castle_Full_Perspective_3D_Menu_ID);

}

/**********************************************************************/
void create_Cut_perspective_3D_Menu() {

    create_Entrance_perspective_3D_Menu();
    create_Hallway_perspective_3D_Menu();
    create_Courtyard_perspective_3D_Menu();
    create_Main_Building_perspective_3D_Menu();
    create_Delivery_Door_perspective_3D_Menu();
    create_Castle_perspective_3D_Menu();

    cut_Perspective_3D_Menu_ID = glutCreateMenu(makeSubMenu);
    glutAddSubMenu("Entrance", entrance_Perspective_3D_Menu_ID);
    glutAddSubMenu("Hallway", hallway_Perspective_3D_Menu_ID);
    glutAddSubMenu("Courtyard", courtyard_Perspective_3D_Menu_ID);
    glutAddSubMenu("Main Building", main_Building_Perspective_3D_Menu_ID);
    glutAddSubMenu("Delivery Door", delivery_Door_Perspective_3D_Menu_ID);
    glutAddSubMenu("Castle", castle_Perspective_3D_Menu_ID);

}

                        /**********************************************************************/
void create_Irregular_perspective_3D_Menu() {

    create_Cut_perspective_3D_Menu();
    create_Full_perspective_3D_Menu();

	irregular_Perspective_3D_Menu_ID = glutCreateMenu(makeSubMenu);
    glutAddSubMenu("Cut", cut_Perspective_3D_Menu_ID);
    glutAddSubMenu("Full", full_Perspective_3D_Menu_ID);

}

/**********************************************************************/
void create_perspective_3D_Menu() {

	create_Regular_perspective_3D_Menu();

	create_Irregular_perspective_3D_Menu();

	perspective_3D_Menu_ID = glutCreateMenu(makeSubMenu);
	glutAddSubMenu("Regular", regular_Perspective_3D_Menu_ID);
	glutAddSubMenu("Irregular", irregular_Perspective_3D_Menu_ID);

}