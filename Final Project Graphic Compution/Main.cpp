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

#include <iostream>
#ifdef __APPLE__
#  include <OpenGL/glu.h>
#  include <GLUT/glut.h>
#else
#  include <GL/glut.h>
#endif

#define PI 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912983367336244065664308602139494639522473719070217986094370277053921717629317675238467481846766940513200056812714526356082778577134275778960917363717872146844090122495343014654958537105079227968925892354201995611212902196086403441815981362977477130996051870721134999999837297804995105973173281609631859502445945534690830264252230825334468503526193118817101000313783875288658753320838142061717766914730359825349042875546873115956286388235378759375195778185778053217122680661300192787661119590921642019893809525720106548586327886593615338182796823030195203530185296899577362259941389124972177528347913151557485724245415069595082953311686172785588907509838175463746493931925506040092770167113900984882401285836160356370766010471018194295559619894676783744944825537977472684710404753464620804668425906949129331367702898915210475216205696602405803815019351125338243003558764024749647326391419927260426992279678235478163600934172164121992458631503028618297455570674983850549458858692699569092721079750930295532116534498720275596023648066549911988183479775356636980742654252786255181841757467289097777279380008164706001614524919217321721477235014144197356854816136115735255213347574184946843852332390739414333454776241686251898356948556209921922218427255025425688767179049460165346680498862723279178608578438382796797668145410095388378636095068006422512520511739298489608412848862694560424196528502221066118630674427862203919494504712371378696095636437191728746776465757396241389086583264599581339047802759009946576407895126946839835259570982582262052248

//necessary to the I/O
using namespace std;

GLfloat xInitial = 100, yInitial = 300;

/***********************************************************************************************************************
************************************************************************************************************************
*******************************************************Draw curves******************************************************
************************************************************************************************************************
***********************************************************************************************************************/

void draw_Curve(GLfloat x, GLfloat y, GLfloat starAngle, GLfloat finalAngle, GLfloat xSize, GLfloat ySize) {

    for (GLfloat i = starAngle; i < finalAngle; i += 0.0001) {

        glVertex3f(x + (xSize * cosf(i)), y + (ySize * sinf(i)), 0);

    }

}

                        /**********************************************************************/
