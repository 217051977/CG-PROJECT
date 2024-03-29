/***********************************************************************************************************************
*                                                                                                                      *
*                                                      KeyInput.h                                                      *
*                                                                                                                      *
*                                  This file is responsible manage the keyboard input                                  *
*                                                                                                                      *
************************************************************************************************************************
*                                                                         *                                            *
*                               GROUP MEMBERS:                            *         GROUP MEMBERS' NUMBERS:            *
*                                                                         *                                            *
*                           Bruno Miguel Dias Leal                        *               Nº 21705197                  *
*              Diana Margarida Simões Soares da Silva de Jesus            *               Nº 21703012                  *
*                                                                         *                                            *
***********************************************************************************************************************/

//makes the program where this header will be used add it just one time this header to it
#pragma once

//keyboard input function
void keyInput(unsigned char key, int x, int y) {

    switch (key) {

        // if the key 27 (escape) has been pressed, the program ends
        case 27: {

            exit(0);

        } break;

        case ' ': {

            if(entranceDoors_AreOpening == 0) {

                if(deliveryDoors_AreOpening == 0) {

                    entranceDoors_AreOpening = 1;
                    deliveryDoors_AreOpening = 1;

                    glutTimerFunc(100, open_The_Doors, 1);

                    printf(" *                            Animation started - Both doors are opening                           *\n");

                    printf(" *                                                                                                 * \n");

                } else {

                    deliveryDoors_AreOpening = 0;

                    glutTimerFunc(100, close_The_Delivery_Doors, 1);

                    printf(" *                          Animation started - Delivery doors are closing                         *\n");

                    printf(" *                                                                                                 * \n");

                }

            } else {

                if(deliveryDoors_AreOpening == 1) {

                    entranceDoors_AreOpening = 0;
                    deliveryDoors_AreOpening = 0;

                    glutTimerFunc(100, close_The_Doors, 1);

                    printf(" *                            Animation started - Both doors are opening                           *\n");

                    printf(" *                                                                                                 * \n");

                } else {

                    entranceDoors_AreOpening = 0;

                    glutTimerFunc(100, close_The_Entrance_Doors, 1);

                    printf(" *                          Animation started - Entrance doors are closing                         *\n");

                    printf(" *                                                                                                 * \n");

                }

            }

            visualization_Manager();

        } break;

        case 'E': {}
        case 'e': {

            if(entranceDoors_AreOpening == 0) {

                entranceDoors_AreOpening = 1;

                if (deliveryDoors_AreOpening == 0 && delivery_Door_Angle > 0) {

                    glutTimerFunc(100, open_The_Entrance_Doors_And_Close_The_Delivery_Doors, 1);

                    printf(" *                          Animation started - Delivery doors are closing                         *\n");

                    printf(" *                          Animation started - Entrance doors are opening                         *\n");

                } else if (deliveryDoors_AreOpening == 1 && delivery_Door_Angle < 60) {

                    glutTimerFunc(100, open_The_Doors, 1);

                    printf(" *                            Animation started - Both doors are opening                           *\n");

                } else {

                    glutTimerFunc(100, open_The_Entrance_Doors, 1);

                    printf(" *                          Animation started - Entrance doors are opening                         *\n");

                }

                printf(" *                                                                                                 * \n");

            } else {

                entranceDoors_AreOpening = 0;

                if (deliveryDoors_AreOpening == 1 && delivery_Door_Angle < 60) {

                    glutTimerFunc(100, open_The_Delivery_Doors_And_Close_The_Entrance_Doors, 1);

                    printf(" *                          Animation started - Delivery doors are opening                         *\n");

                } else if (deliveryDoors_AreOpening == 0 && delivery_Door_Angle > 0) {

                    glutTimerFunc(100, close_The_Doors, 1);

                    printf(" *                          Animation started - Entrance doors are closing                         *\n");

                } else {

                    glutTimerFunc(100, close_The_Entrance_Doors, 1);

                }

                printf(" *                          Animation started - Entrance doors are closing                         *\n");

                printf(" *                                                                                                 * \n");

            }

            visualization_Manager();

        } break;

        case 'D': {}
        case 'd': {

            if(deliveryDoors_AreOpening == 0) {

                deliveryDoors_AreOpening = 1;

                if (entranceDoors_AreOpening == 0 && entrance_Door_Angle > 0) {

                    glutTimerFunc(100, open_The_Delivery_Doors_And_Close_The_Entrance_Doors, 1);

                    printf(" *                          Animation started - Entrance doors are closing                         *\n");

                } else if (entranceDoors_AreOpening == 1 && entrance_Door_Angle < 60) {

                    glutTimerFunc(100, open_The_Doors, 1);

                    printf(" *                            Animation started - Both doors are opening                           *\n");

                } else {

                    glutTimerFunc(100, open_The_Delivery_Doors, 1);

                }

                printf(" *                          Animation started - Delivery doors are opening                         *\n");

                printf(" *                                                                                                 * \n");

            } else {

                deliveryDoors_AreOpening = 0;

                if (entranceDoors_AreOpening == 1 && entrance_Door_Angle < 60) {

                    glutTimerFunc(100, open_The_Entrance_Doors_And_Close_The_Delivery_Doors, 1);

                    printf(" *                          Animation started - Entrance doors are opening                         *\n");

                } else if (entranceDoors_AreOpening == 0 && entrance_Door_Angle > 0) {

                    glutTimerFunc(100, close_The_Doors, 1);

                    printf(" *                          Animation started - Entrance doors are closing                         *\n");

                } else {

                    glutTimerFunc(100, close_The_Delivery_Doors, 1);

                }

                printf(" *                          Animation started - Delivery doors are closing                         *\n");

                printf(" *                                                                                                 * \n");

            }

            visualization_Manager();

        } break;

    }

}

void specialKeyInput(int key, int x, int y)
{
	if (key == GLUT_KEY_DOWN)
	{
		if (d > 0.0) d -= 0.05;
	}
	if (key == GLUT_KEY_UP)
	{
		if (d < 1.0) d += 0.05;
	}
	if (key == GLUT_KEY_RIGHT)
	{
		if (theta > 0.0) theta -= 1.0;
	}
	if (key == GLUT_KEY_LEFT)
	{
		if (theta < 180.0) theta += 1.0;
	}
	glutPostRedisplay();
}