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
double X_WINDOW_SIZE = 800, Y_WINDOW_SIZE = 800;
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


/***********************************************************************************************************************
************************************************************************************************************************
*******************************Sets the origin point position of each the rock block draw*******************************
************************************************************************************************************************
***********************************************************************************************************************/

void draw_RockBlock() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 40 units for the x value
     *      Y_INITIAL + 40 units for the y value
     * draw_Left_RockBlock()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 40, Y_INITIAL + 40, 0);
	draw_Left_RockBlock();
    glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 40 units for the x value
     *      Y_INITIAL + 40 units for the y value
     * draw_LeftMiddle_RockBlock_Connection()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 40, Y_INITIAL + 40, 0);
	draw_LeftMiddle_RockBlock_Connection();     //(180 ,320)
	glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 180 units for the x value
     *      Y_INITIAL - 50 units for the y value
     * draw_Middle_RockBlock()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 180, Y_INITIAL - 50, 0);
	draw_Middle_RockBlock();                   //(280 ,250)
	glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 360 units for the x value
     *      Y_INITIAL + 20 units for the y value
     * draw_RightMiddle_RockBlock_Connection()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 360, Y_INITIAL + 20, 0);
	draw_RightMiddle_RockBlock_Connection();   //(460, 320)
	glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 380 units for the x value
     *      Y_INITIAL - 20 units for the y value
     * draw_Right_RockBlock()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 380, Y_INITIAL - 20, 0);
	draw_Right_RockBlock();                    //(495, 280)
	glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 245 units for the x value
     *      Y_INITIAL + 90 units for the y value
     * draw_DeliveryPath_RockBlock()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 245, Y_INITIAL + 90, 0);
	draw_DeliveryPath_RockBlock();             //(345, 390)
	glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 314 units for the x value
     *      Y_INITIAL - 65 units for the y value
     * draw_EntrancePath_RockBlock()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 314, Y_INITIAL - 65, 0);
	draw_EntrancePath_Full_RockBlock();
	glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 268.5 units for the x value
     *      Y_INITIAL + 365 units for the y value
     * draw_Castle_RockBlock()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
    glTranslatef(X_INITIAL + 268.5, Y_INITIAL + 365, 0);
    draw_Castle_RockBlock();
    glPopMatrix();



}

/***********************************************************************************************************************
*                                                                                                                      *
*                                             Draws the left tower it self                                             *
*                                                                                                                      *
***********************************************************************************************************************/
//crown spikes part
void draw_LeftTower_Crown_Spikes_Part() {

	//top

	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);
	glVertex3f(5, 0, 0);      //     adds 2.5px width
	glVertex3f(5, 5, 0);//     adds 2.5px height
	glVertex3f(0, 5, 0);      //     removes 2.5px width

	//sets the ending of the draw
	glEnd();

	//bot

	glBegin(GL_LINE_LOOP);


	glVertex3f(0, 0, 1.5);
	glVertex3f(5, 0, 1.5);      //     adds 2.5px width
	glVertex3f(5, 5, 1.5);//     adds 2.5px height
	glVertex3f(0, 5, 1.5);      //     removes 2.5px width

	//sets the ending of the draw
	glEnd();

	//front

	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);
	glVertex3f(5, 0, 0);      //     adds 2.5px width
	glVertex3f(5, 0, 1.5);//     adds 2.5px height
	glVertex3f(0, 0, 1.5);      //     removes 2.5px width

	//sets the ending of the draw
	glEnd();

	//back

	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 5, 0);      //     adds 2.5px width
	glVertex3f(5, 5, 0);//     adds 2.5px height
	glVertex3f(5, 5, 1.5);//     adds 2.5px height
	glVertex3f(0, 5, 1.5);      //     adds 2.5px width

	//sets the ending of the draw
	glEnd();

	//left

	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);      //     adds 2.5px width
	glVertex3f(0, 5, 0);//     adds 2.5px height
	glVertex3f(0, 5, 1.5);//     adds 2.5px height
	glVertex3f(0, 0, 1.5);      //     adds 2.5px width

	//sets the ending of the draw
	glEnd();

	//right

	glBegin(GL_LINE_LOOP);

	glVertex3f(5, 0, 0);      //     adds 2.5px width
	glVertex3f(5, 5, 0);//     adds 2.5px height
	glVertex3f(5, 5, 1.5);//     adds 2.5px height
	glVertex3f(5, 0, 1.5);      //     adds 2.5px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

//crown outside part
void draw_LeftTower_Crown() {

	//makes a cycle where since the point 5px away from the origin in the x axis
	//until it reach 5px before the end of the x axis draw
	for (GLfloat i = 0; i < 40; i += 5) {

        /*
         * save the matrix status
         * translate the figure
         *      i units for the x value
         * draw_LeftTower_Crown_Spikes_Part()
         * translate the figure
         *      35 units for the y value
         * draw_LeftTower_Crown_Spikes_Part()
         * every vertex non modified keeps the same as it was, but the modified ones are changed
         * */
        glPushMatrix();
        glTranslatef(i, 0, 0);
		draw_LeftTower_Crown_Spikes_Part();
        glTranslatef(0, 35, 0);
		draw_LeftTower_Crown_Spikes_Part();
		glPopMatrix();

	}

	//makes a cycle where since the point 5px away from the origin in the y axis
	//until it reach 5px before the end of the y axis draw
	for (GLfloat i = 5; i < 35; i += 5) {

        /*
         * save the matrix status
         * translate the figure
         *      i units for the y value
         * draw_LeftTower_Crown_Spikes_Part()
         * translate the figure
         *      35 units for the x value
         * draw_LeftTower_Crown_Spikes_Part()
         * every vertex non modified keeps the same as it was, but the modified ones are changed
         * */
        glPushMatrix();
        glTranslatef(0, i, 0);
        draw_LeftTower_Crown_Spikes_Part();
        glTranslatef(35, 0, 0);
        draw_LeftTower_Crown_Spikes_Part();
        glPopMatrix();

	}

}