//inverted circle
void draw_Inverted_Curve(GLfloat x, GLfloat y, GLfloat starAngle, GLfloat finalAngle, GLfloat xSize, GLfloat ySize) {

    for (GLfloat i = starAngle; i > finalAngle; i -= 0.0001) {

        glVertex3f(x + (xSize * cosf(i)), y + (ySize * sinf(i)), 0);

    }

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                             Draws the rock block it self                                             *
*                                                                                                                      *
***********************************************************************************************************************/

//left
void draw_Left_RockBlock_TopView(GLfloat x, GLfloat y) {

	//sets the beginning of the draw
	glBegin(GL_LINE_LOOP);

    glVertex3f(x + 34, y, 0);
    glVertex3f(x + 32, y + 0.25, 0);
    glVertex3f(x + 30, y + 0.5, 0);
    glVertex3f(x + 28, y + 0.75, 0);
    glVertex3f(x + 26, y + 1, 0);
    glVertex3f(x + 20, y + 5, 0);
    glVertex3f(x + 10, y + 12, 0);
    glVertex3f(x + 5, y + 20, 0);
    glVertex3f(x + 2.5, y + 40, 0);
    glVertex3f(x, y + 45, 0);
    glVertex3f(x + 2.5, y + 50, 0);
    glVertex3f(x + 5, y + 55, 0);
    glVertex3f(x + 7.5, y + 65, 0);
    glVertex3f(x + 15, y + 75, 0);

    draw_Inverted_Curve(x + 40, y + 40, PI / 2, -(/*21 * */PI) / 2/*36*/, 40, 40);  //Center (x, y)

    //sets the ending of the draw
    glEnd();

	//set the drawing to be rendered
	glFlush();

}

//left__middle connection
void draw_LeftMiddle_RockBlock_Connection_TopView(GLfloat x, GLfloat y) {

	//sets the beginning of the draw
	glBegin(GL_LINE_LOOP);

    draw_Inverted_Curve(x - 40, y + 20, PI/2, -PI/2, 40, 40);  //Center (x, y)

	//based on the position of the original point makes calculus to create the other points
	//so it has the pretended shape
    glVertex3f(x + 10, y - 5, 0);
    glVertex3f(x + 30, y, 0);
    glVertex3f(x + 37.5, y - 10, 0);
    glVertex3f(x + 50, y - 15, 0);
    glVertex3f(x + 60, y - 5, 0);
    glVertex3f(x + 70, y, 0);
    glVertex3f(x + 90, y - 5, 0);
    glVertex3f(x + 97, y - 5, 0);
    glVertex3f(x + 95, y - 2, 0);
    glVertex3f(x + 105, y + 38, 0);
    glVertex3f(x + 110, y + 48, 0);
    glVertex3f(x + 115, y + 58, 0);
    glVertex3f(x + 117, y + 60, 0);

//    draw_Inverted_Curve(x + 190, y, (33 * PI) / 32, (7 * PI) / 12, 90, 70);  //Center (x, y)

//    glVertex3f(x + 165, y + 100, 0);
//    glVertex3f(x + 140, y + 85, 0);
    glVertex3f(x + 100, y + 50, 0);
    glVertex3f(x + 90, y + 57.5, 0);
    glVertex3f(x + 60, y + 60, 0);
    glVertex3f(x + 50, y + 50, 0);
    glVertex3f(x + 30, y + 40, 0);
    glVertex3f(x + 10, y + 35, 0);

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered
	glFlush();

}

//middle rock block
void draw_Middle_RockBlock_TopView(GLfloat x, GLfloat y) {


//    //sets the beginning of the draw
//    glBegin(GL_LINE_LOOP);
//
//    draw_Curve(x + 90, y + 70, 0, 2 * PI, 90, 70);  //Center (x, y)
//
//    //sets the ending of the draw
//    glEnd();

    glBegin(GL_LINE_LOOP);

    glVertex3f(x + 60, y, 0);
    glVertex3f(x + 55, y, 0);
    glVertex3f(x + 30, y + 10, 0);
    glVertex3f(x + 20, y + 40, 0);
    glVertex3f(x + 2, y + 50, 0);
    glVertex3f(x - 5, y + 70, 0);
    glVertex3f(x + 5, y + 110, 0);
    glVertex3f(x + 10, y + 120, 0);
    glVertex3f(x + 15, y + 130, 0);
    glVertex3f(x + 25, y + 140, 0);
    glVertex3f(x + 65, y + 150, 0);
    glVertex3f(x + 65, y + 140, 0);
    glVertex3f(x + 105, y + 140, 0);
    glVertex3f(x + 130, y + 145, 0);
    glVertex3f(x + 140, y + 140, 0);
    glVertex3f(x + 170, y + 130, 0);
    glVertex3f(x + 175, y + 125, 0);
    glVertex3f(x + 180, y + 115, 0);
    glVertex3f(x + 190, y + 100, 0);
    glVertex3f(x + 180, y + 70, 0);
    glVertex3f(x + 175, y + 60, 0);
    glVertex3f(x + 160, y + 40, 0);
    glVertex3f(x + 155, y + 30, 0);
    glVertex3f(x + 150, y + 15, 0);
    glVertex3f(x + 140, y, 0);

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

//right__middle connection
void draw_RightMiddle_RockBlock_Connection_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the draw
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 10, y - 12.5, 0);  //    adds 40px height
    glVertex3f(x + 20, y - 8, 0);  //    adds 40px height
    glVertex3f(x + 30, y - 10, 0);       //    adds 35px width
    glVertex3f(x + 40, y - 5, 0);
    glVertex3f(x + 35, y + 10, 0);
    glVertex3f(x + 33, y + 25, 0);
    glVertex3f(x + 40, y + 40, 0);
    glVertex3f(x + 55, y + 50, 0);
    glVertex3f(x + 65, y + 60, 0);

//    glVertex3f(x + 35, y + 45, 0);       //    removes 35px width
    glVertex3f(x + 35, y + 55, 0);       //    removes 35px width
    glVertex3f(x + 20, y + 62, 0);       //    removes 35px width
    glVertex3f(x + 15, y + 60, 0);       //    removes 35px width
    glVertex3f(x - 5, y + 68, 0);       //    removes 35px width

    glVertex3f(x - 10, y + 60, 0);       //    removes 35px width
    glVertex3f(x - 5, y + 55, 0);       //    removes 35px width
    glVertex3f(x, y + 45, 0);       //    removes 35px width
    glVertex3f(x + 10, y + 30, 0);       //    removes 35px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

//right
void draw_Right_RockBlock_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the draw
    glBegin(GL_LINE_LOOP);

    glVertex3f(x + 15, y + 30, 0);
    glVertex3f(x + 5, y + 35, 0);
    glVertex3f(x, y + 50, 0);
    glVertex3f(x - 2, y + 65, 0);
    glVertex3f(x + 5, y + 80, 0);
    glVertex3f(x + 20, y + 90, 0);
    glVertex3f(x + 30, y + 100, 0);      //    removes 135px width
    glVertex3f(x + 65, y + 105, 0);
    glVertex3f(x + 100, y + 100, 0);
    glVertex3f(x + 110, y + 95, 0);
    glVertex3f(x + 120, y + 85, 0);
    glVertex3f(x + 125, y + 75, 0);
    glVertex3f(x + 130, y + 70, 0);
    glVertex3f(x + 132, y + 65, 0);
    glVertex3f(x + 130, y + 60, 0);
    glVertex3f(x + 135, y + 50, 0);//    adds 100px height
    glVertex3f(x + 125, y + 20, 0);
    glVertex3f(x + 115, y + 20, 0);
    glVertex3f(x + 107, y + 10, 0);
    glVertex3f(x + 100, y + 3, 0);
    glVertex3f(x + 67.5, y, 0);      //    adds 135px width
    glVertex3f(x + 50, y + 5, 0);
    glVertex3f(x + 30, y + 5, 0);
    glVertex3f(x + 20, y + 15, 0);

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

                        /**********************************************************************/
//delivery path
void draw_DeliveryPath_RockBlock_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the draw
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 40, y, 0);       //    adds 40px width
    glVertex3f(x + 40, y + 100, 0); //    adds 100px height
    glVertex3f(x, y + 100, 0);      //    removes 40px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

                        /**********************************************************************/
