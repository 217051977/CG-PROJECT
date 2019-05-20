#pragma once

void create_Animation_Menu_Entrance_Doors() {

	animation_Entrance_Doors_Menu_ID = glutCreateMenu(doors_Menu_Options);
	glutAddMenuEntry("Open doors", 0);
	glutAddMenuEntry("Close doors", 1);


}