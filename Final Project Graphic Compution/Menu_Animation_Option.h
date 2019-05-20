#pragma once

void doors_Menu_Options(int optionID) {

	switch (optionID) {

		//      Entrance
		//      Open doors
	case 0: {

		if (entranceDoors_AreOpening == 0) {

			entranceDoors_AreOpening = 1;

			glutTimerFunc(100, open_The_Entrance_Doors, 1);

			printf(" *                          Animation started - Entrance doors are opening                         *\n");

			printf(" *                                                                                                 * \n");

		}

		visualization_Manager();

		glutPostRedisplay();

	}break;

		//      Close doors
	case 1: {

		if (entranceDoors_AreOpening == 1) {

			entranceDoors_AreOpening = 0;

			glutTimerFunc(100, close_The_Entrance_Doors, 1);

			printf(" *                          Animation started - Entrance doors are closing                         *\n");

			printf(" *                                                                                                 * \n");

		}

		visualization_Manager();

		glutPostRedisplay();

	}break;

		//      Delivery
		//      Open doors
	case 2: {

		if (deliveryDoors_AreOpening == 0) {

			deliveryDoors_AreOpening = 1;

			glutTimerFunc(100, open_The_Delivery_Doors, 1);

			printf(" *                          Animation started - Delivery doors are opening                         *\n");

			printf(" *                                                                                                 * \n");

		}

		visualization_Manager();

		glutPostRedisplay();

	}break;

		//      Close doors
	case 3: {

		if (deliveryDoors_AreOpening == 1) {

			deliveryDoors_AreOpening = 0;

			glutTimerFunc(100, close_The_Delivery_Doors, 1);

			printf(" *                          Animation started - Delivery doors are closing                         *\n");

			printf(" *                                                                                                 * \n");

		}

		visualization_Manager();

		glutPostRedisplay();

	}break;

		//      Both
		//      Open doors
	case 4: {

		if (deliveryDoors_AreOpening == 0) {

			if (entranceDoors_AreOpening == 0) {

				entranceDoors_AreOpening = 1;
				deliveryDoors_AreOpening = 1;

				glutTimerFunc(100, open_The_Doors, 1);

				printf(" *                            Animation started - Both doors are opening                           *\n");

				printf(" *                                                                                                 * \n");

			}
			else {

				deliveryDoors_AreOpening = 1;

				glutTimerFunc(100, open_The_Delivery_Doors, 1);

				printf(" *                          Animation started - Delivery doors are opening                         *\n");

				printf(" *                                                                                                 * \n");

			}

		}
		else {

			if (entranceDoors_AreOpening == 0) {

				entranceDoors_AreOpening = 1;

				glutTimerFunc(100, open_The_Entrance_Doors, 1);

				printf(" *                          Animation started - Entrance doors are opening                         *\n");

				printf(" *                                                                                                 * \n");

			}

		}

		visualization_Manager();

		glutPostRedisplay();

	}break;

		//      Close doors
	case 5: {

		if (deliveryDoors_AreOpening == 1) {

			if (entranceDoors_AreOpening == 1) {

				entranceDoors_AreOpening = 0;
				deliveryDoors_AreOpening = 0;

				glutTimerFunc(100, close_The_Doors, 1);

				printf(" *                            Animation started - Both doors are opening                           *\n");

				printf(" *                                                                                                 * \n");

			}
			else {

				deliveryDoors_AreOpening = 0;

				glutTimerFunc(100, close_The_Delivery_Doors, 1);

				printf(" *                          Animation started - Delivery doors are opening                         *\n");

				printf(" *                                                                                                 * \n");

			}

		}
		else {

			if (entranceDoors_AreOpening == 1) {

				entranceDoors_AreOpening = 0;

				glutTimerFunc(100, close_The_Entrance_Doors, 1);

				printf(" *                          Animation started - Entrance doors are opening                         *\n");

				printf(" *                                                                                                 * \n");

			}

		}

		visualization_Manager();

		glutPostRedisplay();

	}break;

	default: {

		printf("There's no %d as optionID\n", optionID);

	}

	}

}