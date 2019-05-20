#pragma once

void create_Animation_Menu_Delivery_Doors() {

	animation_Delivery_Doors_Menu_ID = glutCreateMenu(doors_Menu_Options);
	glutAddMenuEntry("Open doors", 2);
	glutAddMenuEntry("Close doors", 3);


}