/**********************************************************************/
//trapdoor
void draw_LeftTower_Trapdoor() {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);
	glVertex3f(10, 0, 0);       //     adds 10px width
	glVertex3f(10, 10, 0);  //     adds 10px height
	glVertex3f(0, 10, 0);       //     removes 10x width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

/***********************************************************************************************************************
*                                                                                                                      *
*                                         Draws the left tower ruined it self                                          *
*                                                                                                                      *
***********************************************************************************************************************/

//bottom
void draw_LeftTower_Ruined_Bottom() {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);
	glVertex3f(30, 0, 0);       //     adds 30px width
	glVertex3f(30, 30, 0);  //     adds 30px height
	glVertex3f(0, 30, 0);       //     removes 30px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

/**********************************************************************/
//stairway steps horizontal
void draw_LeftTower_Ruined_Stairway_Steps() {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);
	glVertex3f(3.5, 0, 0);      //     adds 3.5px width
	glVertex3f(3.5, 5, 0);  //     adds 5px height
	glVertex3f(0, 5, 0);        //     removes 3.5px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

//stairway steps vertical
void draw_LeftTower_Ruined_Stairway_Steps_Vertical() {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);
	glVertex3f(5, 0, 0);    //     adds 5px width
	glVertex3f(5, 3, 0);//     adds 3px height
	glVertex3f(0, 3, 0);    //     removes 5px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

