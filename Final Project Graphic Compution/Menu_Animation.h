#pragma once

void create_Animation_Menu() {

	create_Animation_Menu_Entrance_Doors();
	create_Animation_Menu_Delivery_Doors();
	create_Animation_Menu_Both_Doors();

	animation_Menu_ID = glutCreateMenu(makeSubMenu);
	glutAddSubMenu("Entrance doors", animation_Entrance_Doors_Menu_ID);
	glutAddSubMenu("Delivery doors", animation_Delivery_Doors_Menu_ID);
	glutAddSubMenu("Both doors", animation_Both_Doors_Menu_ID);


}