//carriage path entrance
void draw_CarriagePath_Entrance_RockBlock_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the draw
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 20, y, 0);       //    adds 20px width
    glVertex3f(x + 20, y + 30, 0);  //    adds 30px height
    glVertex3f(x, y + 30, 0);       //    removes 20px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

//carriage path turn
void draw_CarriagePath_Turn_RockBlock_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the draw
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 20, y, 0);       //    adds 20px width
    glVertex3f(x + 70, y + 40, 0);  //    adds more 50px width and 40px height
    glVertex3f(x + 50, y + 40, 0);  //    removes 20px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

//carriage path exit
void draw_CarriagePath_Exit_RockBlock_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the draw
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 20, y, 0);       //    adds 20px width
    glVertex3f(x + 20, y + 30, 0);  //    adds 30px height
    glVertex3f(x, y + 30, 0);       //    removes 20px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

                        /**********************************************************************/
//entrance path (gateway)
void draw_EntrancePath_GateWay_RockBlock_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the draw
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 75, y, 0);       //    adds 75px width
    glVertex3f(x + 130, y - 90, 0); //    adds more 55px width and removes 90px height
    glVertex3f(x + 75, y - 90, 0);  //    removes 55px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

//entrance path turn
void draw_EntrancePath_Turn_RockBlock_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the draw
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 55, y, 0);       //    adds 55px width
    glVertex3f(x - 80, y - 40, 0);  //    removes 135px width and 40px height
    glVertex3f(x - 140, y - 40, 0); //    removes more 60px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

//entrance path start
void draw_EntrancePath_Start_RockBlock_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the draw
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 60, y, 0);       //     adds 60px width
    glVertex3f(x + 60, y - 40, 0);  //     removes 40px height
    glVertex3f(x, y - 40, 0);       //     removes 60px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

                        /**********************************************************************/
//entrance path
void draw_Castle_RockBlock_TopView(GLfloat x, GLfloat y) {}

/***********************************************************************************************************************
************************************************************************************************************************
*******************************Sets the origin point position of each the rock block draw*******************************
************************************************************************************************************************
***********************************************************************************************************************/

void draw_RockBlock_TopView() {

    //xInitial = 100;
    //yInitial = 300;

	draw_Left_RockBlock_TopView(xInitial, yInitial);                      //(100 ,300)
	draw_LeftMiddle_RockBlock_Connection_TopView(xInitial + 80, yInitial + 20);     //(180 ,320)
	draw_Middle_RockBlock_TopView(xInitial + 180, yInitial - 50);                   //(280 ,250)
	draw_RightMiddle_RockBlock_Connection_TopView(xInitial + 360, yInitial + 20);   //(460, 320)
	draw_Right_RockBlock_TopView(xInitial + 395, yInitial - 20);                    //(495, 280)

	draw_DeliveryPath_RockBlock_TopView(xInitial + 245, yInitial + 90);             //(345, 390)

	draw_CarriagePath_Entrance_RockBlock_TopView(xInitial + 310, yInitial + 90);    //(410, 390)
	draw_CarriagePath_Turn_RockBlock_TopView(xInitial + 310, yInitial + 120);       //(410, 420)
	draw_CarriagePath_Exit_RockBlock_TopView(xInitial + 360, yInitial + 160);       //(460, 460)

	draw_EntrancePath_GateWay_RockBlock_TopView(xInitial + 240, yInitial - 50);     //(340, 250)
	draw_EntrancePath_Turn_RockBlock_TopView(xInitial + 315, yInitial - 140);       //(415, 160)
	draw_EntrancePath_Start_RockBlock_TopView(xInitial + 175, yInitial - 180);      //(275, 120)

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                             Draws the left tower it self                                             *
*                                                                                                                      *
***********************************************************************************************************************/

//crown spikes part
void draw_LeftTower_Crown_Spikes_Part_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 5, y, 0);        //     adds 5px width
    glVertex3f(x + 5, y + 5, 0);    //     adds 5px height
    glVertex3f(x, y + 5, 0);        //     removes 5px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

