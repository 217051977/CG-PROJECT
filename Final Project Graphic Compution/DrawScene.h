/***********************************************************************************************************************
*                                                                                                                      *
*                                                      DrawScene.h                                                     *
*                                                                                                                      *
*                                      This file is responsible draw all drawings                                      *
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

// Drawing routine.
void drawScene(void) {

    //set the screen to the background color
    glClear(GL_COLOR_BUFFER_BIT);

    //set the next draw color
    // RBG (Red Blue Green) -> (0-1, 0-1, 0-1)
    glColor3f(D_RED, D_GREEN, D_BLUE);

    //call the function with the original point position value
/***********************************************************************************************************************
*                                                                                                                      *
*                  IMPORTANT: because the z component is always 0, this function does not receives it                  *
*                                                                                                                      *
***********************************************************************************************************************/
    draw_RockBlock();

    /**********************************************************************/
    draw_LeftTower();

    /**********************************************************************/
    draw_LeftTower_Ruined();

    /**********************************************************************/
    draw_MiddleTower();

    /**********************************************************************/
    draw_RightTower();

    /**********************************************************************/
    draw_ArcBridge();

    /**********************************************************************/
    draw_MiddleTowers_connection();

    /**********************************************************************/
    draw_Gate_Entrance();

    /**********************************************************************/
    draw_EntranceGargoyles();

    /**********************************************************************/
    draw_Delivery();

    /**********************************************************************/
    draw_Castle_Walls();

    /**********************************************************************/
    draw_Castle_Roads();

    /**********************************************************************/
    draw_Castle_Hallway();

    /**********************************************************************/
    draw_Castle_Courtyard();

    /**********************************************************************/
    draw_Castle_OldTower();

    /**********************************************************************/
    draw_Castle_Buildings();

    //send the scene to be rendered
    glutSwapBuffers();

}