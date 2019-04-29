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

#include "Circle.h"

/***********************************************************************************************************************
*                                                                                                                      *
*                                             Draws the rock block it self                                             *
*                                                                                                                      *
***********************************************************************************************************************/

//left
void draw_Left_RockBlock() {

//  sets the beginning with only the lines that surrounds it
    glBegin(GL_LINE_LOOP);

    /*
     * set a vertex on the position (-25, 35, 0)
     * set a vertex on the position (-32.5, 25, 0)
     * set a vertex on the position (-35, 15, 0)
     * set a vertex on the position (-37.5, 10, 0)
     * set a vertex on the position (-40, 5, 0)
     * set a vertex on the position (-37.5, 0, 0)
     * set a vertex on the position (-35, -20, 0)
     * set a vertex on the position (-30, -28, 0)
     * set a vertex on the position (-20, -35, 0)
     * set a vertex on the position (-14, -39, 0)
     * set a vertex on the position (-12, -39.75, 0)
     * set a vertex on the position (-10, -39.5, 0)
     * set a vertex on the position (-8, -39.75, 0)
     * set a vertex on the position (-6, -40, 0)
     * call the function draw_Circle()
     * */
    glVertex3f(-25, 35, 0);
    glVertex3f(-32.5, 25, 0);
    glVertex3f(-35, 15, 0);
    glVertex3f(-37.5, 10, 0);
    glVertex3f(-40, 5, 0);
    glVertex3f(-37.5, 0, 0);
    glVertex3f(-35, -20, 0);
    glVertex3f(-30, -28, 0);
    glVertex3f(-20, -35, 0);
    glVertex3f(-14, -39, 0);
    glVertex3f(-12, -39.75, 0);
    glVertex3f(-10, -39.5, 0);
    glVertex3f(-8, -39.75, 0);
    glVertex3f(-6, -40, 0);
    draw_Circle(-(PI) / 2, PI / 2, 40, 40, 0);

//	sets the ending of the draw connecting the first vertex draw with the last
    glEnd();

}

//left__middle connection
void draw_LeftMiddle_RockBlock_Connection() {

//  sets the beginning with only the lines that surrounds it
    glBegin(GL_LINE_LOOP);

    /*
     * set a vertex on the position (50, 15, 0)
     * set a vertex on the position (70, 20, 0)
     * set a vertex on the position (90, 30, 0)
     * set a vertex on the position (100, 40, 0)
     * set a vertex on the position (130, 37.5, 0)
     * set a vertex on the position (140, 30, 0)
     * set a vertex on the position (157, 40, 0)
     * set a vertex on the position (155, 38, 0)
     * set a vertex on the position (150, 28, 0)
     * set a vertex on the position (145, 18, 0)
     * set a vertex on the position (135, -22, 0)
     * set a vertex on the position (137, -25, 0)
     * set a vertex on the position (130, -25, 0)
     * set a vertex on the position (110, -20, 0)
     * set a vertex on the position (100, -25, 0)
     * set a vertex on the position (90, -35, 0)
     * set a vertex on the position (77.5, -30, 0)
     * set a vertex on the position (70, -20, 0)
     * call the function draw_Circle()
     * */
    glVertex3f(50, 15, 0);
    glVertex3f(70, 20, 0);
    glVertex3f(90, 30, 0);
    glVertex3f(100, 40, 0);
    glVertex3f(130, 37.5, 0);
    glVertex3f(140, 30, 0);
    glVertex3f(157, 40, 0);
    glVertex3f(155, 38, 0);
    glVertex3f(150, 28, 0);
    glVertex3f(145, 18, 0);
    glVertex3f(135, -22, 0);
    glVertex3f(137, -25, 0);
    glVertex3f(130, -25, 0);
    glVertex3f(110, -20, 0);
    glVertex3f(100, -25, 0);
    glVertex3f(90, -35, 0);
    glVertex3f(77.5, -30, 0);
    glVertex3f(70, -20, 0);
    glVertex3f(50, -25, 0);
    draw_Circle(-PI / 3, (5 * PI) / 24, 40, 40, 0);

//	sets the ending of the draw connecting the first vertex draw with the last
    glEnd();

}

