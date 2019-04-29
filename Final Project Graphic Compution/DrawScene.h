//makes the program where this header will be used add it just one time this header to it
#pragma once

//Check which type of machine the code is working in and include/import the necessary library(s)
#include <iostream>
#ifdef __APPLE__
#  include <OpenGL/glu.h>
#  include <GLUT/glut.h>
#else
#  include <GL/glut.h>
#endif

/*
 * draw color value
 *      red
 *      green
 *      blue
 * */
double D_RED = 0, D_GREEN = 0, D_BLUE = 0;

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
    glFlush();

}