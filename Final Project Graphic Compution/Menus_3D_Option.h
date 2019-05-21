#pragma once

void regular_Perspective_3D_Menu_Options(int optionID) {

	switch (optionID) {

	case 1: {}
	case 2: {}
	case 3: {}
	case 4: {}
	case 5: {}
	case 6: {

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
void entrance_Perspective_3D_Menu_Options(int optionID) {

	switch (optionID) {

	case 7: {}
	case 8: {}
	case 9: {}
	case 10: {}
	case 11: {}
	case 12: {

		changeViewAndScene(1, optionID);

		visualization_Manager();

		glutPostRedisplay();

	}break;

	default: {

		printf("There's no %d as optionID\n", optionID);

	}

	}

}

void hallway_Perspective_3D_Menu_Options(int optionID) {

	switch (optionID) {

	case 13: {}
	case 14: {}
	case 15: {}
	case 16: {}
	case 17: {}
	case 18: {

		changeViewAndScene(2, optionID);

		visualization_Manager();

		glutPostRedisplay();

	}break;

	default: {

		printf("There's no %d as optionID\n", optionID);

	}

	}

}

void courtyard_Perspective_3D_Menu_Options(int optionID) {

	switch (optionID) {

	case 19: {}
	case 20: {}
	case 21: {}
	case 22: {}
	case 23: {}
	case 24: {

		changeViewAndScene(3, optionID);

		visualization_Manager();

		glutPostRedisplay();

	}break;

	default: {

		printf("There's no %d as optionID\n", optionID);

	}

	}

}

void Main_Building_Perspective_3D_Menu_Options(int optionID) {

	switch (optionID) {

	case 25: {}
	case 26: {}
	case 27: {}
	case 28: {}
	case 29: {}
	case 30: {

		changeViewAndScene(4, optionID);

		visualization_Manager();

		glutPostRedisplay();

	}break;

	default: {

		printf("There's no %d as optionID\n", optionID);

	}

	}

}

void Delivery_Door_Perspective_3D_Menu_Options(int optionID) {

	switch (optionID) {

	case 31: {}
	case 32: {}
	case 33: {}
	case 34: {}
	case 35: {}
	case 36: {

		changeViewAndScene(5, optionID);

		visualization_Manager();

		glutPostRedisplay();

	}break;

	default: {

		printf("There's no %d as optionID\n", optionID);

	}

	}

}

void castle_Perspective_3D_Menu_Options(int optionID) {

	switch (optionID) {

	case 37: {}
	case 38: {}
	case 39: {}
	case 40: {}
	case 41: {}
	case 42: {

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
void entrance_Full_Perspective_3D_Menu_Options(int optionID) {

    switch (optionID) {

        case 7: {}
        case 8: {}
        case 9: {}
        case 10: {}
        case 11: {}
        case 12: {

            changeView(optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

void hallway_Full_Perspective_3D_Menu_Options(int optionID) {

    switch (optionID) {

        case 13: {}
        case 14: {}
        case 15: {}
        case 16: {}
        case 17: {}
        case 18: {

            changeView(optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

void courtyard_Full_Perspective_3D_Menu_Options(int optionID) {

    switch (optionID) {

        case 19: {}
        case 20: {}
        case 21: {}
        case 22: {}
        case 23: {}
        case 24: {

            changeView(optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

void Main_Building_Full_Perspective_3D_Menu_Options(int optionID) {

    switch (optionID) {

        case 25: {}
        case 26: {}
        case 27: {}
        case 28: {}
        case 29: {}
        case 30: {

            changeView(optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

void Delivery_Door_Full_Perspective_3D_Menu_Options(int optionID) {

    switch (optionID) {

        case 31: {}
        case 32: {}
        case 33: {}
        case 34: {}
        case 35: {}
        case 36: {

            changeView(optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}

void castle_Full_Perspective_3D_Menu_Options(int optionID) {

    switch (optionID) {

        case 37: {}
        case 38: {}
        case 39: {}
        case 40: {}
        case 41: {}
        case 42: {

            changeView(optionID);

            visualization_Manager();

            glutPostRedisplay();

        }break;

        default: {

            printf("There's no %d as optionID\n", optionID);

        }

    }

}