//middle rock block
void draw_Middle_RockBlock() {

//  sets the beginning with only the lines that surrounds it
    glBegin(GL_LINE_LOOP);

    /*
     * set a vertex on the position (60, 0, 0)
     * set a vertex on the position (55, 0, 0)
     * set a vertex on the position (30, 10, 0)
     * set a vertex on the position (20, 40, 0)
     * set a vertex on the position (2, 50, 0)
     * set a vertex on the position (-5, 70, 0)
     * set a vertex on the position (5, 110, 0)
     * set a vertex on the position (10, 120, 0)
     * set a vertex on the position (15, 130, 0)
     * set a vertex on the position (25, 140, 0)
     * set a vertex on the position (65, 150, 0)
     * set a vertex on the position (65, 140, 0)
     * set a vertex on the position (105, 140, 0)
     * set a vertex on the position (130, 145, 0)
     * set a vertex on the position (140, 140, 0)
     * set a vertex on the position (170, 130, 0)
     * set a vertex on the position (175, 125, 0)
     * set a vertex on the position (180, 115, 0)
     * set a vertex on the position (190, 100, 0)
     * set a vertex on the position (180, 70, 0)
     * set a vertex on the position (175, 60, 0)
     * set a vertex on the position (160, 40, 0)
     * set a vertex on the position (155, 30, 0)
     * set a vertex on the position (150, 15, 0)
     * */
    glVertex3f(60, 0, 0);
    glVertex3f(55, 0, 0);
    glVertex3f(30, 10, 0);
    glVertex3f(20, 40, 0);
    glVertex3f(2, 50, 0);
    glVertex3f(-5, 70, 0);
    glVertex3f(5, 110, 0);
    glVertex3f(10, 120, 0);
    glVertex3f(15, 130, 0);
    glVertex3f(25, 140, 0);
    glVertex3f(65, 150, 0);
    glVertex3f(65, 140, 0);
    glVertex3f(105, 140, 0);
    glVertex3f(130, 145, 0);
    glVertex3f(140, 140, 0);
    glVertex3f(170, 130, 0);
    glVertex3f(175, 125, 0);
    glVertex3f(180, 115, 0);
    glVertex3f(190, 100, 0);
    glVertex3f(180, 70, 0);
    glVertex3f(175, 60, 0);
    glVertex3f(160, 40, 0);
    glVertex3f(155, 30, 0);
    glVertex3f(150, 15, 0);
    glVertex3f(140, 0, 0);

//	sets the ending of the draw connecting the first vertex draw with the last
    glEnd();

}

//right__middle connection
void draw_RightMiddle_RockBlock_Connection() {

//  sets the beginning with only the lines that surrounds it
    glBegin(GL_LINE_LOOP);

    /*
     * set a vertex on the position (0, 0, 0)
     * set a vertex on the position (10, -12.5, 0)
     * set a vertex on the position (20, -8, 0)
     * set a vertex on the position (25, -5, 0)
     * set a vertex on the position (20, 10, 0)
     * set a vertex on the position (18, 25, 0)
     * set a vertex on the position (25, 40, 0)
     * set a vertex on the position (40, 50, 0)
     * set a vertex on the position (50, 60, 0)
     * set a vertex on the position (35, 55, 0)
     * set a vertex on the position (20, 62, 0)
     * set a vertex on the position (15, 60, 0)
     * set a vertex on the position (-5, 68, 0)
     * set a vertex on the position (-10, 60, 0)
     * set a vertex on the position (-5, 55, 0)
     * set a vertex on the position (0, 45, 0)
     * set a vertex on the position (10, 30, 0)
     * */
    glVertex3f(0, 0, 0);
    glVertex3f(10, -12.5, 0);
    glVertex3f(20, -8, 0);
    glVertex3f(25, -5, 0);
    glVertex3f(20, 10, 0);
    glVertex3f(18, 25, 0);
    glVertex3f(25, 40, 0);
    glVertex3f(40, 50, 0);
    glVertex3f(50, 60, 0);
    glVertex3f(35, 55, 0);
    glVertex3f(20, 62, 0);
    glVertex3f(15, 60, 0);
    glVertex3f(-5, 68, 0);
    glVertex3f(-10, 60, 0);
    glVertex3f(-5, 55, 0);
    glVertex3f(0, 45, 0);
    glVertex3f(10, 30, 0);

//	sets the ending of the draw connecting the first vertex draw with the last
    glEnd();

}

