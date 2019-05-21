/***********************************************************************************************************************
*                                                                                                                      *
*                                                       Resize.h                                                       *
*                                                                                                                      *
*                                  This file is responsible manage the view settings                                   *
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

void close_The_Entrance_Doors(int someValue) {

    entrance_Door_Angle -= 0.5;

    glutPostRedisplay();

    if(entrance_Door_Angle > 0 && entranceDoors_AreOpening == 0) {

        glutTimerFunc(100, close_The_Entrance_Doors, 1);

    }

}