//stairway
void draw_LeftTower_Ruined_Stairway() {

	//makes a cycle where since the point 5px away from the origin in the x axis
	//until it reach 5px before the end of the x axis draw
	for (GLfloat i = 0; i < 9; i += 3.5) {

        glPushMatrix();
        glTranslatef(i, 0, 0);
        draw_LeftTower_Ruined_Stairway_Steps();
        glTranslatef(0, 11, 0);
        draw_LeftTower_Ruined_Stairway_Steps();
        glPopMatrix();

	}

	//draws a 2 step apart stairway on the right giving the idea that is broken

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(11, 5, 0);   //     adds 11px width and 5px height
	glVertex3f(16, 5, 0);   //     adds more 5px width
	glVertex3f(16, 8, 0);   //     adds more 3px height
	glVertex3f(11, 8, 0);   //     removes 5px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(11, 11, 0);  //     adds 11px both width and height
	glVertex3f(16, 11, 0);  //     adds more 5px width
	glVertex3f(16, 16, 0);  //     adds more 5px height
	glVertex3f(11, 16, 0);  //     removes 5px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

/**********************************************************************/
//head
void draw_LeftTower_Ruined_Head() {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);
	glVertex3f(20, 0, 0);       //     adds 20px width
	glVertex3f(20, 20, 0);  //     adds 20px height
	glVertex3f(0, 20, 0);       //     removes 20px width

	//sets the ending of the draw
	glEnd();

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(2, 2, 0);    //     adds 2 both in width and height
	glVertex3f(18, 2, 0);   //     adds more 16px width
	glVertex3f(18, 18, 0);  //     adds more 16px height
	glVertex3f(2, 18, 0);   //     removes 16px width

	//sets the ending of the draw
	glEnd();

    glPushMatrix();
    glTranslatef(2, 2, 0);
    draw_LeftTower_Ruined_Stairway();
    glPopMatrix();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                            Draws the middle tower it self                                            *
*                                                                                                                      *
***********************************************************************************************************************/

//outside crown spikes part
void draw_MiddleTower_Bottom_Crown_Spikes_Part() {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);
	glVertex3f(5, 0, 0);        //     adds 5px width
	glVertex3f(5, 5, 0);    //     adds 5px height
	glVertex3f(0, 5, 0);        //     removes 5px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

//outside crown part
void draw_MiddleTower_Bottom_Crown() {

	//makes a cycle where since the point 5px away from the origin in the x axis
	//until it reach 5px before the end of the x axis draw
	for (GLfloat i = 0; i < 30; i += 5) {

        glPushMatrix();
        glTranslatef(i, 0, 0);
		draw_MiddleTower_Bottom_Crown_Spikes_Part();
        glTranslatef(0, 25, 0);
		draw_MiddleTower_Bottom_Crown_Spikes_Part();
		glPopMatrix();

	}

	//makes a cycle where since the point 5px away from the origin in the y axis
	//until it reach 5px before the end of the y axis draw
	for (GLfloat i = 5; i < 25; i += 5) {

        glPushMatrix();
        glTranslatef(0, i, 0);
        draw_MiddleTower_Bottom_Crown_Spikes_Part();
        glTranslatef(25, 0, 0);
        draw_MiddleTower_Bottom_Crown_Spikes_Part();
        glPopMatrix();

	}

}

/**********************************************************************/
//inside crown spikes part
void draw_MiddleRight_Tower_Crown_Spikes_Part() {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);
	glVertex3f(5, 0, 0);        //     adds 5px width
	glVertex3f(5, 5, 0);    //     adds 5px height
	glVertex3f(0, 5, 0);        //     removes 5px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

//inside crown part
void draw_MiddleRight_Tower_Crown() {

	//makes a cycle where since the point 5px away from the origin in the x axis
	//until it reach 5px before the end of the x axis draw
	for (GLfloat i = 0; i < 15; i += 5) {

        glPushMatrix();
        glTranslatef(i, 0, 0);
        draw_MiddleRight_Tower_Crown_Spikes_Part();
        glTranslatef(0, 10, 0);
        draw_MiddleRight_Tower_Crown_Spikes_Part();
        glPopMatrix();

	}

	//makes a cycle where since the point 5px away from the origin in the y axis
	//until it reach 5px before the end of the y axis draw
	for (GLfloat i = 5; i < 10; i += 5) {

        glPushMatrix();
        glTranslatef(0, i, 0);
        draw_MiddleRight_Tower_Crown_Spikes_Part();
        glTranslatef(10, 0, 0);
        draw_MiddleRight_Tower_Crown_Spikes_Part();
        glPopMatrix();

	}

}

/**********************************************************************/
//banner
void draw_MiddleTower_Banner() {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);
	glVertex3f(15, 0, 0);       //     adds 15px width
	glVertex3f(15, -1, 0);   //     removes 1px height
	glVertex3f(0, -1, 0);        //     removes 15px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

/***********************************************************************************************************************
*                                                                                                                      *
*                                             Draws the right tower it self                                            *
*                                                                                                                      *
***********************************************************************************************************************/

//bottom (bottom cover)
void draw_RightTower_Bottom() {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);            //                          start

	glVertex3f(57, 0, 0);       //     adds 57px width      right
	glVertex3f(57, 57, 0);  //     adds 57px height     up
	glVertex3f(0, 57, 0);       //     removes 57px width   left
	glVertex3f(0, 7, 0);        //     removes 50px height  down

	glVertex3f(50, 7, 0);   //     adds 50px width      right
	glVertex3f(50, 50, 0);  //     adds 43px width      up
	glVertex3f(7, 50, 0);   //     removes 43px width   left
	glVertex3f(7, 14, 0);   //     removes 36px height  down

	glVertex3f(43, 14, 0);  //     adds 36px width      right
	glVertex3f(43, 43, 0);  //     adds 29px width      up
	glVertex3f(14, 43, 0);  //     removes 29px width   left

						/**********************************************************************/

	glVertex3f(14, 41, 0);  //     removes 2px height   down

						/**********************************************************************/

	glVertex3f(41, 41, 0);  //     adds 27px width      right
	glVertex3f(41, 16, 0);  //     removes 25px height  down
	glVertex3f(9, 16, 0);   //     removes 25px width   left
	glVertex3f(9, 48, 0);   //     adds 32px width      up

	glVertex3f(48, 48, 0);  //     adds 39px width      right
	glVertex3f(48, 9, 0);   //     removes 39px width   down
	glVertex3f(2, 9, 0);    //     removes 46px height  left
	glVertex3f(2, 55, 0);   //     adds 46px width      up

	glVertex3f(55, 55, 0);  //     adds 57px width      right
	glVertex3f(55, 2, 0);   //     removes 57px width   down
	glVertex3f(0, 2, 0);        //     removes 55px width   left

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

/***********************************************************************************************************************
************************************************************************************************************************
*********************************Sets the origin point position of each the towers draw*********************************
************************************************************************************************************************
***********************************************************************************************************************/

//left tower
void draw_LeftTower() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 20 units for the x value
     *      Y_INITIAL + 20 units for the y value
     * draw_LeftTower_Crown()
     * translate the figure
     *      7 units for the x value
     *      7 units for the y value
     * draw_LeftTower_Crown_Spikes_Part()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 20, Y_INITIAL + 20, 0);
	draw_LeftTower_Crown();     //(120, 320)
    glTranslatef(7, 7, 0);
	draw_LeftTower_Trapdoor();  //(127, 327)
	glPopMatrix();

}

/**********************************************************************/
//left tower ruined
void draw_LeftTower_Ruined() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 110 units for the x value
     *      Y_INITIAL + 25 units for the y value
     * draw_LeftTower_Crown()
     * translate the figure
     *      5 units for the x value
     *      5 units for the y value
     * draw_LeftTower_Crown_Spikes_Part()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 110, Y_INITIAL + 25, 0);
    draw_LeftTower_Ruined_Bottom();
    glTranslatef(5, 5, 0);
    draw_LeftTower_Ruined_Head();
    glPopMatrix();

}

/**********************************************************************/
//middle tower
void draw_MiddleTower() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 190 units for the x value
     *      Y_INITIAL + 25 units for the y value
     * draw_MiddleTower_Bottom_Crown()
     * translate the figure
     *      7.5 units for the x value
     *      7.5 units for the y value
     * draw_MiddleRight_Tower_Crown()
     * translate the figure
     *      -7.5 units for the y value
     * draw_MiddleTower_Banner()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 190, Y_INITIAL + 25, 0);
	draw_MiddleTower_Bottom_Crown();
    glTranslatef(7.5, 7.5, 0);
	draw_MiddleRight_Tower_Crown();
    glTranslatef(0, -7.5, 0);
    draw_MiddleTower_Banner();
    glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 320 units for the x value
     *      Y_INITIAL + 25 units for the y value
     * draw_MiddleTower_Bottom_Crown()
     * translate the figure
     *      7.5 units for the x value
     *      7.5 units for the y value
     * draw_MiddleRight_Tower_Crown()
     * translate the figure
     *      -7.5 units for the y value
     * draw_MiddleTower_Banner()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 320, Y_INITIAL + 25, 0);
    draw_MiddleTower_Bottom_Crown();
    glTranslatef(7.5, 7.5, 0);
    draw_MiddleRight_Tower_Crown();
    glTranslatef(0, -7.5, 0);
    draw_MiddleTower_Banner();
    glPopMatrix();

}