//crown outside part
void draw_LeftTower_Crown_TopView(GLfloat x, GLfloat y) {

    //makes a cycle where since the point 5px away from the origin in the x axis
    //until it reach 5px before the end of the x axis draw
    for (GLfloat i = x; i < x + 40; i += 5) {

        draw_LeftTower_Crown_Spikes_Part_TopView(i, y);

        draw_LeftTower_Crown_Spikes_Part_TopView(i, y + 35);

    }

    //makes a cycle where since the point 5px away from the origin in the y axis
    //until it reach 5px before the end of the y axis draw
    for (GLfloat i = y + 5; i < y + 35; i += 5) {

        draw_LeftTower_Crown_Spikes_Part_TopView(x, i);

        draw_LeftTower_Crown_Spikes_Part_TopView(x + 35, i);

    }

}

                        /**********************************************************************/
//trapdoor
void draw_LeftTower_Trapdoor_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 10, y, 0);       //     adds 10px width
    glVertex3f(x + 10, y + 10, 0);  //     adds 10px height
    glVertex3f(x, y + 10, 0);       //     removes 10x width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                         Draws the left tower ruined it self                                          *
*                                                                                                                      *
***********************************************************************************************************************/

//bottom
void draw_LeftTower_Ruined_Bottom_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 30, y, 0);       //     adds 30px width
    glVertex3f(x + 30, y + 30, 0);  //     adds 30px height
    glVertex3f(x, y + 30, 0);       //     removes 30px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

                        /**********************************************************************/
//stairway steps horizontal
void draw_LeftTower_Ruined_Stairway_Steps_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 3.5, y, 0);      //     adds 3.5px width
    glVertex3f(x + 3.5, y + 5, 0);  //     adds 5px height
    glVertex3f(x, y + 5, 0);        //     removes 3.5px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

//stairway steps vertical
void draw_LeftTower_Ruined_Stairway_Steps_Vertical_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 5, y, 0);    //     adds 5px width
    glVertex3f(x + 5, y + 3, 0);//     adds 3px height
    glVertex3f(x, y + 3, 0);    //     removes 5px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

//stairway
void draw_LeftTower_Ruined_Stairway_TopView(GLfloat x, GLfloat y) {

    //makes a cycle where since the point 5px away from the origin in the x axis
    //until it reach 5px before the end of the x axis draw
    for (GLfloat i = x; i < x + 9; i += 3.5) {

        draw_LeftTower_Ruined_Stairway_Steps_TopView(i, y);

        draw_LeftTower_Ruined_Stairway_Steps_TopView(i, y + 11);

    }

    //draws a 2 step apart stairway on the right giving the idea that is broken

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x + 11, y + 5, 0);   //     adds 11px width and 5px height
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 16, y + 5, 0);   //     adds more 5px width
    glVertex3f(x + 16, y + 8, 0);   //     adds more 3px height
    glVertex3f(x + 11, y + 8, 0);   //     removes 5px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x + 11, y + 11, 0);  //     adds 11px both width and height
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 16, y + 11, 0);  //     adds more 5px width
    glVertex3f(x + 16, y + 16, 0);  //     adds more 5px height
    glVertex3f(x + 11, y + 16, 0);  //     removes 5px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

                        /**********************************************************************/
//head
void draw_LeftTower_Ruined_Head_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 20, y, 0);       //     adds 20px width
    glVertex3f(x + 20, y + 20, 0);  //     adds 20px height
    glVertex3f(x, y + 20, 0);       //     removes 20px width

    //sets the ending of the draw
    glEnd();

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x + 2, y + 2, 0);    //     adds 2 both in width and height
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 18, y + 2, 0);   //     adds more 16px width
    glVertex3f(x + 18, y + 18, 0);  //     adds more 16px height
    glVertex3f(x + 2, y + 18, 0);   //     removes 16px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

    draw_LeftTower_Ruined_Stairway_TopView(x + 2, y + 2);

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                            Draws the middle tower it self                                            *
*                                                                                                                      *
***********************************************************************************************************************/

//outside crown spikes part
void draw_MiddleTower_Bottom_Crown_Spikes_Part_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 5, y, 0);        //     adds 5px width
    glVertex3f(x + 5, y + 5, 0);    //     adds 5px height
    glVertex3f(x, y + 5, 0);        //     removes 5px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

