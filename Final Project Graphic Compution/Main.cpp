/***********************************************************************************************************************
*                                                                                                                      *
*                                                       Main.cpp                                                       *
*                                                                                                                      *
*                                        This program draws an medieval castle                                         *
*                                                                                                                      *
************************************************************************************************************************
*                                                                         *                                            *
*                               GROUP MEMBERS:                            *         GROUP MEMBERS' NUMBERS:            *
*                                                                         *                                            *
*                           Bruno Miguel Dias Leal                        *               Nº 21705197                  *
*              Diana Margarida Simões Soares da Silva de Jesus            *               Nº 21703012                  *
*                                                                         *                                            *
***********************************************************************************************************************/


//Check which type of machine the code is working in and include/import the necessary library(s)
#include <iostream>
#ifdef __APPLE__
#  include <OpenGL/glu.h>
#  include <GLUT/glut.h>
#else
#  include <GL/glut.h>
#endif

/*
 * includes the headers necessaries to draw the castle and the environment:
 *      "Faces.h"
 *      "Circle.h"
 *      "Figures.h"
 *      "RockBlocks.h"
 *      
 * */
#include "Faces.h"
#include "Circle.h"
#include "Figures.h"
#include "RockBlocks.h"
#include "LeftTower.h"
#include "LeftTower_Ruined.h"
#include "MiddleTower.h"
#include "RightTower.h"
#include "ArcBridge.h"
#include "ArcBridge_Ruined.h"
#include "MiddleTowersConnection.h"
#include "Gate.h"
#include "Gargoyles.h"
#include "DeliverRoad.h"
#include "CastleRoads.h"
#include "Stores.h"
#include "CastleWalls.h"
#include "HallWay.h"
#include "OldCastle_Walls.h"
#include "RoofTiles.h"
#include "Draw.h"
#include "DrawScene.h"
#include "SetUp.h"
#include "Resize.h"
#include "KeyInput.h"

/*
 * window size
 *      x
 *      y
 * */
double X_WINDOW_SIZE = 800, Y_WINDOW_SIZE = 800;
/*
 * window position
 *      x
 *      y
 * */
double X_WINDOW_POSITION = 100, Y_WINDOW_POSITION = 20;


/***********************************************************************************************************************
*                                                                                                                      *
*                                               noun direct draw function                                              *
*                                                                                                                      *
***********************************************************************************************************************/

// starts the program
int main(int argc, char **argv) {

	//initialize the glut
	glutInit(&argc, argv);
	//set the display mode
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	//set the size of the OpenGL window that it will be open
	glutInitWindowSize(X_WINDOW_SIZE, Y_WINDOW_SIZE);
	//sets the position of the window based on the top left corner
	glutInitWindowPosition(X_WINDOW_POSITION, Y_WINDOW_POSITION);
	//create the OpenGL window has been set up with the name
	glutCreateWindow("Castle.cpp");
	//call the function
	setup();
	//set the function which will get the Scene from
	glutDisplayFunc(drawScene);
	//set the function that is responsible to reshape the window
	glutReshapeFunc(resize);
	//set the function that it will receive from the keyboard
	glutKeyboardFunc(keyInput);
	//starts rendering the Scene
	glutMainLoop();

	//returns 0 when ended
	return 0;

}

/*
 * TODO: change the crown spikes to obey to this rule -> 5 unities spike, 5 unities non spike
 *
 * TODO: make the towers body and the base of the crown it self
 *
 * TODO: make the middle tower connection (building)
 *
 * TODO: make the ark bridges
 *
 * TODO: all the effects of the gates
 *
 * TODO: make the broken tower stairs
 *
 * TODO: make the all the effects of the banners
 *
 * TODO: make the flags
 *
 * TODO: make the ground more deep
 *
 * TODO: try to make the gargoyles
 *
 * TODO: try to make the inclination on the ground
 *
 * TODO: try to make the right tower circular
 * */