/**********************************************************************/
//right tower
void draw_RightTower() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 400 units for the x value
     *      Y_INITIAL + 10 units for the y value
     * draw_RightTower_Bottom()
     * translate the figure
     *      16.5 units for the x value
     *      21 units for the y value
     * draw_MiddleRight_Tower_Crown()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 400, Y_INITIAL + 10, 0);
	draw_RightTower_Bottom();
    glTranslatef(16.5, 21, 0);
    draw_MiddleRight_Tower_Crown();
    glPopMatrix();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                             Draws the arc bridge it self                                             *
*                                                                                                                      *
***********************************************************************************************************************/

//outside crown spikes part
void draw_ArcBridge_Border_Spikes_Part() {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);
    glVertex3f(5, 0, 0);        //     adds 5px width
    glVertex3f(5, 5, 0);    //     adds 5px height
    glVertex3f(0, 5, 0);        //     removes 5px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

/**********************************************************************/
//arc bridge border
void draw_ArcBridge_Border() {

//  for 50 units
	for (GLfloat i = 0; i < 50; i += 5) {

        /*
         * save the matrix status
         * translate the figure
         *      i units for the x value
         * draw_ArcBridge_Border_Spikes_Part()
         * every vertex non modified keeps the same as it was, but the modified ones are changed
         * */
	    glPushMatrix();
	    glTranslatef(i, 0, 0);
		draw_ArcBridge_Border_Spikes_Part();
		glPopMatrix();

	}

}

/***********************************************************************************************************************
************************************************************************************************************************
************************************Sets the origin point position of the arc bridge************************************
************************************************************************************************************************
***********************************************************************************************************************/

//arc bridge
void draw_ArcBridge() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 60 units for the x value
     *      Y_INITIAL + 30 units for the y value
     * draw_ArcBridge_Border()
     * translate the figure
     *      15 units for the y value
     * draw_ArcBridge_Border()
     * translate the figure
     *      80 units for the x value
     *      -15 units for the y value
     * draw_ArcBridge_Border()
     * translate the figure
     *      15 units for the y value
     * draw_ArcBridge_Border()
     * translate the figure
     *      210 units for the x value
     *      -15 units for the y value
     * draw_ArcBridge_Border()
     * translate the figure
     *      15 units for the y value
     * draw_ArcBridge_Border()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 60, Y_INITIAL + 30, 0);
    draw_ArcBridge_Border();
    glTranslatef(0, 15, 0);
    draw_ArcBridge_Border();
    glTranslatef(80, -15, 0);
    draw_ArcBridge_Border();
    glTranslatef(0, 15, 0);
    draw_ArcBridge_Border();
    glTranslatef(210, -15, 0);
    draw_ArcBridge_Border();
    glTranslatef(0, 15, 0);
    draw_ArcBridge_Border();
    glPopMatrix();



}

/***********************************************************************************************************************
*                                                                                                                      *
*                                          Draws the arc bridge ruined it self                                         *
*                                                                                                                      *
***********************************************************************************************************************/

//arc bridge border ruined
void draw_ArcBridge_Border_Ruined(/*values*/) {}

/**********************************************************************/
//arc bridge path ruined
void draw_ArcBridge_Path_Ruined(/*values*/) {}

/***********************************************************************************************************************
*                                                                                                                      *
*                                Sets the origin point position of the arc bridge ruined                               *
*                                                                                                                      *
***********************************************************************************************************************/

///arc bridge ruined
void draw_ArcBridge_Ruined(/*values*/) {}

/***********************************************************************************************************************
*                                                                                                                      *
*                                       Draws the middle towers connection it self                                     *
*                                                                                                                      *
***********************************************************************************************************************/

//wall edification (middle towers connection)
void draw_WallEdification_Roof(GLfloat width, GLfloat height) {

//  for height unities, increasing 2.5 each
	for (GLfloat v = 0; v < height; v += 2.5) {

//  for width unities, increasing 2.5 each
		for (GLfloat h = 0; h < width; h += 2.5) {

            /*
             * save the matrix status
             * translate the figure
             *      h units for the x value
             *      v units for the y value
             * increase the figure size by
             *     2.5 times of the x value
             *     2.5 times of the y value
             *     0.5 times of the z value
             * draw_6_Faces_Figure()
             * every vertex non modified keeps the same as it was, but the modified ones are changed
             * */
			glPushMatrix();
			glTranslatef(h, v, 0);
			glScalef(2.5, 2.5, 0.5);
			draw_6_Faces_Figure();
			glPopMatrix();

		}

	}

}

/***********************************************************************************************************************
************************************************************************************************************************
*****************************Sets the origin point position of the middle towers connection*****************************
************************************************************************************************************************
***********************************************************************************************************************/

