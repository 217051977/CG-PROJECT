#pragma once

void create_perspective_Menu() {

	create_perspective_2D_Menu();
	create_perspective_3D_Menu();

	perspective_Menu_ID = glutCreateMenu(makeSubMenu);
	glutAddSubMenu("2D", perspective_2D_Menu_ID);
	glutAddSubMenu("3D", perspective_3D_Menu_ID);

}