/***********************************************************************************************************************
*                                                                                                                      *
*                                                        Menu.h                                                        *
*                                                                                                                      *
*                                 This file is responsible manage and create the menus                                 *
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

void create_Menu() {

    create_perspective_Menu();
    create_Animation_Menu();
    create_Color_Menu();

    glutCreateMenu(quitOption);
    glutAddSubMenu("Color", color_Menu_ID);
    glutAddSubMenu("Animation", animation_Menu_ID);
    glutAddSubMenu("Perspective", perspective_Menu_ID);
    glutAddMenuEntry("Quit", -1);

    // The menu is attached to a mouse button.
    glutAttachMenu(GLUT_RIGHT_BUTTON);

}
