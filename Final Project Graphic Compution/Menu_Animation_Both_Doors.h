#pragma once

void create_Animation_Menu_Both_Doors() {

	animation_Both_Doors_Menu_ID = glutCreateMenu(doors_Menu_Options);
	glutAddMenuEntry("Open doors", 4);
	glutAddMenuEntry("Close doors", 5);


}