//middle towers connection
void draw_MiddleTowers_connection() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 195 units for the x value
     *      Y_INITIAL + 55 units for the y value
     * draw_WallEdification_Roof()
     * translate the figure
     *      25 units for the x value
     *      -20 units for the y value
     * draw_WallEdification_Roof()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 195, Y_INITIAL + 55, 0);
	draw_WallEdification_Roof(150, 25);
	glTranslatef(25, -20, 0);
	draw_WallEdification_Roof(100, 20);
	glPopMatrix();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                Draws the gate it self                                                *
*                                                                                                                      *
***********************************************************************************************************************/

//flag
void draw_Flag() {

    glPushMatrix();
    glTranslatef(0, 0, 0);
	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);
	glVertex3f(5, -5, 0);    //     adds 5px width and removes 5px height

	//sets the ending of the draw
	glEnd();

    glPopMatrix();

}

//flag holder
void draw_Flag_Holder() {

	/*
     * save the matrix status
     * increase the figure size by
     *     10 times of the x value
     *     10 times of the y value
     *     70 times of the z value
     * draw_6_Faces_Figure()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * */
	glPushMatrix();
    glScalef(10, 10, 70);
    draw_6_Faces_Figure();
    glPopMatrix();


}

//gate
void draw_Gate() {

	/*
	 * save the matrix status
     * increase the figure size by
	 *     xSize times of the x value
	 *     5 times of the y value
	 *     100 times of the z value
     * draw_6_Faces_Figure()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     *
	 * */
	glPushMatrix();
    glScalef(1, 5, 100);
    draw_6_Faces_Figure();
    glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
***************************************Sets the origin point position of the gate***************************************
************************************************************************************************************************
***********************************************************************************************************************/

//gate
void draw_Gate_Entrance() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 220 units for the x value
     *      Y_INITIAL + 30 units for the y value
     * draw_Gate()
     *
     * translate the figure
     *      -5 units for the x value
     *      -10 units for the y value
     * draw_Flag_Holder()
     *
     * translate the figure
     *      100 units for the x value
     * draw_Flag_Holder()
     *
     * translate the figure
     *      -93 units for the x value
     *      2.5 units for the y value
     * draw_Flag()
     *
     * translate the figure
     *      95 units for the x value
     * draw_Flag()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 220, Y_INITIAL + 30, 0);
	glPushMatrix();
	glScalef(100, 1, 1);
    draw_Gate();
    glPopMatrix();

	glTranslatef(-5, -10, 0);
    draw_Flag_Holder();

	glTranslatef(100, 0, 0);
    draw_Flag_Holder();

    glTranslatef(-93, 2.5, 0);
	draw_Flag();

	glTranslatef(95, 0, 0);
	draw_Flag();
	glPopMatrix();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                           Draws the entrance path it self                                            *
*                                                                                                                      *
***********************************************************************************************************************/

//gargoyles
void draw_Gargoyles() {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	create_Bot_Face();

	//sets the ending of the draw
	glEnd();

}

/***********************************************************************************************************************
************************************************************************************************************************
**********************************Sets the origin point position and draw the gargoyles*********************************
************************************************************************************************************************
***********************************************************************************************************************/

//entrance gargoyles
void draw_EntranceGargoyles() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 220 units for the x value
     *      Y_INITIAL - 10 units for the y value
     *
     *      save the matrix status
     *      increase the figure size by
	 *          xSize times of the 10 value
	 *          ySize times of the 10 value
	 *          zSize times of the 1 value
     *      draw_Gargoyles()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * translate the figure
     *      90 units for the x value
     *
     *      save the matrix status
     *      increase the figure size by
	 *          xSize times of the 10 value
	 *          ySize times of the 10 value
	 *          zSize times of the 1 value
     *      draw_Gargoyles()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 220, Y_INITIAL - 10, 0);

    glPushMatrix();
    glScalef(10, 10 , 10);
    draw_Gargoyles();
    glPopMatrix();

    glTranslatef(90, 0, 0);

    glPushMatrix();
    glScalef(10, 10 , 10);
    draw_Gargoyles();
    glPopMatrix();

	glPopMatrix();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                            Draws the deliver road it self                                            *
*                                                                                                                      *
***********************************************************************************************************************/

void draw_FrontDoor_Tower_Roof() {

    /*
     * save the matrix status
     * translate the figure
     *      100 units for the z axis
     *
     * sets the beginning with only the lines that surrounds it
     * draw_Circle()
     * draw_Circle()
     * draw_Circle()
     * sets the ending of the draw connecting the first vertex draw with the last
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(0, 0, 100);
    glBegin(GL_LINE_LOOP);

    draw_Circle(0, 2 * PI, 5, 5, 0);
    draw_Circle(0, 2 * PI, 3, 3, 5);
    draw_Circle(0, 2 * PI, 1, 1, 10);

    glEnd();
    glPopMatrix();

}

void draw_FrontDoor_Tower_Body() {

	/*
     * save the matrix status
     * increase the figure size by
     *     5 times of the x value
     *     5 times of the y value
     *     100 times of the z value
     * draw_Cylinder_Figure()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * */
	glPushMatrix();
	glScalef(5, 5, 100);

    draw_Cylinder_Figure();

	glPopMatrix();

}