//outside crown part
void draw_MiddleTower_Bottom_Crown_TopView(GLfloat x, GLfloat y) {

    //makes a cycle where since the point 5px away from the origin in the x axis
    //until it reach 5px before the end of the x axis draw
    for (GLfloat i = x; i < x + 30; i += 5) {

        draw_MiddleTower_Bottom_Crown_Spikes_Part_TopView(i, y);

        draw_MiddleTower_Bottom_Crown_Spikes_Part_TopView(i, y + 25);

    }

    //makes a cycle where since the point 5px away from the origin in the y axis
    //until it reach 5px before the end of the y axis draw
    for (GLfloat i = y + 5; i < y + 25; i += 5) {

        draw_MiddleTower_Bottom_Crown_Spikes_Part_TopView(x, i);

        draw_MiddleTower_Bottom_Crown_Spikes_Part_TopView(x + 25, i);

    }

}

                        /**********************************************************************/
//inside crown spikes part
void draw_MiddleRight_Tower_Crown_Spikes_Part_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 5, y, 0);        //     adds 5px width
    glVertex3f(x + 5, y + 5, 0);    //     adds 5px height
    glVertex3f(x, y + 5, 0);        //     removes 5px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

//inside crown part
void draw_MiddleRight_Tower_Crown_TopView(GLfloat x, GLfloat y) {

    //makes a cycle where since the point 5px away from the origin in the x axis
    //until it reach 5px before the end of the x axis draw
    for (GLfloat i = x; i < x + 15; i += 5) {

        draw_MiddleRight_Tower_Crown_Spikes_Part_TopView(i, y);

        draw_MiddleRight_Tower_Crown_Spikes_Part_TopView(i, y + 10);

    }

    //makes a cycle where since the point 5px away from the origin in the y axis
    //until it reach 5px before the end of the y axis draw
    for (GLfloat i = y + 5; i < y + 10; i += 5) {

        draw_MiddleRight_Tower_Crown_Spikes_Part_TopView(x, i);

        draw_MiddleRight_Tower_Crown_Spikes_Part_TopView(x + 10, i);

    }

}

                        /**********************************************************************/
//banner
void draw_MiddleTower_Banner_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 15, y, 0);       //     adds 15px width
    glVertex3f(x + 15, y - 1, 0);   //     removes 1px height
    glVertex3f(x, y - 1, 0);        //     removes 15px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                             Draws the right tower it self                                            *
*                                                                                                                      *
***********************************************************************************************************************/

//bottom (bottom cover)
void draw_RightTower_Bottom_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);            //                          start
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape

    glVertex3f(x + 57, y, 0);       //     adds 57px width      right
    glVertex3f(x + 57, y + 57, 0);  //     adds 57px height     up
    glVertex3f(x, y + 57, 0);       //     removes 57px width   left
    glVertex3f(x, y + 7, 0);        //     removes 50px height  down

    glVertex3f(x + 50, y + 7, 0);   //     adds 50px width      right
    glVertex3f(x + 50, y + 50, 0);  //     adds 43px width      up
    glVertex3f(x + 7, y + 50, 0);   //     removes 43px width   left
    glVertex3f(x + 7, y + 14, 0);   //     removes 36px height  down

    glVertex3f(x + 43, y + 14, 0);  //     adds 36px width      right
    glVertex3f(x + 43, y + 43, 0);  //     adds 29px width      up
    glVertex3f(x + 14, y + 43, 0);  //     removes 29px width   left

                        /**********************************************************************/

    glVertex3f(x + 14, y + 41, 0);  //     removes 2px height   down

                        /**********************************************************************/

    glVertex3f(x + 41, y + 41, 0);  //     adds 27px width      right
    glVertex3f(x + 41, y + 16, 0);  //     removes 25px height  down
    glVertex3f(x + 9, y + 16, 0);   //     removes 25px width   left
    glVertex3f(x + 9, y + 48, 0);   //     adds 32px width      up

    glVertex3f(x + 48, y + 48, 0);  //     adds 39px width      right
    glVertex3f(x + 48, y + 9, 0);   //     removes 39px width   down
    glVertex3f(x + 2, y + 9, 0);    //     removes 46px height  left
    glVertex3f(x + 2, y + 55, 0);   //     adds 46px width      up

    glVertex3f(x + 55, y + 55, 0);  //     adds 57px width      right
    glVertex3f(x + 55, y + 2, 0);   //     removes 57px width   down
    glVertex3f(x, y + 2, 0);        //     removes 55px width   left

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

/***********************************************************************************************************************
************************************************************************************************************************
*********************************Sets the origin point position of each the towers draw*********************************
************************************************************************************************************************
***********************************************************************************************************************/

//left tower
void draw_LeftTower_TopView() {

    //xInitial = 100;
    //yInitial = 300;

    draw_LeftTower_Crown_TopView(xInitial + 20, yInitial + 20);     //(120, 320)
    draw_LeftTower_Trapdoor_TopView(xInitial + 27, yInitial + 27);  //(127, 327)

}

                        /**********************************************************************/