//right
void draw_Right_RockBlock() {

//  sets the beginning with only the lines that surrounds it
    glBegin(GL_LINE_LOOP);

    /*
     * set a vertex on the position (15, 30, 0)
     * set a vertex on the position (5, 35, 0)
     * set a vertex on the position (0, 50, 0)
     * set a vertex on the position (-2, 65, 0)
     * set a vertex on the position (5, 80, 0)
     * set a vertex on the position (20, 90, 0)
     * set a vertex on the position (30, 100, 0)
     * set a vertex on the position (65, 105, 0)
     * set a vertex on the position (100, 100, 0)
     * set a vertex on the position (110, 95, 0)
     * set a vertex on the position (120, 85, 0)
     * set a vertex on the position (125, 75, 0)
     * set a vertex on the position (130, 70, 0)
     * set a vertex on the position (132, 65, 0)
     * set a vertex on the position (130, 60, 0)
     * set a vertex on the position (135, 50, 0)
     * set a vertex on the position (125, 20, 0)
     * set a vertex on the position (115, 20, 0)
     * set a vertex on the position (107, 10, 0)
     * set a vertex on the position (100, 3, 0)
     * set a vertex on the position (67.5, 0, 0)
     * set a vertex on the position (50, 5, 0)
     * set a vertex on the position (30, 5, 0)
     * set a vertex on the position (20, 15, 0)
     * */
    glVertex3f(15, 30, 0);
    glVertex3f(5, 35, 0);
    glVertex3f(0, 50, 0);
    glVertex3f(-2, 65, 0);
    glVertex3f(5, 80, 0);
    glVertex3f(20, 90, 0);
    glVertex3f(30, 100, 0);
    glVertex3f(65, 105, 0);
    glVertex3f(100, 100, 0);
    glVertex3f(110, 95, 0);
    glVertex3f(120, 85, 0);
    glVertex3f(125, 75, 0);
    glVertex3f(130, 70, 0);
    glVertex3f(132, 65, 0);
    glVertex3f(130, 60, 0);
    glVertex3f(135, 50, 0);
    glVertex3f(125, 20, 0);
    glVertex3f(115, 20, 0);
    glVertex3f(107, 10, 0);
    glVertex3f(100, 3, 0);
    glVertex3f(67.5, 0, 0);
    glVertex3f(50, 5, 0);
    glVertex3f(30, 5, 0);
    glVertex3f(20, 15, 0);

//	sets the ending of the draw connecting the first vertex draw with the last
    glEnd();

}

/**********************************************************************/
//delivery path
void draw_DeliveryPath_RockBlock() {

//  sets the beginning with only the lines that surrounds it
    glBegin(GL_LINE_LOOP);

    /*
     * set a vertex on the position (0, 0, 0)
     * set a vertex on the position (40, 0, 0)
     * set a vertex on the position (65, 5, 0)
     * set a vertex on the position (50, 10, 0)
     * set a vertex on the position (55, 30, 0)
     * set a vertex on the position (45, 40, 0)
     * set a vertex on the position (40, 70, 0)
     * set a vertex on the position (5, 70, 0)
     * set a vertex on the position (5, 60, 0)
     * set a vertex on the position (0, 45, 0)
     * set a vertex on the position (0, 30, 0)
     * set a vertex on the position (-5, 15, 0)
     * set a vertex on the position (0, 10, 0)
     * */
    glVertex3f(0, 0, 0);
    glVertex3f(40, 0, 0);
    glVertex3f(65, 5, 0);
    glVertex3f(50, 10, 0);
    glVertex3f(55, 30, 0);
    glVertex3f(45, 40, 0);
    glVertex3f(40, 70, 0);
    glVertex3f(5, 70, 0);
    glVertex3f(5, 60, 0);
    glVertex3f(0, 45, 0);
    glVertex3f(0, 30, 0);
    glVertex3f(-5, 15, 0);
    glVertex3f(0, 10, 0);

//	sets the ending of the draw connecting the first vertex draw with the last
    glEnd();

}