void draw_FrontDoor() {

    /*
     * save the matrix status
     * translate the figure
     *      2.5 for the x value
     *      2.5 for the y value
     * draw_FrontDoor_Tower_Roof()
     * draw_FrontDoor_Tower_Body()
     *
     * translate the figure
     *      35 for the x value
     * draw_FrontDoor_Tower_Roof()
     * draw_FrontDoor_Tower_Body()
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(2.5, 2.5, 0);
    draw_FrontDoor_Tower_Roof();
    draw_FrontDoor_Tower_Body();

    glTranslatef(35, 0, 0);
    draw_FrontDoor_Tower_Roof();
    draw_FrontDoor_Tower_Body();

    glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      7 for the x value
     * draw_Gate()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(7, 0, 0);
	glScalef(26, 1, 1);
	draw_Gate();
	glPopMatrix();
	glPopMatrix();



}

/***********************************************************************************************************************
************************************************************************************************************************
************************************Sets the origin point position of the deliver road**********************************
************************************************************************************************************************
***********************************************************************************************************************/
//delivery road
void draw_Delivery() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 247.5 for the x value
     *      Y_INITIAL + 160 for the y value
     * draw_FrontDoor()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 247.5, Y_INITIAL + 160, 0);
	draw_FrontDoor();
	glPopMatrix();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                Draws the castle road                                                 *
*                                                                                                                      *
***********************************************************************************************************************/
//delivery road
void draw_Castle_Road(GLfloat xSize, GLfloat ySize) {

    /*
     * save the matrix status
     * increase the figure size by
     *      xSize times of the x value
     *      ySize times of the y value
     * create_Bot_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glScalef(xSize, ySize, 0);
    create_Bot_Face();
    glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
***********************************Sets the origin point position of the castle roads***********************************
************************************************************************************************************************
***********************************************************************************************************************/
//castle road
void draw_Castle_Roads() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 252.5 for the x value
     *      Y_INITIAL + 295 for the y value
     * draw_Castle_Road()
     *
     * translate the figure
     *      100 for the y value
     * draw_Castle_Road()
     *
     * translate the figure
     *      70 for the y value
     * draw_Castle_Road()
     *
     * translate the figure
     *      121 for the x value
     *      -265 for the y value
     * draw_Castle_Road()
     *
     * translate the figure
     *      -240 for the x value
     * draw_Castle_Road()
     *
     * translate the figure
     *      30 for the x value
     * draw_Castle_Road()
     *
     * translate the figure
     *      200 for the x value
     * draw_Castle_Road()
     *
     * translate the figure
     *      -200 for the x value
     *      275 for the y value
     * draw_Castle_Road()
     *
     * translate the figure
     *      -125 for the y value
     * draw_Castle_Road()
     *
     * translate the figure
     *      40 for the x value
     * draw_Castle_Road()
     *
     * translate the figure
     *      95 for the x value
     * draw_Castle_Road()
     *
     * translate the figure
     *      65 for the x value
     * draw_Castle_Road()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 252.5, Y_INITIAL + 295, 0);
    draw_Castle_Road(30, 40);

	glTranslatef(0, 100, 0);
	draw_Castle_Road(30, 40);

	glTranslatef(0, 70, 0);
    draw_Castle_Road(30, 10);

	glTranslatef(121, -265, 0);
    draw_Castle_Road(30, 305);

	glTranslatef(-240, 0, 0);
    draw_Castle_Road(30, 305);

	glTranslatef(30, 0, 0);
	draw_Castle_Road(10, 30);

	glTranslatef(200, 0, 0);
    draw_Castle_Road(10, 30);

	glTranslatef(-200, 275, 0);
    draw_Castle_Road(210, 30);

	glTranslatef(0, -125, 0);
    draw_Castle_Road(10, 30);

	glTranslatef(40, 0, 0);
    draw_Castle_Road(35, 30);

	glTranslatef(95, 0, 0);
    draw_Castle_Road(35, 30);

	glTranslatef(65, 0, 0);
    draw_Castle_Road(10, 30);
    glPopMatrix();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                   Draws the store                                                    *
*                                                                                                                      *
***********************************************************************************************************************/
//delivery road
void draw_Store(GLfloat xSize, GLfloat ySize) {

	/*
	 * save the matrix status
     * increase the figure size by
	 *     xSize times of the x value
	 *     ySize times of the y value
	 *     15 times of the z value
     * draw_6_Faces_Figure()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     *
	 * */
	glPushMatrix();
    glScalef(xSize, ySize, 15);
    draw_6_Faces_Figure();
    glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
*********************************Sets the origin point position of the castle courtyard*********************************
************************************************************************************************************************
***********************************************************************************************************************/
//castle courtyard
void draw_Castle_Courtyard() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 173.5 for the x value
     *      Y_INITIAL + 200 for the y value
     *
     *      save the matrix status
     *      increase the figure size by
     *           190 times of the x value
     *           65 times of the y value
     *      create_Bot_Face()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 173.5, Y_INITIAL + 200, 0);

//	make the courtyard limit (ground)
    glPushMatrix();
    glScalef(190, 65, 1);
    create_Bot_Face();
    glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      94.5 for the x value
     *      29.5 for the y value
     *
     *      sets the beginning with only the lines that surrounds it
     *      draw_Circle()
     *      draw_Circle()
     *      sets the ending of the draw connecting the first vertex draw with the last
     *
     *      sets the beginning with only the lines that surrounds it
     *      draw_Circle()
     *      draw_Circle()
     *      sets the ending of the draw connecting the first vertex draw with the last
     *
     * draw_Castle_Courtyard_Roundabout_Outside()
     * draw_Castle_Courtyard_Roundabout_Inside()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glTranslatef(94.5, 29.5, 0);

