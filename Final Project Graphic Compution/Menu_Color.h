#pragma once

void create_Color_Menu() {

	color_Menu_ID = glutCreateMenu(color_Menu_Options);
	glutAddMenuEntry("Black and white", 0);
	glutAddMenuEntry("White and black", 1);


}