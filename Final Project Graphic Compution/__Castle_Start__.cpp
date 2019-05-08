/***********************************************************************************************************************
*                                                                                                                      *
*                                                   Castle_Start.cpp                                                   *
*                                                                                                                      *
*                                  This file is responsible to manage the dependencies                                 *
*                                                                                                                      *
************************************************************************************************************************
*                                                                         *                                            *
*                               GROUP MEMBERS:                            *         GROUP MEMBERS' NUMBERS:            *
*                                                                         *                                            *
*                           Bruno Miguel Dias Leal                        *               Nº 21705197                  *
*              Diana Margarida Simões Soares da Silva de Jesus            *               Nº 21703012                  *
*                                                                         *                                            *
***********************************************************************************************************************/

/***********************************************************************************************************************
************************************************************************************************************************
*********************************************Imports necessaries libraries**********************************************
************************************************************************************************************************
***********************************************************************************************************************/

/*
 *
 * In and Out stream library
 * OpenGl library(ies)
 *
 */

#include <iostream>
#ifdef __APPLE__
#  include <OpenGL/glu.h>
#  include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

/***********************************************************************************************************************
************************************************************************************************************************
************************************Declares and initialize the necessaries variables***********************************
************************************************************************************************************************
***********************************************************************************************************************/

/*
 * background color value
 *      red
 *      green
 *      blue
 *      alpha
 * */
double B_RED = 1, B_GREEN = 1, B_BLUE = 1, B_ALPHA = 0;
/*
 * draw color value
 *      red
 *      green
 *      blue
 * */
double D_RED = 0, D_GREEN = 0, D_BLUE = 0;
/*
 * window size
 *      x
 *      y
 * */
double X_WINDOW_SIZE = 950, Y_WINDOW_SIZE = X_WINDOW_SIZE + 30;
/*
 * window position
 *      x
 *      y
 * */
double X_WINDOW_POSITION = 100, Y_WINDOW_POSITION = 20;
/*
 * window minimum value view
 *      x
 *      y
 * */
GLfloat X_MIN_VIEW = 0, Y_MIN_VIEW = 0;
/*
 * window maximum value view
 *      x
 *      y
 * */
GLfloat X_MAX_VIEW = 1000, Y_MAX_VIEW = 1000;
/*
 * window near value view
 * */
GLfloat Z_NEAR_VIEW = -1000;
/*
 * window far value view
 * */
GLfloat Z_FAR_VIEW = 1000;
/*
 * initial position
 *      x
 *      y
 * */
GLfloat X_INITIAL = 100, Y_INITIAL = 300;

//define the PI value
#define PI 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912983367336244065664308602139494639522473719070217986094370277053921717629317675238467481846766940513200056812714526356082778577134275778960917363717872146844090122495343014654958537105079227968925892354201995611212902196086403441815981362977477130996051870721134999999837297804995105973173281609631859502445945534690830264252230825334468503526193118817101000313783875288658753320838142061717766914730359825349042875546873115956286388235378759375195778185778053217122680661300192787661119590921642019893809525720106548586327886593615338182796823030195203530185296899577362259941389124972177528347913151557485724245415069595082953311686172785588907509838175463746493931925506040092770167113900984882401285836160356370766010471018194295559619894676783744944825537977472684710404753464620804668425906949129331367702898915210475216205696602405803815019351125338243003558764024749647326391419927260426992279678235478163600934172164121992458631503028618297455570674983850549458858692699569092721079750930295532116534498720275596023648066549911988183479775356636980742654252786255181841757467289097777279380008164706001614524919217321721477235014144197356854816136115735255213347574184946843852332390739414333454776241686251898356948556209921922218427255025425688767179049460165346680498862723279178608578438382796797668145410095388378636095068006422512520511739298489608412848862694560424196528502221066118630674427862203919494504712371378696095636437191728746776465757396241389086583264599581339047802759009946576407895126946839835259570982582262052248

/***********************************************************************************************************************
************************************************************************************************************************
**********************************************Imports necessaries headers***********************************************
************************************************************************************************************************
***********************************************************************************************************************/

/*
 * includes the headers necessaries to draw the castle and the environment:
 *      "Faces.h"
 *      "Circle.h"
 *      "Figures.h"
 *      "RoofTiles.h"
 *      "Gate.h"
 *      "OldCastle_Walls.h"
 *      "HallWay.h"
 *      "Stores.h"
 *      "CastleRoads.h"
 *      "DeliverRoad.h"
 *      "Gargoyles.h"
 *      "ArcBridge_Ruined.h"
 *      "ArcBridge.h"
 *      "RightTower.h"
 *      "MiddleTower.h"
 *      "LeftTower_Ruined.h"
 *      "LeftTower.h"
 *      "RockBlocks.h"
 *      "Draw.h"
 *      "KeyInput.h"
 *      "Resize.h"
 *      DrawScene.h"
 *      "SetUp.h"
 *      "Main.h"
 *      
 * */

#include "Faces.h"
#include "Circle.h"
#include "Figures.h"
#include "RoofTiles.h"
#include "Gate.h"
#include "OldCastle_Walls.h"
#include "HallWay.h"
#include "Stores.h"
#include "CastleRoads.h"
#include "DeliverRoad.h"
#include "Gargoyles.h"
#include "ArcBridge_Ruined.h"
#include "ArcBridge.h"
#include "RightTower.h"
#include "MiddleTower.h"
#include "LeftTower_Ruined.h"
#include "LeftTower.h"
#include "RockBlocks.h"
#include "Draw.h"
#include "KeyInput.h"
#include "Resize.h"
#include "DrawScene.h"
#include "SetUp.h"
#include "Main.h"

/*
 * TODO: try to merge headers functions (especially in the towers) -> create a directory in the solution (not in the folder) called common in side the tower directory
 *
 * TODO: make a pyramidal figure
 *
 * TODO: create a private functions to prevent double code
 *
 * TODO: set the height of the right tower
 *
 * TODO: try to make the right tower rising
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