//	make the outside part of the roundabout
    glBegin(GL_LINE_LOOP);
    draw_Circle(0, 2 * PI, 7.5, 7.5, 0);
    draw_Circle(0, 2 * PI, 7.5, 7.5, 5);
    glEnd();

//	make the inside part of the roundabout
    glBegin(GL_LINE_LOOP);
    draw_Circle(0, 2 * PI, 2.5, 2.5, 0);
    draw_Circle(0, 2 * PI, 2.5, 2.5, 10);
    glEnd();

	glPopMatrix();

    /*
     * make the stores
     *
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 177.5 for the x value
     *      Y_INITIAL + 230 for the y value
     * draw_Store()
     *
     * translate the figure
     *      10 for the x value
     *      22 for the y value
     * draw_Store()
     *
     * translate the figure
     *      10 for the x value
     *      -32 for the y value
     * draw_Store()
     *
     * translate the figure
     *      -10 for the x value
     *      -20 for the y value
     * draw_Store()
     *
     * translate the figure
     *      110 for the x value
     * draw_Store()
     *
     * translate the figure
     *      30 for the x value
     * draw_Store()
     *
     * translate the figure
     *      20 for the x value
     *      30 for the y value
     * draw_Store()
     *
     * translate the figure
     *      -50 for the x value
     *      22 for the y value
     * draw_Store()
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 177.5, Y_INITIAL + 230, 0);

	draw_Store(10, 32);

	glTranslatef(10, 22, 0);

    draw_Store(30, 10);

	glTranslatef(10, -32, 0);
    draw_Store(30, 20);

	glTranslatef(-10, -20, 0);
    draw_Store(40, 10);

	glTranslatef(110, 0, 0);
    draw_Store(20, 40);

	glTranslatef(30, 0, 0);
    draw_Store(20, 20);

	glTranslatef(20, 30, 0);
    draw_Store(12, 32);

	glTranslatef(-50, 22, 0);
    draw_Store(40, 10);
	glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      253 for the x value
     *      165 for the y value
     * for 28 unities, increasing 2.5 each
     * for 45 unities, increasing 2.5 each
     *
     *      save the matrix status
     *      translate the figure
     *          X_INITIAL + h for the x value
     *          Y_INITIAL + v for the y value
     *
     *              save the matrix status
     *              increase the figure size by
     *                   5 times of the x value
     *                   5 times of the y value
     *              create_Bot_Face()
     *              every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * translate the figure
     *      -5 for the x value
     *      45 for the y value
     * for 38 unities, increasing 2.5 each
     * for 40 unities, increasing 2.5 each
     *
     *      save the matrix status
     *      translate the figure
     *          X_INITIAL + h for the x value
     *          Y_INITIAL + v for the y value
     *
     *              save the matrix status
     *              increase the figure size by
     *                   5 times of the x value
     *                   5 times of the y value
     *              create_Bot_Face()
     *              every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(253, 165, 0);
	for (int h = 0; h < 28; h += 5) {

		for (int v = 0; v < 45; v += 5) {

			glPushMatrix();
			glTranslatef(X_INITIAL + h, Y_INITIAL + v, 0);

//			make the courtyard road (1 square)
            glPushMatrix();
            glScalef(5, 5, 1);
            create_Bot_Face();
            glPopMatrix();

            glPopMatrix();

		}

	}

    glTranslatef(-5, 45, 0);
	for (int h = 0; h < 38; h += 5) {

		for (int v = 0; v < 40; v += 5) {

			glPushMatrix();
			glTranslatef(X_INITIAL + h, Y_INITIAL + v, 0);

//			make the courtyard road (1 square)
            glPushMatrix();
            glScalef(5, 5, 1);
            create_Bot_Face();
            glPopMatrix();

            glPopMatrix();

		}

	}
	glPopMatrix();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                Draws the castle road                                                 *
*                                                                                                                      *
***********************************************************************************************************************/
//hallway section
void draw_Hallway_Section(GLfloat xSize, GLfloat ySize) {

    /*
     * save the matrix status
     * increase the figure size by
	 *     xSize times of the x value
	 *     ySize times of the y value
	 *     40 times of the z value
     * draw_6_Faces_Figure()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * save the matrix status
     * translate the figure
     *      40 for the y value
     * draw_WallEdification_Roof()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glScalef(xSize, ySize, 40);
    draw_6_Faces_Figure();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 0, 40);
    draw_WallEdification_Roof(xSize, ySize);
    glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
**********************************Sets the origin point position of the castle hallways*********************************
************************************************************************************************************************
***********************************************************************************************************************/
//castle hallway
void draw_Castle_Hallway() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 333.5 of the x value
     *      Y_INITIAL + 265 of the y value
     * draw_Hallway_Section()
     *
     * translate the figure
     *      -130 of the x value
     *      170 of the x value
     * draw_Hallway_Section()
     *
     * translate the figure
     *      -170 of the y value
     * draw_Hallway_Section()
     *
     * translate the figure
     *      -30 of the x value
     * draw_Hallway_Section()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 333.5, Y_INITIAL + 265, 0);
	draw_Hallway_Section(30, 200);

	glTranslatef(-130, 170, 0);
	draw_Hallway_Section(130, 30);

	glTranslatef(0, -170, 0);
    draw_Hallway_Section(130, 30);

	glTranslatef(-30, 0, 0);
    draw_Hallway_Section(30, 200);

	glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
************************************Sets the origin point position of the castle walls**********************************
************************************************************************************************************************
***********************************************************************************************************************/

