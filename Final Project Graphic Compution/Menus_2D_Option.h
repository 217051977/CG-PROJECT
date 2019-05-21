#pragma once

void regular_Perspective_2D_Menu_Options(int optionID) {

	switch (optionID) {

	case 0: {}
	case -1: {}
	case -2: {}
	case -3: {}
	case -4: {}
	case -5: {

		changeViewAndScene(0, optionID);

		visualization_Manager();

		glutPostRedisplay();

	}break;

	default: {

		printf("There's no %d as optionID\n", optionID);

	}

	}

}

/**********************************************************************************************************************/
void entrance_Perspective_2D_Menu_Options(int optionID) {

	switch (optionID) {

	case -6: {}
	case -7: {}
	case -8: {}
	case -9: {}
	case -10: {}
	case -11: {

		changeViewAndScene(1, optionID);

		visualization_Manager();

		glutPostRedisplay();

	}break;

	default: {

		printf("There's no %d as optionID\n", optionID);

	}

	}

}

void hallway_Perspective_2D_Menu_Options(int optionID) {

	switch (optionID) {

	case -12: {}
	case -13: {}
	case -14: {}
	case -15: {}
	case -16: {}
	case -17: {

		changeViewAndScene(2, optionID);

		visualization_Manager();

		glutPostRedisplay();

	}break;

	default: {

		printf("There's no %d as optionID\n", optionID);

	}

	}

}

void courtyard_Perspective_2D_Menu_Options(int optionID) {

	switch (optionID) {

	case -18: {}
	case -19: {}
	case -20: {}
	case -21: {}
	case -22: {}
	case -23: {

		changeViewAndScene(3, optionID);

		visualization_Manager();

		glutPostRedisplay();

	}break;

	default: {

		printf("There's no %d as optionID\n", optionID);

	}

	}

}

void Main_Building_Perspective_2D_Menu_Options(int optionID) {

	switch (optionID) {

	case -24: {}
	case -25: {}
	case -26: {}
	case -27: {}
	case -28: {}
	case -29: {

		changeViewAndScene(4, optionID);

		visualization_Manager();

		glutPostRedisplay();

	}break;

	default: {

		printf("There's no %d as optionID\n", optionID);

	}

	}

}

void Delivery_Door_Perspective_2D_Menu_Options(int optionID) {

	switch (optionID) {

	case -30: {}
	case -31: {}
	case -32: {}
	case -33: {}
	case -34: {}
	case -35: {

		changeViewAndScene(5, optionID);

		visualization_Manager();

		glutPostRedisplay();

	}break;

	default: {

		printf("There's no %d as optionID\n", optionID);

	}

	}

}

void castle_Perspective_2D_Menu_Options(int optionID) {

	switch (optionID) {

	case -36: {}
	case -37: {}
	case -38: {}
	case -39: {}
	case -40: {}
	case -41: {

		changeViewAndScene(6, optionID);

		visualization_Manager();

		glutPostRedisplay();

	}break;

	default: {

		printf("There's no %d as optionID\n", optionID);

	}

	}

}

/**********************************************************************************************************************/
void entrance_Full_Perspective_2D_Menu_Options(int optionID) {

    switch (optionID) {

        case -6: {}
        case -7: {}
        case -8: {}
        case -9: {}
        case -10: {}
        case -11: {

            changeView(optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

void hallway_Full_Perspective_2D_Menu_Options(int optionID) {

    switch (optionID) {

        case -12: {}
        case -13: {}
        case -14: {}
        case -15: {}
        case -16: {}
        case -17: {

            changeView(optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

void courtyard_Full_Perspective_2D_Menu_Options(int optionID) {

    switch (optionID) {

        case -18: {}
        case -19: {}
        case -20: {}
        case -21: {}
        case -22: {}
        case -23: {

            changeView(optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

void Main_Building_Full_Perspective_2D_Menu_Options(int optionID) {

    switch (optionID) {

        case -24: {}
        case -25: {}
        case -26: {}
        case -27: {}
        case -28: {}
        case -29: {

            changeView(optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

void Delivery_Door_Full_Perspective_2D_Menu_Options(int optionID) {

    switch (optionID) {

        case -30: {}
        case -31: {}
        case -32: {}
        case -33: {}
        case -34: {}
        case -35: {

            changeView(optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

void castle_Full_Perspective_2D_Menu_Options(int optionID) {

    switch (optionID) {

        case -36: {}
        case -37: {}
        case -38: {}
        case -39: {}
        case -40: {}
        case -41: {

            changeView(optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}