//left tower ruined
void draw_LeftTower_Ruined_TopView() {

    //xInitial = 100;
    //yInitial = 300;

    draw_LeftTower_Ruined_Bottom_TopView(xInitial + 110, yInitial + 25);//(200, 325)
    draw_LeftTower_Ruined_Head_TopView(xInitial + 115, yInitial + 30);  //(205, 330)

}

                        /**********************************************************************/
//middle tower
void draw_MiddleTower_TopView() {

    //xInitial = 100;
    //yInitial = 300;

    //draws the left middle tower
    draw_MiddleTower_Bottom_Crown_TopView(xInitial + 190, yInitial + 25);   //(290, 325)
    draw_MiddleRight_Tower_Crown_TopView(xInitial + 197.5, yInitial + 32.5);//(297.5, 332.5)
    draw_MiddleTower_Banner_TopView(xInitial + 197.5, yInitial + 25);       //(297.5, 325)

    //draws the right middle tower
    draw_MiddleTower_Bottom_Crown_TopView(xInitial + 320, yInitial + 25);   //(420, 325)
    draw_MiddleRight_Tower_Crown_TopView(xInitial + 327.5, yInitial + 32.5);//(427.5, 332.5)
    draw_MiddleTower_Banner_TopView(xInitial + 327.5, yInitial + 25);       //(427.5, 325)

}

                        /**********************************************************************/
//right tower
void draw_RightTower_TopView() {

    //xInitial = 100;
    //yInitial = 300;

    draw_RightTower_Bottom_TopView(xInitial + 415, yInitial + 10);          //(515, 310)
    draw_MiddleRight_Tower_Crown_TopView(xInitial + 431.5, yInitial + 31);  //(531.5, 331)

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                             Draws the arc bridge it self                                             *
*                                                                                                                      *
***********************************************************************************************************************/

//outside crown spikes part
void draw_ArcBridge_Border_Spikes_Part_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 5, y, 0);        //     adds 5px width
    glVertex3f(x + 5, y + 5, 0);    //     adds 5px height
    glVertex3f(x, y + 5, 0);        //     removes 5px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

                        /**********************************************************************/
//arc bridge border
void draw_ArcBridge_Border_TopView(GLfloat x, GLfloat y, GLfloat size) {

    for (GLfloat i = x; i < x + size; i += 5) {

        draw_ArcBridge_Border_Spikes_Part_TopView(i, y);

    }

}

/***********************************************************************************************************************
************************************************************************************************************************
************************************Sets the origin point position of the arc bridge************************************
************************************************************************************************************************
***********************************************************************************************************************/

//arc bridge
void draw_ArcBridge_TopView() {

    //xInitial = 100;
    //yInitial = 300;

    draw_ArcBridge_Border_TopView(xInitial + 60, yInitial + 30, 50);    //(160, 330)
    draw_ArcBridge_Border_TopView(xInitial + 60, yInitial + 45, 50);    //(160, 345)

    draw_ArcBridge_Border_TopView(xInitial + 140, yInitial + 30, 50);   //(230, 330)
    draw_ArcBridge_Border_TopView(xInitial + 140, yInitial + 45, 50);   //(230, 345)

    draw_ArcBridge_Border_TopView(xInitial + 350, yInitial + 30, 65);   //(450, 330)
    draw_ArcBridge_Border_TopView(xInitial + 350, yInitial + 45, 65);   //(450, 345)

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                          Draws the arc bridge ruined it self                                         *
*                                                                                                                      *
***********************************************************************************************************************/

//arc bridge border ruined
void draw_ArcBridge_Border_Ruined_TopView(/*values*/) {}

                        /**********************************************************************/
//arc bridge path ruined
void draw_ArcBridge_Path_Ruined_TopView(/*values*/) {}

/***********************************************************************************************************************
*                                                                                                                      *
*                                Sets the origin point position of the arc bridge ruined                               *
*                                                                                                                      *
***********************************************************************************************************************/

///arc bridge ruined
void draw_ArcBridge_Ruined_TopView(/*values*/) {}

/***********************************************************************************************************************
*                                                                                                                      *
*                                       Draws the middle towers connection it self                                     *
*                                                                                                                      *
***********************************************************************************************************************/

//wall edification (middle towers connection)
void draw_WallEdification_RoofTiles_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 2.5, y, 0);      //     adds 2.5px width
    glVertex3f(x + 2.5, y + 2.5, 0);//     adds 2.5px height
    glVertex3f(x, y + 2.5, 0);      //     removes 2.5px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