/**********************************************************************/
//entrance path full
void draw_EntrancePath_Full_RockBlock() {

//  sets the beginning with only the lines that surrounds it
    glBegin(GL_LINE_LOOP);

    /*
     * set a vertex on the position (-64, 15, 0)
     * set a vertex on the position (1, 15, 0)
     * set a vertex on the position (1, 10, 0)
     * call the function draw_Circle()
     * set a vertex on the position (6, -10, 0)
     * set a vertex on the position (4, -15, 0)
     * set a vertex on the position (21, -25, 0)
     * set a vertex on the position (36, -45, 0)
     * set a vertex on the position (36, -55, 0)
     * set a vertex on the position (37, -60, 0)
     * set a vertex on the position (41, -65, 0)
     * set a vertex on the position (45, -70, 0)
     * set a vertex on the position (46, -75, 0)
     * set a vertex on the position (56, -85, 0)
     * set a vertex on the position (46, -95, 0)
     * set a vertex on the position (44, -97, 0)
     * set a vertex on the position (41, -97, 0)
     * set a vertex on the position (34, -105, 0)
     * set a vertex on the position (-4, -115, 0)
     * set a vertex on the position (-24, -113, 0)
     * set a vertex on the position (-54, -125, 0)
     * set a vertex on the position (-79, -122, 0)
     * set a vertex on the position (-74, -135, 0)
     * set a vertex on the position (-79, -150, 0)
     * set a vertex on the position (-79, -155, 0)
     * set a vertex on the position (-114, -155, 0)
     * set a vertex on the position (-124, -145, 0)
     * set a vertex on the position (-126, -140, 0)
     * set a vertex on the position (-129, -135, 0)
     * set a vertex on the position (-126, -130, 0)
     * set a vertex on the position (-124, -115, 0)
     * set a vertex on the position (-114, -115, 0)
     * set a vertex on the position (-104, -110, 0)
     * set a vertex on the position (-101.5, -105, 0)
     * set a vertex on the position (-104, -95, 0)
     * set a vertex on the position (-89, -90, 0)
     * set a vertex on the position (-84, -80, 0)
     * set a vertex on the position (-69, -75, 0)
     * set a vertex on the position (-44, -85, 0)
     * set a vertex on the position (-39, -90, 0)
     * set a vertex on the position (-24, -80, 0)
     * set a vertex on the position (1, -75, 0)
     * set a vertex on the position (-14, -65, 0)
     * set a vertex on the position (-7, -52, 0)
     * set a vertex on the position (-9, -45, 0)
     * set a vertex on the position (-29, -35, 0)
     * set a vertex on the position (-39, -5, 0)
     * */
    glVertex3f(-64, 15, 0);
    glVertex3f(1, 15, 0);
    glVertex3f(1, 10, 0);
    draw_Circle((PI / 2), ((3 * PI) / 2), 2, 5, 0); //74 -15
    glVertex3f(6, -10, 0);
    glVertex3f(4, -15, 0);
    glVertex3f(21, -25, 0);
    glVertex3f(36, -45, 0);
    glVertex3f(36, -55, 0);
    glVertex3f(37, -60, 0);
    glVertex3f(41, -65, 0);
    glVertex3f(45, -70, 0);
    glVertex3f(46, -75, 0);
    glVertex3f(56, -85, 0);
    glVertex3f(46, -95, 0);
    glVertex3f(44, -97, 0);
    glVertex3f(41, -97, 0);
    glVertex3f(34, -105, 0);
    glVertex3f(-4, -115, 0);
    glVertex3f(-24, -113, 0);
    glVertex3f(-54, -125, 0);
    glVertex3f(-79, -122, 0);
    glVertex3f(-74, -135, 0);
    glVertex3f(-79, -150, 0);
    glVertex3f(-79, -155, 0);
    glVertex3f(-114, -155, 0);
    glVertex3f(-124, -145, 0);
    glVertex3f(-126, -140, 0);
    glVertex3f(-129, -135, 0);
    glVertex3f(-126, -130, 0);
    glVertex3f(-124, -115, 0);
    glVertex3f(-114, -115, 0);
    glVertex3f(-104, -110, 0);
    glVertex3f(-101.5, -105, 0);
    glVertex3f(-104, -95, 0);
    glVertex3f(-89, -90, 0);
    glVertex3f(-84, -80, 0);
    glVertex3f(-69, -75, 0);
    glVertex3f(-44, -85, 0);
    glVertex3f(-39, -90, 0);
    glVertex3f(-24, -80, 0);
    glVertex3f(1, -75, 0);
    glVertex3f(-14, -65, 0);
    glVertex3f(-7, -52, 0);
    glVertex3f(-9, -45, 0);
    glVertex3f(-29, -35, 0);
    glVertex3f(-39, -5, 0);

//	sets the ending of the draw connecting the first vertex draw with the last
    glEnd();

}

