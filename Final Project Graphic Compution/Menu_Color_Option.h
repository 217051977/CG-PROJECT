#pragma once

void color_Menu_Options(int optionID) {

	switch (optionID) {

		//      Black and white
	case 0: {

		//          background -> black
		B_RED = 0;
		B_GREEN = 0;
		B_BLUE = 0;
		//          draw line -> white
		D_RED = 1;
		D_GREEN = 1;
		D_BLUE = 1;

		//call the function
		setup();

		visualization_Manager();

		glutPostRedisplay();

	}break;

		//      White and black
	case 1: {

		//          background -> black
		B_RED = 1;
		B_GREEN = 1;
		B_BLUE = 1;
		//          draw line -> white
		D_RED = 0;
		D_GREEN = 0;
		D_BLUE = 0;

		//call the function
		setup();

		visualization_Manager();

		glutPostRedisplay();

	}break;

	default: {

		printf("There's no %d as optionID\n", optionID);

	}

	}

}