//wall edification (middle towers connection)
void draw_WallEdification_Roof_TopView(GLfloat x, GLfloat y, GLfloat size, GLfloat height) {

    for (GLfloat h = y; h < y + height; h += 2.5) {

        for (GLfloat i = x; i < x + size; i += 2.5) {

            draw_WallEdification_RoofTiles_TopView(i, h);
            draw_WallEdification_RoofTiles_TopView(i, h);

        }

    }

}

/***********************************************************************************************************************
************************************************************************************************************************
*****************************Sets the origin point position of the middle towers connection*****************************
************************************************************************************************************************
***********************************************************************************************************************/

//middle towers connection
void draw_MiddleTowers_connection_TopView() {

    //xInitial = 100;
    //yInitial = 300;

    draw_WallEdification_Roof_TopView(xInitial + 220, yInitial + 35, 100, 20);  //(320, 335)

    draw_WallEdification_Roof_TopView(xInitial + 195, yInitial + 55, 150, 25);  //(295, 355)

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                Draws the gate it self                                                *
*                                                                                                                      *
***********************************************************************************************************************/

//gate head
void draw_Gate_Head_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 100, y, 0);      //     adds 100px width
    glVertex3f(x + 100, y + 5, 0);  //     adds 100px height
    glVertex3f(x, y + 5, 0);        //     removes 5px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

                        /**********************************************************************/
//flag holder (gate)
void draw_FlagHolder_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 10, y, 0);       //     adds 10px width
    glVertex3f(x + 10, y + 10, 0);  //     adds 10px height
    glVertex3f(x, y + 10, 0);       //     removes 10px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

                        /**********************************************************************/
//flag (gate)
void draw_Flag_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 5, y - 5, 0);    //     adds 5px width and removes 5px height

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

/***********************************************************************************************************************
************************************************************************************************************************
***************************************Sets the origin point position of the gate***************************************
************************************************************************************************************************
***********************************************************************************************************************/

//gate
void draw_Gate_TopView() {

    //xInitial = 100;
    //yInitial = 300;

    draw_Gate_Head_TopView(xInitial + 220, yInitial + 30);  //(320, 330)
    draw_FlagHolder_TopView(xInitial + 215, yInitial + 20); //(315, 320)
    draw_FlagHolder_TopView(xInitial + 315, yInitial + 20); //(415, 320)
    draw_Flag_TopView(xInitial + 222.5, yInitial + 22.5);   //(322.5, 322.5)
    draw_Flag_TopView(xInitial + 317.5, yInitial + 22.5);   //(417.5, 322.5)

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                           Draws the entrance path it self                                            *
*                                                                                                                      *
***********************************************************************************************************************/

//gargoyles
void draw_Gargoyles_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 10, y, 0);       //     adds 10px width
    glVertex3f(x + 10, y + 10, 0);  //     adds 10px height
    glVertex3f(x, y + 10, 0);       //     removes 10px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

/***********************************************************************************************************************
************************************************************************************************************************
**********************************Sets the origin point position and draw the gargoyles*********************************
************************************************************************************************************************
***********************************************************************************************************************/

//entrance gargoyles
void draw_EntranceGargoyles_TopView() {

    //xInitial = 100;
    //yInitial = 300;

    draw_Gargoyles_TopView(xInitial + 220, yInitial - 10);  //(320, 90)
    draw_Gargoyles_TopView(xInitial + 310, yInitial - 10);  //(410, 90)

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                            Draws the deliver road it self                                            *
*                                                                                                                      *
***********************************************************************************************************************/

//delivery road connection
void draw_Delivery_StairWay_Steps_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + 20, y, 0);       //     adds 20px width
    glVertex3f(x + 20, y + 5, 0);   //     adds 20px height
    glVertex3f(x, y + 5, 0);        //     removes 5px width

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

//wall edification (middle towers connection)
void draw_Delivery_StairWay_TopView(GLfloat x, GLfloat y) {

    for (GLfloat i = y; i < y + 25; i += 5) {

        draw_Delivery_StairWay_Steps_TopView(x, i);
        draw_Delivery_StairWay_Steps_TopView(x, i);

    }

}

                        /**********************************************************************/
//roundabout outside
void draw_Delivery_Roundabout_Outside_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    draw_Curve(x, y, 0, 2 * PI, 7.5, 7.5);  //Center (x, y)

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

//roundabout inside
void draw_Delivery_Roundabout_Inside_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    draw_Curve(x, y, 0, 2 * PI, 2.5, 2.5);  //Center (x, y)

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

/***********************************************************************************************************************
************************************************************************************************************************
************************************Sets the origin point position of the deliver road**********************************
************************************************************************************************************************
***********************************************************************************************************************/