//castle buildings
void draw_Castle_Buildings() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 238.5 for the x value
     *      Y_INITIAL + 335 for the y value
     *
     *      save the matrix status
     *      increase the figure size by
     *           60 times of the x value
     *           60 times of the y value
     *           70 times of the z value
     *      draw_6_Faces_Figure()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 238.5, Y_INITIAL + 335, 0);

//	make the central building
	/*
	 * save the matrix status
     * increase the figure size by
	 *     60 times of the x value
	 *     60 times of the y value
	 *     70 times of the z value
     * draw_6_Faces_Figure()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     *
	 * */
	glPushMatrix();
    glScalef(60, 60, 70);
    draw_6_Faces_Figure();
    glPopMatrix();
    glPopMatrix();

	glPopMatrix();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                          Draws the old castle walls it self                                          *
*                                                                                                                      *
***********************************************************************************************************************/
//castle old tower roof
void draw_Castle_OldTower_Roof(GLfloat radios, GLfloat xSize) {

    /*
     * save the matrix status
     * translate the figure
     *      xSize for the x value
     *      200 for the z value
     *
     * sets the beginning with only the lines that surrounds it
     *
     * while the size is bigger than one, decrease 2 units and increase 5 units in height
     *      call the function draw_Circle()
     *
     * sets the ending of the draw connecting the first vertex draw with the last
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(xSize, 0, 200);
    glBegin(GL_LINE_LOOP);
    for (GLfloat i = radios, h = 0; i > 1; i -= 2, h += 5) {

        draw_Circle(0, 2 * PI, i, i, h);

    }
    glEnd();
    glPopMatrix();

}

//castle old tower body
void draw_Castle_OldTower_Body(GLfloat radios, GLfloat height) {

	/*
     * save the matrix status
     * increase the figure size by
     *     radios times of the x value
     *     radios times of the y value
     *     height times of the z value
     * draw_Cylinder_Figure()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * */
	glPushMatrix();
	glScalef(radios, radios, height);

	draw_Cylinder_Figure();

	glPopMatrix();

}

//castle old tower side top
void draw_Castle_OldTower_Left(GLfloat size) {

//  draw_Castle_OldTower_Roof()
    draw_Castle_OldTower_Roof(size / 2, -size - 5);

    /*
     * save the matrix status
     * translate the figure
     *      -size - 5 for the x value
     *      150 for the z value
     * draw_Castle_OldTower_Body()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(-size - 5, 0, 150);
    draw_Castle_OldTower_Body(size / 2, 50);
    glPopMatrix();

}

//castle old tower side top
void draw_Castle_OldTower_Central(GLfloat size) {

//  draw_Castle_OldTower_Roof()
    draw_Castle_OldTower_Roof(size, 0);

//  draw_Cylinder_Figure()
    draw_Castle_OldTower_Body(size, 200);

}

//castle old tower side top
void draw_Castle_OldTower_Right(GLfloat size) {

//  draw_Castle_OldTower_Roof()
    draw_Castle_OldTower_Roof(size / 2, size + 5);

    /*
     * save the matrix status
     * translate the figure
     *      -size - 5 for the x value
     *      150 for the z value
     * draw_Castle_OldTower_Body()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(size + 5, 0, 150);
    draw_Castle_OldTower_Body(size / 2, 50);
    glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
**********************************Sets the origin point position of the old castle walls********************************
************************************************************************************************************************
***********************************************************************************************************************/

//castle old tower
void draw_Castle_OldTower(/*values*/) {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 268.5 for the x value
     *      Y_INITIAL + 515 for the y value
     * draw_Castle_OldTower_Left()
     * draw_Castle_OldTower_Central()
     * draw_Castle_OldTower_Right()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 268.5, Y_INITIAL + 515, 0);
    draw_Castle_OldTower_Left(20);
    draw_Castle_OldTower_Central(20);
    draw_Castle_OldTower_Right(20);
	glPopMatrix();

}

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

/***********************************************************************************************************************
*                                                                                                                      *
*                                   Sets the origin point position of the castle walls                                 *
*                                                                                                                      *
***********************************************************************************************************************/

///castle walls
void draw_Castle_Walls(/*values*/) {}

/***********************************************************************************************************************
*                                                                                                                      *
*                                               noun direct draw function                                              *
*                                                                                                                      *
***********************************************************************************************************************/

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
	draw_ArcBridge_Ruined();

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

// Initialization routine.
void setup(void) {

	//set the color of the background
	glClearColor(B_RED, B_GREEN, B_BLUE, B_ALPHA);

}

// reshapes the OpenGL window
void resize(int w, int h) {

	//set the view -> in this case it fills all the OpenGL Window
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	//set to the matrix projection style
	glMatrixMode(GL_PROJECTION);
	//reset the matrix for an identity one
	glLoadIdentity();
	//set the orthographic view (perpendicular) with the size:
	//x_min, x_max, y_min, y_max, z_min, z_max (from the observer perspective!)
	//AKA -> left, right, top, down, near, far
//	glRotatef(80, 1, 0, 0);
//	glRotatef(80, 0, 0, 1);
	glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW, Z_FAR_VIEW);
	glTranslatef(100, 100, 0);

	glMatrixMode(GL_MODELVIEW);
}

//keyboard input function
void keyInput(unsigned char key, int x, int y) {

	switch (key) {

		// if the key 27 (escape) has been pressed, the program ends
	case 27: {

		exit(0);

	} break;

	}

}

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