/**********************************************************************/
//entrance path
void draw_Castle_RockBlock() {

//  sets the beginning with only the lines that surrounds it
    glBegin(GL_LINE_LOOP);

    /*
     * call the function draw_circle()
     * set a vertex on the position (-18, -205, 100)
     * set a vertex on the position (-18, -205, 0)
     * set a vertex on the position (-70, -205, 0)
     * set a vertex on the position (-98.5, -185, 0)
     * set a vertex on the position (-128.5, -180, 0)
     * set a vertex on the position (-134.5, -175, 0)
     * set a vertex on the position (-158.5, -155, 0)
     * set a vertex on the position (-183.5, -145, 0)
     * set a vertex on the position (-188.5, -140, 0)
     * set a vertex on the position (-188.5, -135, 0)
     * set a vertex on the position (-183.5, -115, 0)
     * set a vertex on the position (-193.5, -95, 0)
     * set a vertex on the position (-203.5, -85, 0)
     * set a vertex on the position (-218.5, -45, 0)
     * set a vertex on the position (-221.5, 0, 0)
     * set a vertex on the position (-218.5, 25, 0)
     * set a vertex on the position (-208.5, 45, 0)
     * set a vertex on the position (-193.5, 75, 0)
     * set a vertex on the position (-198.5, 115, 0)
     * set a vertex on the position (-183.5, 145, 0)
     * set a vertex on the position (-183.5, 155, 0)
     * set a vertex on the position (-168.5, 175, 0)
     * set a vertex on the position (-158.5, 165, 0)
     * set a vertex on the position (-153.5, 195, 0)
     * set a vertex on the position (-123.5, 210, 0)
     * set a vertex on the position (-108.5, 205, 0)
     * set a vertex on the position (-58.5, 215, 0)
     * set a vertex on the position (0, 210, 0)
     * set a vertex on the position (11.5, 225, 0)
     * set a vertex on the position (51.5, 215, 0)
     * set a vertex on the position (71.5, 195, 0)
     * set a vertex on the position (91.5, 195, 0)
     * set a vertex on the position (111.5, 175, 0)
     * set a vertex on the position (141.5, 165, 0)
     * set a vertex on the position (151.5, 155, 0)
     * set a vertex on the position (171.5, 150, 0)
     * set a vertex on the position (188.5, 135, 0)
     * set a vertex on the position (201.5, 115, 0)
     * set a vertex on the position (191.5, 105, 0)
     * set a vertex on the position (201.5, 85, 0)
     * set a vertex on the position (201.5, 65, 0)
     * set a vertex on the position (221, 35, 0)
     * set a vertex on the position (211.5, 0, 0)
     * set a vertex on the position (231.5, -25, 0)
     * set a vertex on the position (226.5, -30, 0)
     * set a vertex on the position (211.5, -55, 0)
     * set a vertex on the position (201.5, -58, 0)
     * set a vertex on the position (206.5, -80, 0)
     * set a vertex on the position (191.5, -95, 0)
     * set a vertex on the position (181.5, -105, 0)
     * set a vertex on the position (171.5, -130, 0)
     * set a vertex on the position (151.5, -155, 0)
     * set a vertex on the position (141.5, -165, 0)
     * set a vertex on the position (90.5, -195, 0)
     * set a vertex on the position (55, -205, 0)
     * set a vertex on the position (30, -210, 0)
     * set a vertex on the position (17, -205, 0)
     * set a vertex on the position (17, -205, 100)
     * */
    draw_Circle(-(13 * PI) / 30, (37 * PI) / 26, 205, 205, 150);
    glVertex3f(-18, -205, 100);
    glVertex3f(-18, -205, 0);
    glVertex3f(-70, -205, 0);
    glVertex3f(-98.5, -185, 0);
    glVertex3f(-128.5, -180, 0);
    glVertex3f(-134.5, -175, 0);
    glVertex3f(-158.5, -155, 0);
    glVertex3f(-183.5, -145, 0);
    glVertex3f(-188.5, -140, 0);
    glVertex3f(-188.5, -135, 0);
    glVertex3f(-183.5, -115, 0);
    glVertex3f(-193.5, -95, 0);
    glVertex3f(-203.5, -85, 0);
    glVertex3f(-218.5, -45, 0);
    glVertex3f(-221.5, 0, 0);
    glVertex3f(-218.5, 25, 0);
    glVertex3f(-208.5, 45, 0);
    glVertex3f(-193.5, 75, 0);
    glVertex3f(-198.5, 115, 0);
    glVertex3f(-183.5, 145, 0);
    glVertex3f(-183.5, 155, 0);
    glVertex3f(-168.5, 175, 0);
    glVertex3f(-158.5, 165, 0);
    glVertex3f(-153.5, 195, 0);
    glVertex3f(-123.5, 210, 0);
    glVertex3f(-108.5, 205, 0);
    glVertex3f(-58.5, 215, 0);
    glVertex3f(0, 210, 0);
    glVertex3f(11.5, 225, 0);
    glVertex3f(51.5, 215, 0);
    glVertex3f(71.5, 195, 0);
    glVertex3f(91.5, 195, 0);
    glVertex3f(111.5, 175, 0);
    glVertex3f(141.5, 165, 0);
    glVertex3f(151.5, 155, 0);
    glVertex3f(171.5, 150, 0);
    glVertex3f(188.5, 135, 0);
    glVertex3f(201.5, 115, 0);
    glVertex3f(191.5, 105, 0);
    glVertex3f(201.5, 85, 0);
    glVertex3f(201.5, 65, 0);
    glVertex3f(221, 35, 0);
    glVertex3f(211.5, 0, 0);
    glVertex3f(231.5, -25, 0);
    glVertex3f(226.5, -30, 0);
    glVertex3f(211.5, -55, 0);
    glVertex3f(201.5, -58, 0);
    glVertex3f(206.5, -80, 0);
    glVertex3f(191.5, -95, 0);
    glVertex3f(181.5, -105, 0);
    glVertex3f(171.5, -130, 0);
    glVertex3f(151.5, -155, 0);
    glVertex3f(141.5, -165, 0);
    glVertex3f(90.5, -195, 0);
    glVertex3f(55, -205, 0);
    glVertex3f(30, -210, 0);
    glVertex3f(17, -205, 0);
    glVertex3f(17, -205, 100);

//	sets the ending of the draw connecting the first vertex draw with the last
    glEnd();

}