//delivery connection
void draw_Delivery_TopView() {

    //xInitial = 100;
    //yInitial = 300;

    draw_Delivery_StairWay_TopView(xInitial + 255, yInitial + 165);             //(355, 465)
    draw_Delivery_Roundabout_Outside_TopView(xInitial + 265, yInitial + 137.5); //(365, 437.5)
    draw_Delivery_Roundabout_Inside_TopView(xInitial + 265, yInitial + 137.5);  //(365, 437.5)

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                            Draws the castle walls it self                                            *
*                                                                                                                      *
***********************************************************************************************************************/

//castle front left wall
void draw_Castle_LeftFrontWall_TopView(/*values*/) {}
//castle right front wall
void draw_Castle_RightFrontWall_TopView(/*values*/) {}
//castle left wall
void draw_Castle_LeftWall_TopView(/*values*/) {}
//castle right wall
void draw_Castle_RightWall_TopView(/*values*/) {}
//castle back wall
void draw_Castle_BackWall_TopView(/*values*/) {}

//castle entrance tower top
void draw_Castle_Entrance_Tower_Top_TopView(/*values*/) {}

/***********************************************************************************************************************
*                                                                                                                      *
*                                   Sets the origin point position of the castle walls                                 *
*                                                                                                                      *
***********************************************************************************************************************/

///castle walls
void draw_Castle_Walls_TopView(/*values*/) {}

/***********************************************************************************************************************
*                                                                                                                      *
*                                Sets the origin point position and draw the castle roads                              *
*                                                                                                                      *
***********************************************************************************************************************/



//horizontal and vertical road


///castle road
void draw_Castle_Road_TopView(/*values*/) {}

/***********************************************************************************************************************
*                                                                                                                      *
*                                          Draws the old castle walls it self                                          *
*                                                                                                                      *
***********************************************************************************************************************/

//castle old tower side top
void draw_Castle_OldTower_SideTop_TopView(/*values*/) {}
//castle old tower middle top
void draw_Castle_OldTower_MiddleTop_TopView(/*values*/) {}
//castle old tower side__middle top
void draw_Castle_OldTower_SideMiddle_Connection_TopView(/*values*/) {}

/***********************************************************************************************************************
*                                                                                                                      *
*                                 Sets the origin point position of the old castle walls                               *
*                                                                                                                      *
***********************************************************************************************************************/

///castle old tower
void draw_Castle_OldTower_TopView(/*values*/) {}

/***********************************************************************************************************************
*                                                                                                                      *
*                                     Draws the carriage castle entrance it self                                       *
*                                                                                                                      *
***********************************************************************************************************************/

//car Carriage entrance ramp
void draw_Carriage_Entrance_Ramp_TopView(/*values*/) {}
//car Carriage entrance side wall
void draw_Carriage_Entrance_SideWall_TopView(/*values*/) {}
//car Carriage entrance back wall
void draw_Carriage_Entrance_BackWall_TopView(/*values*/) {}

/***********************************************************************************************************************
*                                                                                                                      *
*                            Sets the origin point position of the carriage castle entrance                            *
*                                                                                                                      *
***********************************************************************************************************************/

///car Carriage entrance
void draw_Carriage_Entrance_TopView(/*values*/) {}

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
	glColor3f(0.0, 0.0, 0.0);

	//call the function with the original point position value -> (x, y, 0)
/***********************************************************************************************************************
*                                                                                                                      *
*                  IMPORTANT: because the z component is always 0, this function does not receives it                  *
*                                                                                                                      *
***********************************************************************************************************************/
	draw_RockBlock_TopView();
	draw_LeftTower_TopView(/*x, y*/);
    draw_LeftTower_Ruined_TopView(/*x, y*/);
    draw_MiddleTower_TopView(/*x, y*/);
    draw_RightTower_TopView(/*x, y*/);
    draw_ArcBridge_TopView(/*x, y*/);
    draw_ArcBridge_Ruined_TopView(/*x, y*/);
    draw_MiddleTowers_connection_TopView(/*x, y*/);
    draw_Gate_TopView(/*x, y*/);
    draw_EntranceGargoyles_TopView(/*x, y*/);
    draw_Delivery_TopView(/*x, y*/);
    draw_Castle_Walls_TopView(/*x, y*/);
    draw_Castle_Road_TopView(/*x, y*/);
    draw_Castle_OldTower_TopView(/*x, y*/);
    draw_Carriage_Entrance_TopView(/*x, y*/);

	//send the scene to be rendered
	glFlush();

}

// Initialization routine.
void setup(void) {

	//set the color of the background
	glClearColor(1.0, 1.0, 1.0, 0.0);

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
	glOrtho(0.0, 800, 0.0, 1000, -1.0, 1.0);

	glMatrixMode(GL_MODELVIEW);
}

//keyboard input function
void keyInput(unsigned char key, int x, int y) {

	switch(key) {

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
	glutInitWindowSize(800, 1000);
	//sets the position of the window based on the top left corner
	glutInitWindowPosition(100, 20);
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