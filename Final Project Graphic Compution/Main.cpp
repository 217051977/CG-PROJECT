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

double B_RED = 1, B_GREEN = 1, B_BLUE = 1, B_ALPHA = 0;
double D_RED = 0, D_GREEN = 0, D_BLUE = 0;
double X_WINDOW_SIZE = 800, Y_WINDOW_SIZE = 1000;
double X_WINDOW_POSITION = 100, Y_WINDOW_POSITION = 20;
GLfloat X_MIN_VIEW = 0, X_MAX_VIEW = 1000, Y_MIN_VIEW = 0, Y_MAX_VIEW = 1000, Z_MIN_VIEW = -1000, Z_MAX_VIEW = 1000;
GLfloat X_INITIAL = 100, Y_INITIAL = 300;

/***********************************************************************************************************************
************************************************************************************************************************
******************************************************Create Faces******************************************************
************************************************************************************************************************
***********************************************************************************************************************/
void create_Bot_Face() {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	//Bot

	glVertex3f(0, 0, 0);
	glVertex3f(1, 0, 0);
	glVertex3f(1, 1, 0);
	glVertex3f(0, 1, 0);

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

void create_Left_Face() {

	//left

	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);
	glVertex3f(0, 1, 0);
	glVertex3f(0, 1, 1);
	glVertex3f(0, 0, 1);

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

void create_Front_Face() {

	//front

	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);
	glVertex3f(1, 0, 0);      //     adds 2.5px width
	glVertex3f(1, 0, 1);//     adds 2.5px height
	glVertex3f(0, 0, 1);      //     removes 2.5px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

/***********************************************************************************************************************
************************************************************************************************************************
****************************************************Draw roof tiles*****************************************************
************************************************************************************************************************
***********************************************************************************************************************/
//With squares
void draw_RoofTiles_Square_TopView() {

	//top
	glPushMatrix();
	glTranslatef(0, 0, 0.5);
	glScalef(2.5, 2.5, 1);
	create_Bot_Face();
	glPopMatrix();

	//bot

	glPushMatrix();
	glScalef(2.5, 2.5, 1);
	create_Bot_Face();
	glPopMatrix();

	//front

	glPushMatrix();
	glScalef(2.5, 1, 0.5);
	create_Front_Face();
	glPopMatrix();

	//back

	glPushMatrix();
	glTranslatef(0, 0, 0.5);
	glScalef(2.5, 1, 0.5);
	create_Front_Face();
	glPopMatrix();

	//left

	glPushMatrix();
	glScalef(1, 2.5, 0.5);
	create_Left_Face();
	glPopMatrix();

	//right

	glPushMatrix();
	glTranslatef(0, 0, 0.5);
	glScalef(1, 2.5, 0.5);
	create_Left_Face();
	glPopMatrix();

	//set the drawing to be rendered


}

/***********************************************************************************************************************
************************************************************************************************************************
******************************************************Draw Circles******************************************************
************************************************************************************************************************
***********************************************************************************************************************/

void draw_2_Circle(GLfloat starAngle, GLfloat finalAngle, GLfloat xSize, GLfloat ySize) {

	for (GLfloat i = starAngle; i < finalAngle; i += 0.0001) {

		glVertex3f(xSize * cosf(i), ySize * sinf(i), 0);

	}

}

void draw_3_Circle(GLfloat starAngle, GLfloat finalAngle, GLfloat xSize, GLfloat ySize, GLfloat height) {

    for (GLfloat i = starAngle; i < finalAngle; i += 0.0001) {

        glVertex3f(xSize * cosf(i), ySize * sinf(i), height);

    }

}

void draw_Circle(GLfloat x, GLfloat y, GLfloat starAngle, GLfloat finalAngle, GLfloat xSize, GLfloat ySize) {

	for (GLfloat i = starAngle; i < finalAngle; i += 0.0001) {

		glVertex3f(x + (xSize * cosf(i)), y + (ySize * sinf(i)), 0);

	}

}

/**********************************************************************/
//inverted circle
void draw_Inverted_Circle(GLfloat x, GLfloat y, GLfloat starAngle, GLfloat finalAngle, GLfloat xSize, GLfloat ySize) {

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
void draw_Left_RockBlock_TopView() {

	//sets the beginning of the draw
	glBegin(GL_LINE_LOOP);

	glVertex3f(34, 0, 0);
	glVertex3f(32, 0.25, 0);
	glVertex3f(30, 0.5, 0);
	glVertex3f(28, 0.75, 0);
	glVertex3f(26, 1, 0);
	glVertex3f(20, 5, 0);
	glVertex3f(10, 12, 0);
	glVertex3f(5, 20, 0);
	glVertex3f(2.5, 40, 0);
	glVertex3f(0, 45, 0);
	glVertex3f(2.5, 50, 0);
	glVertex3f(5, 55, 0);
	glVertex3f(7.5, 65, 0);
	glVertex3f(15, 75, 0);

	draw_Inverted_Circle(40, 40, PI / 2, -(PI) / 2, 40, 40);  //Center (x, y)

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

//left__middle connection
void draw_LeftMiddle_RockBlock_Connection_TopView() {

	//sets the beginning of the draw
	glBegin(GL_LINE_LOOP);


	draw_Inverted_Circle(-40, 20, (5 * PI) / 24, -PI / 3, 40, 40);  //Center (x, y)

	//based on the position of the original point makes calculus to create the other points
	//so it has the pretended shape
	glVertex3f(10, -5, 0);
	glVertex3f(30, 0, 0);
	glVertex3f(37.5, -10, 0);
	glVertex3f(50, -15, 0);
	glVertex3f(60, -5, 0);
	glVertex3f(70, 0, 0);
	glVertex3f(90, -5, 0);
	glVertex3f(97, -5, 0);
	glVertex3f(95, -2, 0);
	glVertex3f(105, 38, 0);
	glVertex3f(110, 48, 0);
	glVertex3f(115, 58, 0);
	glVertex3f(117, 60, 0);

	glVertex3f(100, 50, 0);
	glVertex3f(90, 57.5, 0);
	glVertex3f(60, 60, 0);
	glVertex3f(50, 50, 0);
	glVertex3f(30, 40, 0);
	glVertex3f(10, 35, 0);

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

//middle rock block
void draw_Middle_RockBlock_TopView() {

	glBegin(GL_LINE_LOOP);

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

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

//right__middle connection
void draw_RightMiddle_RockBlock_Connection_TopView() {

	//sets the beginning of the draw
	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);
	glVertex3f(10, -12.5, 0);  //    adds 40px height
	glVertex3f(20, -8, 0);  //    adds 40px height
	glVertex3f(25, -5, 0);
	glVertex3f(20, 10, 0);
	glVertex3f(18, 25, 0);
	glVertex3f(25, 40, 0);
	glVertex3f(40, 50, 0);
	glVertex3f(50, 60, 0);
	glVertex3f(35, 55, 0);       //    removes 35px width
	glVertex3f(20, 62, 0);       //    removes 35px width
	glVertex3f(15, 60, 0);       //    removes 35px width
	glVertex3f(-5, 68, 0);       //    removes 35px width

	glVertex3f(-10, 60, 0);       //    removes 35px width
	glVertex3f(-5, 55, 0);       //    removes 35px width
	glVertex3f(0, 45, 0);       //    removes 35px width
	glVertex3f(10, 30, 0);       //    removes 35px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

//right
void draw_Right_RockBlock_TopView() {

	//sets the beginning of the draw
	glBegin(GL_LINE_LOOP);

	glVertex3f(15, 30, 0);
	glVertex3f(5, 35, 0);
	glVertex3f(0, 50, 0);
	glVertex3f(-2, 65, 0);
	glVertex3f(5, 80, 0);
	glVertex3f(20, 90, 0);
	glVertex3f(30, 100, 0);      //    removes 135px width
	glVertex3f(65, 105, 0);
	glVertex3f(100, 100, 0);
	glVertex3f(110, 95, 0);
	glVertex3f(120, 85, 0);
	glVertex3f(125, 75, 0);
	glVertex3f(130, 70, 0);
	glVertex3f(132, 65, 0);
	glVertex3f(130, 60, 0);
	glVertex3f(135, 50, 0);//    adds 100px height
	glVertex3f(125, 20, 0);
	glVertex3f(115, 20, 0);
	glVertex3f(107, 10, 0);
	glVertex3f(100, 3, 0);
	glVertex3f(67.5, 0, 0);      //    adds 135px width
	glVertex3f(50, 5, 0);
	glVertex3f(30, 5, 0);
	glVertex3f(20, 15, 0);

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

/**********************************************************************/
//delivery path
void draw_DeliveryPath_RockBlock_TopView() {

	//sets the beginning of the draw
	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);
	glVertex3f(40, 0, 0);       //    adds 40px width
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

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

/**********************************************************************/
//entrance path full
void draw_EntrancePath_Full_RockBlock_TopView() {

	//sets the beginning of the draw
	glBegin(GL_LINE_LOOP);

	glVertex3f(10, 0, 0);
	glVertex3f(75, 0, 0);
	glVertex3f(75, -5, 0);
	draw_Circle(74, -15, (PI / 2), ((3 * PI) / 2), 2, 5);
	glVertex3f(80, -25, 0);
	glVertex3f(78, -30, 0);
	glVertex3f(95, -40, 0);
	glVertex3f(110, -60, 0);
	glVertex3f(110, -70, 0);
	glVertex3f(111, -75, 0);
	glVertex3f(115, -80, 0);
	glVertex3f(119, -85, 0);
	glVertex3f(120, -90, 0);
	glVertex3f(130, -100, 0);
	glVertex3f(120, -110, 0);
	glVertex3f(118, -112, 0);
	glVertex3f(115, -112, 0);
	glVertex3f(108, -120, 0);
	glVertex3f(70, -130, 0);
	glVertex3f(50, -128, 0);
	glVertex3f(20, -140, 0);
	glVertex3f(-5, -137, 0);
	glVertex3f(0, -150, 0);
	glVertex3f(-5, -165, 0);
	glVertex3f(-5, -170, 0);
	glVertex3f(-40, -170, 0);
	glVertex3f(-50, -160, 0);
	glVertex3f(-52, -155, 0);
	glVertex3f(-55, -150, 0);
	glVertex3f(-52, -145, 0);
	glVertex3f(-50, -130, 0);
	glVertex3f(-40, -130, 0);
	glVertex3f(-30, -125, 0);
	glVertex3f(-27.5, -120, 0);
	glVertex3f(-30, -110, 0);
	glVertex3f(-15, -105, 0);
	glVertex3f(-10, -95, 0);
	glVertex3f(5, -90, 0);
	glVertex3f(30, -100, 0);
	glVertex3f(35, -105, 0);
	glVertex3f(50, -95, 0);
	glVertex3f(75, -90, 0);
	glVertex3f(60, -80, 0);
	glVertex3f(67, -67, 0);
	glVertex3f(65, -60, 0);
	glVertex3f(45, -50, 0);
	glVertex3f(35, -20, 0);

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

/**********************************************************************/
//entrance path
void draw_Castle_RockBlock_TopView() {

	//sets the beginning of the draw
	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 35, 0);
	glVertex3f(5, 30, 0);
	glVertex3f(30, 20, 0);
	glVertex3f(54, 0, 0);
	glVertex3f(60, -5, 0);
	glVertex3f(90, -10, 0);
	glVertex3f(300, 0, 0);
	glVertex3f(330, 10, 0);
	glVertex3f(340, 20, 0);
	glVertex3f(360, 45, 0);
	glVertex3f(370, 70, 0);
	glVertex3f(380, 80, 0);
	glVertex3f(395, 95, 0);
	glVertex3f(390, 117, 0);
	glVertex3f(400, 120, 0);
	glVertex3f(415, 145, 0);
	glVertex3f(420, 150, 0);
	glVertex3f(400, 175, 0);
	glVertex3f(410, 210, 0);
	glVertex3f(390, 240, 0);
	glVertex3f(390, 260, 0);
	glVertex3f(380, 280, 0);
	glVertex3f(390, 290, 0);
	glVertex3f(377, 310, 0);
	glVertex3f(360, 325, 0);
	glVertex3f(340, 330, 0);
	glVertex3f(330, 340, 0);
	glVertex3f(300, 350, 0);
	glVertex3f(280, 370, 0);
	glVertex3f(260, 370, 0);
	glVertex3f(240, 390, 0);
	glVertex3f(200, 400, 0);
	glVertex3f(188.5, 385, 0);
	glVertex3f(130, 390, 0);
	glVertex3f(80, 380, 0);
	glVertex3f(65, 385, 0);
	glVertex3f(35, 370, 0);
	glVertex3f(30, 340, 0);
	glVertex3f(20, 350, 0);
	glVertex3f(5, 330, 0);
	glVertex3f(5, 320, 0);
	glVertex3f(-10, 290, 0);
	glVertex3f(-5, 250, 0);
	glVertex3f(-20, 220, 0);
	glVertex3f(-30, 200, 0);
	glVertex3f(-23, 175, 0);
	glVertex3f(-30, 130, 0);
	glVertex3f(-15, 90, 0);
	glVertex3f(-5, 80, 0);
	glVertex3f(5, 60, 0);
	glVertex3f(0, 40, 0);

	//sets the ending of the draw
	glEnd();

	glPushMatrix();
	glTranslatef(188.5, 175, 150);
	//sets the beginning of the draw
	glBegin(GL_LINE_LOOP);

	draw_2_Circle(0, 2 * PI, 205, 205);

	//sets the ending of the draw
	glEnd();

	glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
*******************************Sets the origin point position of each the rock block draw*******************************
************************************************************************************************************************
***********************************************************************************************************************/

void draw_RockBlock_TopView() {

	//X_INITIAL = 100;
	//Y_INITIAL = 300;

    glPushMatrix();
    glTranslatef(X_INITIAL, Y_INITIAL, 0);
	draw_Left_RockBlock_TopView();                      //(100 ,300)
    glPopMatrix();

	glPushMatrix();
	glTranslatef(X_INITIAL + 80, Y_INITIAL + 20, 0);
	draw_LeftMiddle_RockBlock_Connection_TopView();     //(180 ,320)
	glPopMatrix();

	glPushMatrix();
	glTranslatef(X_INITIAL + 180, Y_INITIAL - 50, 0);
	draw_Middle_RockBlock_TopView();                   //(280 ,250)
	glPopMatrix();

	glPushMatrix();
	glTranslatef(X_INITIAL + 360, Y_INITIAL + 20, 0);
	draw_RightMiddle_RockBlock_Connection_TopView();   //(460, 320)
	glPopMatrix();

	glPushMatrix();
	glTranslatef(X_INITIAL + 380, Y_INITIAL - 20, 0);
	draw_Right_RockBlock_TopView();                    //(495, 280)
	glPopMatrix();

	glPushMatrix();
	glTranslatef(X_INITIAL + 245, Y_INITIAL + 90, 0);
	draw_DeliveryPath_RockBlock_TopView();             //(345, 390)
	glPopMatrix();

	glPushMatrix();
	glTranslatef(X_INITIAL + 240, Y_INITIAL - 50, 0);
	draw_EntrancePath_Full_RockBlock_TopView();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(X_INITIAL + 80, Y_INITIAL + 190, 0);
	draw_Castle_RockBlock_TopView();
	glPopMatrix();



}

/***********************************************************************************************************************
*                                                                                                                      *
*                                             Draws the left tower it self                                             *
*                                                                                                                      *
***********************************************************************************************************************/
/*
//crown spikes part
void draw_LeftTower_Crown_Spikes_Part_TopView(GLfloat x, GLfloat y) {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	//top

	//sets a point in the position (x, y, 0)
	glVertex3f(x, y, 0);
	//based on the position of the original point makes calculus to create the other points
	//so it has the pretended shape
	glVertex3f(x + 40, y, 0);      //     adds 2.5px width
	glVertex3f(x + 40, y + 40, 0);//     adds 2.5px height
	glVertex3f(x, y + 40, 0);      //     removes 2.5px width

	//sets the ending of the draw
	glEnd();

	//bot

	glBegin(GL_LINE_LOOP);

	//sets a point in the position (x, y, 0)
	glVertex3f(x, y, 20);
	//based on the position of the original point makes calculus to create the other points
	//so it has the pretended shape
	glVertex3f(x + 40, y, 20);      //     adds 2.5px width
	glVertex3f(x + 40, y + 40, 20);//     adds 2.5px height
	glVertex3f(x, y + 40, 20);      //     removes 2.5px width

	//sets the ending of the draw
	glEnd();

	//front

	glBegin(GL_LINE_LOOP);

	//sets a point in the position (x, y, 0)
	glVertex3f(x, y, 0);
	//based on the position of the original point makes calculus to create the other points
	//so it has the pretended shape
	glVertex3f(x + 40, y, 0);      //     adds 2.5px width
	glVertex3f(x + 40, y, 20);//     adds 2.5px height
	glVertex3f(x, y, 20);      //     removes 2.5px width

	//sets the ending of the draw
	glEnd();

	//back

	glBegin(GL_LINE_LOOP);

	glVertex3f(x, y + 40, 0);      //     adds 2.5px width
	glVertex3f(x + 40, y + 40, 0);//     adds 2.5px height
	glVertex3f(x + 40, y + 40, 20);//     adds 2.5px height
	glVertex3f(x, y + 40, 20);      //     adds 2.5px width

	//sets the ending of the draw
	glEnd();

	//left

	glBegin(GL_LINE_LOOP);

	glVertex3f(x, y, 0);      //     adds 2.5px width
	glVertex3f(x, y + 40, 0);//     adds 2.5px height
	glVertex3f(x, y + 40, 20);//     adds 2.5px height
	glVertex3f(x, y, 20);      //     adds 2.5px width

	//sets the ending of the draw
	glEnd();

	//right

	glBegin(GL_LINE_LOOP);

	glVertex3f(x + 40, y, 0);      //     adds 2.5px width
	glVertex3f(x + 40, y + 40, 0);//     adds 2.5px height
	glVertex3f(x + 40, y + 40, 20);//     adds 2.5px height
	glVertex3f(x + 40, y, 20);      //     adds 2.5px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}
*/
//crown spikes part
void draw_LeftTower_Crown_Spikes_Part_TopView() {

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
void draw_LeftTower_Crown_TopView() {

	//makes a cycle where since the point 5px away from the origin in the x axis
	//until it reach 5px before the end of the x axis draw
	for (GLfloat i = 0; i < 40; i += 5) {

        glPushMatrix();
        glTranslatef(i, 0, 0);
		draw_LeftTower_Crown_Spikes_Part_TopView();
        glTranslatef(0, 35, 0);
		draw_LeftTower_Crown_Spikes_Part_TopView();
		glPopMatrix();

	}

	//makes a cycle where since the point 5px away from the origin in the y axis
	//until it reach 5px before the end of the y axis draw
	for (GLfloat i = 5; i < 35; i += 5) {

        glPushMatrix();
        glTranslatef(0, i, 0);
        draw_LeftTower_Crown_Spikes_Part_TopView();
        glTranslatef(35, 0, 0);
        draw_LeftTower_Crown_Spikes_Part_TopView();
        glPopMatrix();

	}

}

/**********************************************************************/
//trapdoor
void draw_LeftTower_Trapdoor_TopView() {

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
void draw_LeftTower_Ruined_Bottom_TopView() {

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
void draw_LeftTower_Ruined_Stairway_Steps_TopView() {

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
void draw_LeftTower_Ruined_Stairway_Steps_Vertical_TopView() {

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
void draw_LeftTower_Ruined_Stairway_TopView() {

	//makes a cycle where since the point 5px away from the origin in the x axis
	//until it reach 5px before the end of the x axis draw
	for (GLfloat i = 0; i < 9; i += 3.5) {

        glPushMatrix();
        glTranslatef(i, 0, 0);
        draw_LeftTower_Ruined_Stairway_Steps_TopView();
        glTranslatef(i, 11, 0);
        draw_LeftTower_Ruined_Stairway_Steps_TopView();
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
void draw_LeftTower_Ruined_Head_TopView() {

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
    draw_LeftTower_Ruined_Stairway_TopView();
    glPopMatrix();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                            Draws the middle tower it self                                            *
*                                                                                                                      *
***********************************************************************************************************************/

//outside crown spikes part
void draw_MiddleTower_Bottom_Crown_Spikes_Part_TopView() {

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
void draw_MiddleTower_Bottom_Crown_TopView() {

	//makes a cycle where since the point 5px away from the origin in the x axis
	//until it reach 5px before the end of the x axis draw
	for (GLfloat i = 0; i < 30; i += 5) {

        glPushMatrix();
        glTranslatef(i, 0, 0);
		draw_MiddleTower_Bottom_Crown_Spikes_Part_TopView();
        glTranslatef(0, 25, 0);
		draw_MiddleTower_Bottom_Crown_Spikes_Part_TopView();
		glPopMatrix();

	}

	//makes a cycle where since the point 5px away from the origin in the y axis
	//until it reach 5px before the end of the y axis draw
	for (GLfloat i = 5; i < 25; i += 5) {

        glPushMatrix();
        glTranslatef(0, i, 0);
        draw_MiddleTower_Bottom_Crown_Spikes_Part_TopView();
        glTranslatef(25, 0, 0);
        draw_MiddleTower_Bottom_Crown_Spikes_Part_TopView();
        glPopMatrix();

	}

}

/**********************************************************************/
//inside crown spikes part
void draw_MiddleRight_Tower_Crown_Spikes_Part_TopView() {

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
void draw_MiddleRight_Tower_Crown_TopView() {

	//makes a cycle where since the point 5px away from the origin in the x axis
	//until it reach 5px before the end of the x axis draw
	for (GLfloat i = 0; i < 15; i += 5) {

        glPushMatrix();
        glTranslatef(i, 0, 0);
        draw_MiddleRight_Tower_Crown_Spikes_Part_TopView();
        glTranslatef(0, 10, 0);
        draw_MiddleRight_Tower_Crown_Spikes_Part_TopView();
        glPopMatrix();

	}

	//makes a cycle where since the point 5px away from the origin in the y axis
	//until it reach 5px before the end of the y axis draw
	for (GLfloat i = 5; i < 10; i += 5) {

        glPushMatrix();
        glTranslatef(0, i, 0);
        draw_MiddleRight_Tower_Crown_Spikes_Part_TopView();
        glTranslatef(10, 0, 0);
        draw_MiddleRight_Tower_Crown_Spikes_Part_TopView();
        glPopMatrix();

	}

}

/**********************************************************************/
//banner
void draw_MiddleTower_Banner_TopView() {

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
void draw_RightTower_Bottom_TopView() {

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
void draw_LeftTower_TopView() {

	glPushMatrix();
	glTranslatef(X_INITIAL + 20, Y_INITIAL + 20, 0);
	draw_LeftTower_Crown_TopView();     //(120, 320)
    glTranslatef(7, 7, 0);
	draw_LeftTower_Trapdoor_TopView();  //(127, 327)
	glPopMatrix();

}

/**********************************************************************/
//left tower ruined
void draw_LeftTower_Ruined_TopView() {

    glPushMatrix();
    glTranslatef(X_INITIAL + 110, Y_INITIAL + 25, 0);
    draw_LeftTower_Ruined_Bottom_TopView();
    glTranslatef(5, 5, 0);
    draw_LeftTower_Ruined_Head_TopView();
    glPopMatrix();

}

/**********************************************************************/
//middle tower
void draw_MiddleTower_TopView() {

	//X_INITIAL = 100;
	//Y_INITIAL = 300;


    glPushMatrix();
    glTranslatef(X_INITIAL + 190, Y_INITIAL + 25, 0);
	//draws the left middle tower
	draw_MiddleTower_Bottom_Crown_TopView();   //(290, 325)
    glTranslatef(7.5, 7.5, 0);
	draw_MiddleRight_Tower_Crown_TopView();//(297.5, 332.5)
    glPopMatrix();

    glPushMatrix();
    glTranslatef(X_INITIAL + 197.5, Y_INITIAL + 25, 0);
	draw_MiddleTower_Banner_TopView();       //(297.5, 325)
	glPopMatrix();

    glPushMatrix();
    glTranslatef(X_INITIAL + 320, Y_INITIAL + 25, 0);
    //draws the left middle tower
    draw_MiddleTower_Bottom_Crown_TopView();   //(290, 325)
	//draws the right middle tower
    glTranslatef(7.5, 7.5, 0);
    draw_MiddleRight_Tower_Crown_TopView();//(427.5, 332.5)
    glPopMatrix();

    glPushMatrix();
    glTranslatef(X_INITIAL + 327.5, Y_INITIAL + 25, 0);
	draw_MiddleTower_Banner_TopView();       //(427.5, 325)
    glPopMatrix();

}

/**********************************************************************/
//right tower
void draw_RightTower_TopView() {

    glPushMatrix();
    glTranslatef(X_INITIAL + 400, Y_INITIAL + 10, 0);
	draw_RightTower_Bottom_TopView();          //(515, 310)
    glTranslatef(16.5, 21, 0);
    draw_MiddleRight_Tower_Crown_TopView();  //(531.5, 331)
    glPopMatrix();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                             Draws the arc bridge it self                                             *
*                                                                                                                      *
***********************************************************************************************************************/

//outside crown spikes part
void draw_ArcBridge_Border_Spikes_Part_TopView() {

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
void draw_ArcBridge_Border_TopView() {

	for (GLfloat i = 0; i < 50; i += 5) {

	    glPushMatrix();
	    glTranslatef(i, 0, 0);
		draw_ArcBridge_Border_Spikes_Part_TopView();
		glPopMatrix();

	}

}

/***********************************************************************************************************************
************************************************************************************************************************
************************************Sets the origin point position of the arc bridge************************************
************************************************************************************************************************
***********************************************************************************************************************/

//arc bridge
void draw_ArcBridge_TopView() {

	//X_INITIAL = 100;
	//Y_INITIAL = 300;

	glPushMatrix();
	glTranslatef(X_INITIAL + 60, Y_INITIAL + 30, 0);
    draw_ArcBridge_Border_TopView();
    glTranslatef(0, 15, 0);
    draw_ArcBridge_Border_TopView();
    glTranslatef(80, -15, 0);
    draw_ArcBridge_Border_TopView();
    glTranslatef(0, 15, 0);
    draw_ArcBridge_Border_TopView();
    glTranslatef(210, -15, 0);
    draw_ArcBridge_Border_TopView();
    glTranslatef(0, 15, 0);
    draw_ArcBridge_Border_TopView();
    glPopMatrix();



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
void draw_WallEdification_Roof_TopView(GLfloat width, GLfloat height) {

	for (GLfloat v = 0; v < height; v += 2.5) {

		for (GLfloat h = 0; h < width; h += 2.5) {

			glPushMatrix();
			glTranslatef(h, v, 0);
			draw_RoofTiles_Square_TopView();
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
void draw_MiddleTowers_connection_TopView() {

	//X_INITIAL = 100;
	//Y_INITIAL = 300;

	glPushMatrix();
	glTranslatef(X_INITIAL + 195, Y_INITIAL + 55, 0);
	draw_WallEdification_Roof_TopView(150, 25);  //(295, 355)
	glTranslatef(25, -20, 0);
	draw_WallEdification_Roof_TopView(100, 20);  //(320, 335)
	glPopMatrix();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                Draws the gate it self                                                *
*                                                                                                                      *
***********************************************************************************************************************/

//gate head
void draw_Gate_Head_TopView(GLfloat size) {

    glPushMatrix();
    glTranslatef(X_INITIAL, Y_INITIAL, 0);
    glScalef(size, 1, 100);
    create_Front_Face();
    glTranslatef(0, 5, 0);
    create_Front_Face();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(X_INITIAL, Y_INITIAL, 0);
    glScalef(1, 5, 100);
    create_Left_Face();
    glTranslatef(size, 0, 0);
    create_Left_Face();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(X_INITIAL, Y_INITIAL, 0);
    glScalef(size, 5, 1);
    create_Bot_Face();
    glTranslatef(0, 0, 100);
    create_Bot_Face();
    glPopMatrix();

}

/**********************************************************************/
//flag holder (gate)
void draw_FlagHolder_TopView() {

    glPushMatrix();
    glTranslatef(X_INITIAL, Y_INITIAL, 0);
	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);
	glVertex3f(10, 0, 0);       //     adds 10px width
	glVertex3f(10, 10, 0);  //     adds 10px height
	glVertex3f(0, 10, 0);       //     removes 10px width

	//sets the ending of the draw
	glEnd();

	glPopMatrix();

}

/**********************************************************************/
//flag (gate)
void draw_Flag_TopView() {

    glPushMatrix();
    glTranslatef(X_INITIAL, Y_INITIAL, 0);
	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);
	glVertex3f(5, -5, 0);    //     adds 5px width and removes 5px height

	//sets the ending of the draw
	glEnd();

    glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
***************************************Sets the origin point position of the gate***************************************
************************************************************************************************************************
***********************************************************************************************************************/

//gate
void draw_Gate_TopView() {

	//X_INITIAL = 100;
	//Y_INITIAL = 300;

	glPushMatrix();
	glTranslatef(220, 30, 0);
	draw_Gate_Head_TopView(100);  //(320, 330)
	glTranslatef(-5, -10, 0);
	draw_FlagHolder_TopView(); //(315, 320)
	glTranslatef(100, 0, 0);
	draw_FlagHolder_TopView(); //(415, 320)
	glTranslatef(-93, 2.5, 0);
	draw_Flag_TopView();   //(322.5, 322.5)
	glTranslatef(95, 0, 0);
	draw_Flag_TopView();   //(417.5, 322.5)
	glPopMatrix();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                           Draws the entrance path it self                                            *
*                                                                                                                      *
***********************************************************************************************************************/

//gargoyles
void draw_Gargoyles_TopView() {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(0, 0, 0);
	glVertex3f(10, 0, 0);       //     adds 10px width
	glVertex3f(10, 10, 0);  //     adds 10px height
	glVertex3f(0, 10, 0);       //     removes 10px width

	//sets the ending of the draw
	glEnd();

}

/***********************************************************************************************************************
************************************************************************************************************************
**********************************Sets the origin point position and draw the gargoyles*********************************
************************************************************************************************************************
***********************************************************************************************************************/

//entrance gargoyles
void draw_EntranceGargoyles_TopView() {

	glPushMatrix();
	glTranslatef(X_INITIAL + 220, Y_INITIAL - 10, 0);
	draw_Gargoyles_TopView();  //(320, 90)
	glTranslatef(90, 0, 0);
	draw_Gargoyles_TopView();  //(410, 90)
	glPopMatrix();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                            Draws the deliver road it self                                            *
*                                                                                                                      *
***********************************************************************************************************************/

void draw_FrontDoor_Tower_Body_TopView() {

    glPushMatrix();
    glTranslatef(X_INITIAL, Y_INITIAL, 0);
    glBegin(GL_LINE_LOOP);

    draw_2_Circle(0, 2 * PI, 5, 5);
    draw_3_Circle(0, 2 * PI, 5, 5, 100);

    glEnd();
    glPopMatrix();

}

void draw_FrontDoor_Tower_TopView() {

	glPushMatrix();
	glTranslatef(X_INITIAL, Y_INITIAL, 100);
	glBegin(GL_LINE_LOOP);

	draw_2_Circle(0, 2 * PI, 5, 5);
	draw_3_Circle(0, 2 * PI, 3, 3, 5);
	draw_3_Circle(0, 2 * PI, 1, 1, 10);

	glEnd();
	glPopMatrix();

}

/**********************************************************************/
void draw_FrontDoor_TopView() {

	glPushMatrix();
	glTranslatef(2.5, 2.5, 0);
	draw_FrontDoor_Tower_TopView();
	draw_FrontDoor_Tower_Body_TopView();
	glTranslatef(35, 0, 0);
	draw_FrontDoor_Tower_TopView();
	draw_FrontDoor_Tower_Body_TopView();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(7, 0, 0);
	draw_Gate_Head_TopView(26);
	glPopMatrix();



}

/***********************************************************************************************************************
************************************************************************************************************************
************************************Sets the origin point position of the deliver road**********************************
************************************************************************************************************************
***********************************************************************************************************************/
//delivery road
void draw_Delivery_TopView() {

	glPushMatrix();
	glTranslatef(247.5, 160, 0);
	draw_FrontDoor_TopView();
	glPopMatrix();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                 Draw the castle road                                                 *
*                                                                                                                      *
***********************************************************************************************************************/
//castle road horizontal
void draw_Castle_Road_TopView(GLfloat size) {

	glPushMatrix();
	glScalef(30, size, 0);
	create_Bot_Face();
	glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
***********************************Sets the origin point position of the castle roads***********************************
************************************************************************************************************************
***********************************************************************************************************************/
//castle road
void draw_Castle_Road_TopView() {

	glPushMatrix();
	glTranslatef(X_INITIAL + 252.5, Y_INITIAL + 295, 0);
	glScalef(30, 40, 0);
	create_Bot_Face();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(X_INITIAL + 252.5, Y_INITIAL + 395, 0);
	glScalef(30, 40, 0);
	create_Bot_Face();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(X_INITIAL + 252.5, Y_INITIAL + 465, 0);
	glScalef(30, 10, 0);
	create_Bot_Face();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(X_INITIAL + 373.5, Y_INITIAL + 200, 0);
	glScalef(30, 305, 0);
	create_Bot_Face();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(X_INITIAL + 133.5, Y_INITIAL + 200, 0);
	glScalef(30, 305, 0);
	create_Bot_Face();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(X_INITIAL + 163.5, Y_INITIAL + 200, 0);
	glScalef(10, 30, 0);
	create_Bot_Face();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(X_INITIAL + 363.5, Y_INITIAL + 200, 0);
	glScalef(10, 30, 0);
	create_Bot_Face();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(X_INITIAL + 163.5, Y_INITIAL + 475, 0);
	glScalef(210, 30, 0);
	create_Bot_Face();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(X_INITIAL + 163.5, Y_INITIAL + 350, 0);
	glScalef(10, 30, 0);
	create_Bot_Face();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(X_INITIAL + 203.5, Y_INITIAL + 350, 0);
	glScalef(35, 30, 0);
	create_Bot_Face();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(X_INITIAL + 298.5, Y_INITIAL + 350, 0);
	glScalef(35, 30, 0);
	create_Bot_Face();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(X_INITIAL + 363.5, Y_INITIAL + 350, 0);
	glScalef(10, 30, 0);
	create_Bot_Face();
	glPopMatrix();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                               Draw the castle courtyard                                              *
*                                                                                                                      *
***********************************************************************************************************************/
//castle courtyard
void draw_Castle_Courtyard_Limit_TopView() {

	//bot
	glPushMatrix();
	glScalef(190, 65, 1);
	create_Bot_Face();
	glPopMatrix();

}

/**********************************************************************/
//roundabout outside
void draw_Castle_Courtyard_Roundabout_Outside_TopView() {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	draw_2_Circle(0, 2 * PI, 7.5, 7.5);  //Center (x, y)

    draw_3_Circle(0, 2 * PI, 7.5, 7.5, 5);  //Center (x, y)

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

//roundabout inside
void draw_Castle_Courtyard_Roundabout_Inside_TopView() {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	draw_2_Circle(0, 2 * PI, 2.5, 2.5);  //Center (x, y)

    draw_3_Circle(0, 2 * PI, 2.5, 2.5, 10);  //Center (x, y)

	//sets the ending of the draw
	glEnd();

}

/**********************************************************************/
void draw_Castle_Courtyard_Store_TopView(GLfloat xSize, GLfloat ySize) {

	//bot
	glPushMatrix();
	glScalef(xSize, ySize, 1);
	create_Bot_Face();
	glPopMatrix();

	//top
	glPushMatrix();
	glTranslatef(0, 0, 15);
	glScalef(xSize, ySize, 1);
	create_Bot_Face();
	glPopMatrix();

	//front
	glPushMatrix();
	glScalef(xSize, 1, 15);
	create_Front_Face();
	glPopMatrix();

	//back
	glPushMatrix();
	glTranslatef(0, ySize, 0);
	glScalef(xSize, 1, 15);
	create_Front_Face();
	glPopMatrix();

	//left
	glPushMatrix();
	glScalef(1, ySize, 15);
	create_Left_Face();
	glPopMatrix();

	//right
	glPushMatrix();
	glTranslatef(xSize, 0, 0);
	glScalef(1, ySize, 15);
	create_Left_Face();
	glPopMatrix();

}

void draw_Castle_Courtyard_Road_TopView() {

	//bot
	glPushMatrix();
	glScalef(5, 5, 1);
	create_Bot_Face();
	glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
*********************************Sets the origin point position of the castle courtyard*********************************
************************************************************************************************************************
***********************************************************************************************************************/
//castle road
void draw_Castle_Courtyard_TopView() {

	glPushMatrix();
	glTranslatef(X_INITIAL + 173.5, Y_INITIAL + 200, 0);
	draw_Castle_Courtyard_Limit_TopView();

	glTranslatef(94.5, 29.5, 0);
	draw_Castle_Courtyard_Roundabout_Outside_TopView();
	draw_Castle_Courtyard_Roundabout_Inside_TopView();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(X_INITIAL + 177.5, Y_INITIAL + 230, 0);
	draw_Castle_Courtyard_Store_TopView(10, 32);

	glTranslatef(10, 22, 0);
	draw_Castle_Courtyard_Store_TopView(30, 10);

	glTranslatef(10, -32, 0);
	draw_Castle_Courtyard_Store_TopView(30, 20);

	glTranslatef(-10, -20, 0);
	draw_Castle_Courtyard_Store_TopView(40, 10);

	glTranslatef(110, 0, 0);
	draw_Castle_Courtyard_Store_TopView(20, 40);

	glTranslatef(30, 0, 0);
	draw_Castle_Courtyard_Store_TopView(20, 20);

	glTranslatef(20, 30, 0);
	draw_Castle_Courtyard_Store_TopView(12, 32);

	glTranslatef(-50, 22, 0);
	draw_Castle_Courtyard_Store_TopView(40, 10);
	glPopMatrix();

	glPushMatrix();

	for (int h = 253; h < 281; h += 5) {

		for (int v = 165; v < 210; v += 5) {

			glPushMatrix();
			glTranslatef(X_INITIAL + h, Y_INITIAL + v, 0);
			draw_Castle_Courtyard_Road_TopView();
			glPopMatrix();

		}

	}

	for (int h = 248; h < 286; h += 5) {

		for (int v = 210; v < 250; v += 5) {

			glPushMatrix();
			glTranslatef(X_INITIAL + h, Y_INITIAL + v, 0);
			draw_Castle_Courtyard_Road_TopView();
			glPopMatrix();

		}

	}

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                               Draws the castle hallway                                               *
*                                                                                                                      *
***********************************************************************************************************************/

void draw_Castle_Hallway_Full_TopView(GLfloat xSize, GLfloat ySize) {

	//bot
	glPushMatrix();
	glScalef(xSize, ySize, 1);
	create_Bot_Face();
	glPopMatrix();

	//top
	glPushMatrix();
	glTranslatef(0, 0, 40);
	glScalef(xSize, ySize, 1);
	create_Bot_Face();
	glPopMatrix();

	//front
	glPushMatrix();
	glScalef(xSize, 1, 40);
	create_Front_Face();
	glPopMatrix();

	//back
	glPushMatrix();
	glTranslatef(0, ySize, 0);
	glScalef(xSize, 1, 40);
	create_Front_Face();
	glPopMatrix();

	//left
	glPushMatrix();
	glScalef(1, ySize, 40);
	create_Left_Face();
	glPopMatrix();

	//right
	glPushMatrix();
	glTranslatef(xSize, 0, 0);
	glScalef(1, ySize, 40);
	create_Left_Face();
	glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 0, 40);
	draw_WallEdification_Roof_TopView(xSize, ySize);
    glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
**********************************Sets the origin point position of the castle hallways*********************************
************************************************************************************************************************
***********************************************************************************************************************/
//castle road
void draw_Castle_Hallway_TopView() {

	glPushMatrix();
	glTranslatef(X_INITIAL + 333.5, Y_INITIAL + 265, 0);
	draw_Castle_Hallway_Full_TopView(30, 200);

	glTranslatef(-130, 170, 0);
	draw_Castle_Hallway_Full_TopView(130, 30);
	glTranslatef(0, -170, 0);
	draw_Castle_Hallway_Full_TopView(130, 30);

	glTranslatef(-30, 0, 0);
	draw_Castle_Hallway_Full_TopView(30, 200);
	glPopMatrix();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                              Draws the castle buildings                                              *
*                                                                                                                      *
***********************************************************************************************************************/

//castle front left wall
void draw_Castle_CentralBuilding_TopView() {

	//bot
	glPushMatrix();
	glScalef(60, 60, 1);
	create_Bot_Face();
	glPopMatrix();

	//top
	glPushMatrix();
	glTranslatef(0, 0, 70);
	glScalef(60, 60, 1);
	create_Bot_Face();
	glPopMatrix();

	//front
	glPushMatrix();
	glScalef(60, 1, 70);
	create_Front_Face();
	glPopMatrix();

	//back
	glPushMatrix();
	glTranslatef(0, 60, 0);
	glScalef(60, 1, 70);
	create_Front_Face();
	glPopMatrix();

	//left
	glPushMatrix();
	glScalef(1, 60, 70);
	create_Left_Face();
	glPopMatrix();

	//right
	glPushMatrix();
	glTranslatef(60, 0, 0);
	glScalef(1, 60, 70);
	create_Left_Face();
	glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
************************************Sets the origin point position of the castle walls**********************************
************************************************************************************************************************
***********************************************************************************************************************/

//castle walls
void draw_Castle_Buildings_TopView() {

	glPushMatrix();
	glTranslatef(X_INITIAL + 238.5, Y_INITIAL + 335, 0);
	draw_Castle_CentralBuilding_TopView();
	glPopMatrix();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                          Draws the old castle walls it self                                          *
*                                                                                                                      *
***********************************************************************************************************************/

//castle old tower side top
void draw_Castle_OldTower_Roof_TopView(GLfloat size) {

    for (GLfloat i = size, h = 0; i > 1; i -= 2, h += 5) {

        draw_3_Circle(0, 2 * PI, i, i, h);

    }

}

//castle old tower side top
void draw_Castle_OldTower_Body_TopView() {

    draw_2_Circle(0, 2 * PI, 1, 1);
    draw_3_Circle(0, 2 * PI, 1, 1, 1);

}

//castle old tower side top
void draw_Castle_OldTower_Left_TopView(GLfloat size) {

    glPushMatrix();
    glTranslatef(-size - 5, 0, 200);
    glBegin(GL_LINE_LOOP);
    draw_Castle_OldTower_Roof_TopView(size / 2);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-size - 5, 0, 150);
    glScalef(size / 2, size / 2, 50);
    glBegin(GL_LINE_LOOP);
    draw_Castle_OldTower_Body_TopView();
    glEnd();
    glPopMatrix();

}

//castle old tower side top
void draw_Castle_OldTower_Central_TopView(GLfloat size) {

    glPushMatrix();
    glTranslatef(0, 0, 200);
    glBegin(GL_LINE_LOOP);
    draw_Castle_OldTower_Roof_TopView(size);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glScalef(size, size, 200);
    glBegin(GL_LINE_LOOP);
    draw_Castle_OldTower_Body_TopView();
    glEnd();
    glPopMatrix();

}

//castle old tower side top
void draw_Castle_OldTower_Right_TopView(GLfloat size) {

    glPushMatrix();
    glTranslatef(size + 5, 0, 200);
    glBegin(GL_LINE_LOOP);
    draw_Castle_OldTower_Roof_TopView(size / 2);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(size + 5, 0, 150);
    glScalef(size / 2, size / 2, 50);
    glBegin(GL_LINE_LOOP);
    draw_Castle_OldTower_Body_TopView();
    glEnd();
    glPopMatrix();

}

//castle old tower side top
void draw_Castle_OldTower_Full_TopView(GLfloat size) {

    draw_Castle_OldTower_Left_TopView(size);
    draw_Castle_OldTower_Central_TopView(size);
    draw_Castle_OldTower_Right_TopView(size);

}

/***********************************************************************************************************************
************************************************************************************************************************
**********************************Sets the origin point position of the old castle walls********************************
************************************************************************************************************************
***********************************************************************************************************************/

//castle old tower
void draw_Castle_OldTower_TopView(/*values*/) {

	glPushMatrix();
	glTranslatef(X_INITIAL + 268.5, Y_INITIAL + 515, 0);
	draw_Castle_OldTower_Full_TopView(20);
	glPopMatrix();

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

	//call the function with the original point position value -> (x, y, 0)
/***********************************************************************************************************************
*                                                                                                                      *
*                  IMPORTANT: because the z component is always 0, this function does not receives it                  *
*                                                                                                                      *
***********************************************************************************************************************/
	draw_RockBlock_TopView(/*x, y*/);

	/**********************************************************************/
	draw_LeftTower_TopView(/*x, y*/);

	/**********************************************************************/
	draw_LeftTower_Ruined_TopView(/*x, y*/);

	/**********************************************************************/
	draw_MiddleTower_TopView(/*x, y*/);

	/**********************************************************************/
	draw_RightTower_TopView(/*x, y*/);

	/**********************************************************************/
	draw_ArcBridge_TopView(/*x, y*/);

	/**********************************************************************/
	draw_ArcBridge_Ruined_TopView(/*x, y*/);

	/**********************************************************************/
	draw_MiddleTowers_connection_TopView(/*x, y*/);

	/**********************************************************************/
	draw_Gate_TopView(/*x, y*/);

	/**********************************************************************/
	draw_EntranceGargoyles_TopView(/*x, y*/);

	/**********************************************************************/
	draw_Delivery_TopView(/*x, y*/);

	/**********************************************************************/
	draw_Castle_Walls_TopView(/*x, y*/);

	/**********************************************************************/
	draw_Castle_Road_TopView(/*x, y*/);

	/**********************************************************************/
	draw_Castle_Hallway_TopView(/*x, y*/);

	/**********************************************************************/
	draw_Castle_Courtyard_TopView(/*x, y*/);

	/**********************************************************************/
	draw_Castle_OldTower_TopView(/*x, y*/);

	/**********************************************************************/
	draw_Castle_Buildings_TopView(/*x, y*/);

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
//	glRotatef(70, 1, 0, 0);
//	glRotatef(70, 0, 0, 1);
	glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW, Y_MAX_VIEW, Z_MIN_VIEW, Z_MAX_VIEW);
	glTranslatef(100, 100, -500);

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
