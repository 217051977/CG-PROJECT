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

                glutTimerFunc(100, open_The_Entrance_Doors, 1);

                printf(" *                          Animation started - Entrance doors are opening                         *\n");

                printf(" *                                                                                                 * \n");

            } else {

                entranceDoors_AreOpening = 0;

                glutTimerFunc(100, close_The_Entrance_Doors, 1);

                printf(" *                          Animation started - Entrance doors are closing                         *\n");

                printf(" *                                                                                                 * \n");

            }

            visualization_Manager();

        } break;

        case 'D': {}
        case 'd': {

            if(deliveryDoors_AreOpening == 0) {

                deliveryDoors_AreOpening = 1;

                glutTimerFunc(100, open_The_Delivery_Doors, 1);

                printf(" *                          Animation started - Delivery doors are opening                         *\n");

                printf(" *                                                                                                 * \n");

            } else {

                deliveryDoors_AreOpening = 0;

                glutTimerFunc(100, close_The_Delivery_Doors, 1);

                printf(" *                          Animation started - Delivery doors are closing                         *\n");

                printf(" *                                                                                                 * \n");

            }

            visualization_Manager();

        } break;

    }

}