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

/***********************************************************************************************************************
*                                                                                                                      *
*                                            Draws the castle walls it self                                            *
*                                                                                                                      *
***********************************************************************************************************************/

//castle front left wall
void draw_Castle_LeftFrontWall(/*values*/) {}
//castle right front wall
void draw_Castle_RightFrontWall(/*values*/) {}
//castle left wall
void draw_Castle_LeftWall(/*values*/) {}
//castle right wall
void draw_Castle_RightWall(/*values*/) {}
//castle back wall
void draw_Castle_BackWall(/*values*/) {}

//castle entrance tower top
void draw_Castle_Entrance_Tower_Top(/*values*/) {}