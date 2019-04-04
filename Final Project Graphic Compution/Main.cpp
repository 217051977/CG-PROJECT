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

	glVertex3f(X_INITIAL + 34, Y_INITIAL, 0);
	glVertex3f(X_INITIAL + 32, Y_INITIAL + 0.25, 0);
	glVertex3f(X_INITIAL + 30, Y_INITIAL + 0.5, 0);
	glVertex3f(X_INITIAL + 28, Y_INITIAL + 0.75, 0);
	glVertex3f(X_INITIAL + 26, Y_INITIAL + 1, 0);
	glVertex3f(X_INITIAL + 20, Y_INITIAL + 5, 0);
	glVertex3f(X_INITIAL + 10, Y_INITIAL + 12, 0);
	glVertex3f(X_INITIAL + 5, Y_INITIAL + 20, 0);
	glVertex3f(X_INITIAL + 2.5, Y_INITIAL + 40, 0);
	glVertex3f(X_INITIAL, Y_INITIAL + 45, 0);
	glVertex3f(X_INITIAL + 2.5, Y_INITIAL + 50, 0);
	glVertex3f(X_INITIAL + 5, Y_INITIAL + 55, 0);
	glVertex3f(X_INITIAL + 7.5, Y_INITIAL + 65, 0);
	glVertex3f(X_INITIAL + 15, Y_INITIAL + 75, 0);

	draw_Inverted_Circle(X_INITIAL + 40, Y_INITIAL + 40, PI / 2, -(PI) / 2, 40, 40);  //Center (x, y)

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

//left__middle connection
void draw_LeftMiddle_RockBlock_Connection_TopView() {

	//sets the beginning of the draw
	glBegin(GL_LINE_LOOP);


	draw_Inverted_Circle(X_INITIAL - 40, Y_INITIAL + 20, (5 * PI) / 24, -PI / 3, 40, 40);  //Center (x, y)

	//based on the position of the original point makes calculus to create the other points
	//so it has the pretended shape
	glVertex3f(X_INITIAL + 10, Y_INITIAL - 5, 0);
	glVertex3f(X_INITIAL + 30, Y_INITIAL, 0);
	glVertex3f(X_INITIAL + 37.5, Y_INITIAL - 10, 0);
	glVertex3f(X_INITIAL + 50, Y_INITIAL - 15, 0);
	glVertex3f(X_INITIAL + 60, Y_INITIAL - 5, 0);
	glVertex3f(X_INITIAL + 70, Y_INITIAL, 0);
	glVertex3f(X_INITIAL + 90, Y_INITIAL - 5, 0);
	glVertex3f(X_INITIAL + 97, Y_INITIAL - 5, 0);
	glVertex3f(X_INITIAL + 95, Y_INITIAL - 2, 0);
	glVertex3f(X_INITIAL + 105, Y_INITIAL + 38, 0);
	glVertex3f(X_INITIAL + 110, Y_INITIAL + 48, 0);
	glVertex3f(X_INITIAL + 115, Y_INITIAL + 58, 0);
	glVertex3f(X_INITIAL + 117, Y_INITIAL + 60, 0);

	glVertex3f(X_INITIAL + 100, Y_INITIAL + 50, 0);
	glVertex3f(X_INITIAL + 90, Y_INITIAL + 57.5, 0);
	glVertex3f(X_INITIAL + 60, Y_INITIAL + 60, 0);
	glVertex3f(X_INITIAL + 50, Y_INITIAL + 50, 0);
	glVertex3f(X_INITIAL + 30, Y_INITIAL + 40, 0);
	glVertex3f(X_INITIAL + 10, Y_INITIAL + 35, 0);

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

//middle rock block
void draw_Middle_RockBlock_TopView() {

	glBegin(GL_LINE_LOOP);

	glVertex3f(X_INITIAL + 60, Y_INITIAL, 0);
	glVertex3f(X_INITIAL + 55, Y_INITIAL, 0);
	glVertex3f(X_INITIAL + 30, Y_INITIAL + 10, 0);
	glVertex3f(X_INITIAL + 20, Y_INITIAL + 40, 0);
	glVertex3f(X_INITIAL + 2, Y_INITIAL + 50, 0);
	glVertex3f(X_INITIAL - 5, Y_INITIAL + 70, 0);
	glVertex3f(X_INITIAL + 5, Y_INITIAL + 110, 0);
	glVertex3f(X_INITIAL + 10, Y_INITIAL + 120, 0);
	glVertex3f(X_INITIAL + 15, Y_INITIAL + 130, 0);
	glVertex3f(X_INITIAL + 25, Y_INITIAL + 140, 0);
	glVertex3f(X_INITIAL + 65, Y_INITIAL + 150, 0);
	glVertex3f(X_INITIAL + 65, Y_INITIAL + 140, 0);
	glVertex3f(X_INITIAL + 105, Y_INITIAL + 140, 0);
	glVertex3f(X_INITIAL + 130, Y_INITIAL + 145, 0);
	glVertex3f(X_INITIAL + 140, Y_INITIAL + 140, 0);
	glVertex3f(X_INITIAL + 170, Y_INITIAL + 130, 0);
	glVertex3f(X_INITIAL + 175, Y_INITIAL + 125, 0);
	glVertex3f(X_INITIAL + 180, Y_INITIAL + 115, 0);
	glVertex3f(X_INITIAL + 190, Y_INITIAL + 100, 0);
	glVertex3f(X_INITIAL + 180, Y_INITIAL + 70, 0);
	glVertex3f(X_INITIAL + 175, Y_INITIAL + 60, 0);
	glVertex3f(X_INITIAL + 160, Y_INITIAL + 40, 0);
	glVertex3f(X_INITIAL + 155, Y_INITIAL + 30, 0);
	glVertex3f(X_INITIAL + 150, Y_INITIAL + 15, 0);
	glVertex3f(X_INITIAL + 140, Y_INITIAL, 0);

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

//right__middle connection
void draw_RightMiddle_RockBlock_Connection_TopView() {

	//sets the beginning of the draw
	glBegin(GL_LINE_LOOP);

	glVertex3f(X_INITIAL, Y_INITIAL, 0);
	glVertex3f(X_INITIAL + 10, Y_INITIAL - 12.5, 0);  //    adds 40px height
	glVertex3f(X_INITIAL + 20, Y_INITIAL - 8, 0);  //    adds 40px height
	glVertex3f(X_INITIAL + 25, Y_INITIAL - 5, 0);
	glVertex3f(X_INITIAL + 20, Y_INITIAL + 10, 0);
	glVertex3f(X_INITIAL + 18, Y_INITIAL + 25, 0);
	glVertex3f(X_INITIAL + 25, Y_INITIAL + 40, 0);
	glVertex3f(X_INITIAL + 40, Y_INITIAL + 50, 0);
	glVertex3f(X_INITIAL + 50, Y_INITIAL + 60, 0);
	glVertex3f(X_INITIAL + 35, Y_INITIAL + 55, 0);       //    removes 35px width
	glVertex3f(X_INITIAL + 20, Y_INITIAL + 62, 0);       //    removes 35px width
	glVertex3f(X_INITIAL + 15, Y_INITIAL + 60, 0);       //    removes 35px width
	glVertex3f(X_INITIAL - 5, Y_INITIAL + 68, 0);       //    removes 35px width

	glVertex3f(X_INITIAL - 10, Y_INITIAL + 60, 0);       //    removes 35px width
	glVertex3f(X_INITIAL - 5, Y_INITIAL + 55, 0);       //    removes 35px width
	glVertex3f(X_INITIAL, Y_INITIAL + 45, 0);       //    removes 35px width
	glVertex3f(X_INITIAL + 10, Y_INITIAL + 30, 0);       //    removes 35px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

//right
void draw_Right_RockBlock_TopView() {

	//sets the beginning of the draw
	glBegin(GL_LINE_LOOP);

	glVertex3f(X_INITIAL + 15, Y_INITIAL + 30, 0);
	glVertex3f(X_INITIAL + 5, Y_INITIAL + 35, 0);
	glVertex3f(X_INITIAL, Y_INITIAL + 50, 0);
	glVertex3f(X_INITIAL - 2, Y_INITIAL + 65, 0);
	glVertex3f(X_INITIAL + 5, Y_INITIAL + 80, 0);
	glVertex3f(X_INITIAL + 20, Y_INITIAL + 90, 0);
	glVertex3f(X_INITIAL + 30, Y_INITIAL + 100, 0);      //    removes 135px width
	glVertex3f(X_INITIAL + 65, Y_INITIAL + 105, 0);
	glVertex3f(X_INITIAL + 100, Y_INITIAL + 100, 0);
	glVertex3f(X_INITIAL + 110, Y_INITIAL + 95, 0);
	glVertex3f(X_INITIAL + 120, Y_INITIAL + 85, 0);
	glVertex3f(X_INITIAL + 125, Y_INITIAL + 75, 0);
	glVertex3f(X_INITIAL + 130, Y_INITIAL + 70, 0);
	glVertex3f(X_INITIAL + 132, Y_INITIAL + 65, 0);
	glVertex3f(X_INITIAL + 130, Y_INITIAL + 60, 0);
	glVertex3f(X_INITIAL + 135, Y_INITIAL + 50, 0);//    adds 100px height
	glVertex3f(X_INITIAL + 125, Y_INITIAL + 20, 0);
	glVertex3f(X_INITIAL + 115, Y_INITIAL + 20, 0);
	glVertex3f(X_INITIAL + 107, Y_INITIAL + 10, 0);
	glVertex3f(X_INITIAL + 100, Y_INITIAL + 3, 0);
	glVertex3f(X_INITIAL + 67.5, Y_INITIAL, 0);      //    adds 135px width
	glVertex3f(X_INITIAL + 50, Y_INITIAL + 5, 0);
	glVertex3f(X_INITIAL + 30, Y_INITIAL + 5, 0);
	glVertex3f(X_INITIAL + 20, Y_INITIAL + 15, 0);

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

/**********************************************************************/
//delivery path
void draw_DeliveryPath_RockBlock_TopView() {

	//sets the beginning of the draw
	glBegin(GL_LINE_LOOP);

	glVertex3f(X_INITIAL, Y_INITIAL, 0);
	glVertex3f(X_INITIAL + 40, Y_INITIAL, 0);       //    adds 40px width
	glVertex3f(X_INITIAL + 65, Y_INITIAL + 5, 0);
	glVertex3f(X_INITIAL + 50, Y_INITIAL + 10, 0);
	glVertex3f(X_INITIAL + 55, Y_INITIAL + 30, 0);
	glVertex3f(X_INITIAL + 45, Y_INITIAL + 40, 0);
	glVertex3f(X_INITIAL + 40, Y_INITIAL + 70, 0);
	glVertex3f(X_INITIAL + 5, Y_INITIAL + 70, 0);
	glVertex3f(X_INITIAL + 5, Y_INITIAL + 60, 0);
	glVertex3f(X_INITIAL, Y_INITIAL + 45, 0);
	glVertex3f(X_INITIAL, Y_INITIAL + 30, 0);
	glVertex3f(X_INITIAL - 5, Y_INITIAL + 15, 0);
	glVertex3f(X_INITIAL, Y_INITIAL + 10, 0);

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

/**********************************************************************/
//entrance path full
void draw_EntrancePath_Full_RockBlock_TopView() {

	//sets the beginning of the draw
	glBegin(GL_LINE_LOOP);

	glVertex3f(X_INITIAL + 10, Y_INITIAL, 0);
	glVertex3f(X_INITIAL + 75, Y_INITIAL, 0);
	glVertex3f(X_INITIAL + 75, Y_INITIAL - 5, 0);
	draw_Circle(X_INITIAL + 74, Y_INITIAL - 15, (PI / 2), ((3 * PI) / 2), 2, 5);
	glVertex3f(X_INITIAL + 80, Y_INITIAL - 25, 0);
	glVertex3f(X_INITIAL + 78, Y_INITIAL - 30, 0);
	glVertex3f(X_INITIAL + 95, Y_INITIAL - 40, 0);
	glVertex3f(X_INITIAL + 110, Y_INITIAL - 60, 0);
	glVertex3f(X_INITIAL + 110, Y_INITIAL - 70, 0);
	glVertex3f(X_INITIAL + 111, Y_INITIAL - 75, 0);
	glVertex3f(X_INITIAL + 115, Y_INITIAL - 80, 0);
	glVertex3f(X_INITIAL + 119, Y_INITIAL - 85, 0);
	glVertex3f(X_INITIAL + 120, Y_INITIAL - 90, 0);
	glVertex3f(X_INITIAL + 130, Y_INITIAL - 100, 0);
	glVertex3f(X_INITIAL + 120, Y_INITIAL - 110, 0);
	glVertex3f(X_INITIAL + 118, Y_INITIAL - 112, 0);
	glVertex3f(X_INITIAL + 115, Y_INITIAL - 112, 0);
	glVertex3f(X_INITIAL + 108, Y_INITIAL - 120, 0);
	glVertex3f(X_INITIAL + 70, Y_INITIAL - 130, 0);
	glVertex3f(X_INITIAL + 50, Y_INITIAL - 128, 0);
	glVertex3f(X_INITIAL + 20, Y_INITIAL - 140, 0);
	glVertex3f(X_INITIAL - 5, Y_INITIAL - 137, 0);
	glVertex3f(X_INITIAL, Y_INITIAL - 150, 0);
	glVertex3f(X_INITIAL - 5, Y_INITIAL - 165, 0);
	glVertex3f(X_INITIAL - 5, Y_INITIAL - 170, 0);
	glVertex3f(X_INITIAL - 40, Y_INITIAL - 170, 0);
	glVertex3f(X_INITIAL - 50, Y_INITIAL - 160, 0);
	glVertex3f(X_INITIAL - 52, Y_INITIAL - 155, 0);
	glVertex3f(X_INITIAL - 55, Y_INITIAL - 150, 0);
	glVertex3f(X_INITIAL - 52, Y_INITIAL - 145, 0);
	glVertex3f(X_INITIAL - 50, Y_INITIAL - 130, 0);
	glVertex3f(X_INITIAL - 40, Y_INITIAL - 130, 0);
	glVertex3f(X_INITIAL - 30, Y_INITIAL - 125, 0);
	glVertex3f(X_INITIAL - 27.5, Y_INITIAL - 120, 0);
	glVertex3f(X_INITIAL - 30, Y_INITIAL - 110, 0);
	glVertex3f(X_INITIAL - 15, Y_INITIAL - 105, 0);
	glVertex3f(X_INITIAL - 10, Y_INITIAL - 95, 0);
	glVertex3f(X_INITIAL + 5, Y_INITIAL - 90, 0);
	glVertex3f(X_INITIAL + 30, Y_INITIAL - 100, 0);
	glVertex3f(X_INITIAL + 35, Y_INITIAL - 105, 0);
	glVertex3f(X_INITIAL + 50, Y_INITIAL - 95, 0);
	glVertex3f(X_INITIAL + 75, Y_INITIAL - 90, 0);
	glVertex3f(X_INITIAL + 60, Y_INITIAL - 80, 0);
	glVertex3f(X_INITIAL + 67, Y_INITIAL - 67, 0);
	glVertex3f(X_INITIAL + 65, Y_INITIAL - 60, 0);
	glVertex3f(X_INITIAL + 45, Y_INITIAL - 50, 0);
	glVertex3f(X_INITIAL + 35, Y_INITIAL - 20, 0);

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

/**********************************************************************/
//entrance path
void draw_Castle_RockBlock_TopView() {

	//sets the beginning of the draw
	glBegin(GL_LINE_LOOP);

	glVertex3f(X_INITIAL, Y_INITIAL + 35, 0);
	glVertex3f(X_INITIAL + 5, Y_INITIAL + 30, 0);
	glVertex3f(X_INITIAL + 30, Y_INITIAL + 20, 0);
	glVertex3f(X_INITIAL + 54, Y_INITIAL, 0);
	glVertex3f(X_INITIAL + 60, Y_INITIAL - 5, 0);
	glVertex3f(X_INITIAL + 90, Y_INITIAL - 10, 0);
	glVertex3f(X_INITIAL + 300, Y_INITIAL, 0);
	glVertex3f(X_INITIAL + 330, Y_INITIAL + 10, 0);
	glVertex3f(X_INITIAL + 340, Y_INITIAL + 20, 0);
	glVertex3f(X_INITIAL + 360, Y_INITIAL + 45, 0);
	glVertex3f(X_INITIAL + 370, Y_INITIAL + 70, 0);
	glVertex3f(X_INITIAL + 380, Y_INITIAL + 80, 0);
	glVertex3f(X_INITIAL + 395, Y_INITIAL + 95, 0);
	glVertex3f(X_INITIAL + 390, Y_INITIAL + 117, 0);
	glVertex3f(X_INITIAL + 400, Y_INITIAL + 120, 0);
	glVertex3f(X_INITIAL + 415, Y_INITIAL + 145, 0);
	glVertex3f(X_INITIAL + 420, Y_INITIAL + 150, 0);
	glVertex3f(X_INITIAL + 400, Y_INITIAL + 175, 0);
	glVertex3f(X_INITIAL + 410, Y_INITIAL + 210, 0);
	glVertex3f(X_INITIAL + 390, Y_INITIAL + 240, 0);
	glVertex3f(X_INITIAL + 390, Y_INITIAL + 260, 0);
	glVertex3f(X_INITIAL + 380, Y_INITIAL + 280, 0);
	glVertex3f(X_INITIAL + 390, Y_INITIAL + 290, 0);
	glVertex3f(X_INITIAL + 377, Y_INITIAL + 310, 0);
	glVertex3f(X_INITIAL + 360, Y_INITIAL + 325, 0);
	glVertex3f(X_INITIAL + 340, Y_INITIAL + 330, 0);
	glVertex3f(X_INITIAL + 330, Y_INITIAL + 340, 0);
	glVertex3f(X_INITIAL + 300, Y_INITIAL + 350, 0);
	glVertex3f(X_INITIAL + 280, Y_INITIAL + 370, 0);
	glVertex3f(X_INITIAL + 260, Y_INITIAL + 370, 0);
	glVertex3f(X_INITIAL + 240, Y_INITIAL + 390, 0);
	glVertex3f(X_INITIAL + 200, Y_INITIAL + 400, 0);
	glVertex3f(X_INITIAL + 188.5, Y_INITIAL + 385, 0);
	glVertex3f(X_INITIAL + 130, Y_INITIAL + 390, 0);
	glVertex3f(X_INITIAL + 80, Y_INITIAL + 380, 0);
	glVertex3f(X_INITIAL + 65, Y_INITIAL + 385, 0);
	glVertex3f(X_INITIAL + 35, Y_INITIAL + 370, 0);
	glVertex3f(X_INITIAL + 30, Y_INITIAL + 340, 0);
	glVertex3f(X_INITIAL + 20, Y_INITIAL + 350, 0);
	glVertex3f(X_INITIAL + 5, Y_INITIAL + 330, 0);
	glVertex3f(X_INITIAL + 5, Y_INITIAL + 320, 0);
	glVertex3f(X_INITIAL - 10, Y_INITIAL + 290, 0);
	glVertex3f(X_INITIAL - 5, Y_INITIAL + 250, 0);
	glVertex3f(X_INITIAL - 20, Y_INITIAL + 220, 0);
	glVertex3f(X_INITIAL - 30, Y_INITIAL + 200, 0);
	glVertex3f(X_INITIAL - 23, Y_INITIAL + 175, 0);
	glVertex3f(X_INITIAL - 30, Y_INITIAL + 130, 0);
	glVertex3f(X_INITIAL - 15, Y_INITIAL + 90, 0);
	glVertex3f(X_INITIAL - 5, Y_INITIAL + 80, 0);
	glVertex3f(X_INITIAL + 5, Y_INITIAL + 60, 0);
	glVertex3f(X_INITIAL, Y_INITIAL + 40, 0);

	//sets the ending of the draw
	glEnd();

	glPushMatrix();
	glTranslatef(X_INITIAL + 188.5, Y_INITIAL + 175, 150);
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

	draw_Left_RockBlock_TopView();                      //(100 ,300)
	glPushMatrix();
	glTranslatef(80, 20, 0);
	draw_LeftMiddle_RockBlock_Connection_TopView();     //(180 ,320)
	glPopMatrix();
	glPushMatrix();
	glTranslatef(180, -50, 0);
	draw_Middle_RockBlock_TopView();                   //(280 ,250)
	glPopMatrix();
	glPushMatrix();
	glTranslatef(360, 20, 0);
	draw_RightMiddle_RockBlock_Connection_TopView();   //(460, 320)
	glPopMatrix();
	glPushMatrix();
	glTranslatef(380, -20, 0);
	draw_Right_RockBlock_TopView();                    //(495, 280)
	glPopMatrix();

	glPushMatrix();
	glTranslatef(245, 90, 0);
	draw_DeliveryPath_RockBlock_TopView();             //(345, 390)
	glPopMatrix();

	glPushMatrix();
	glTranslatef(240, -50, 0);
	draw_EntrancePath_Full_RockBlock_TopView();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(80, 190, 0);
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
void draw_LeftTower_Crown_Spikes_Part_TopView(GLfloat x, GLfloat y) {

	//top

	glBegin(GL_LINE_LOOP);

	glVertex3f(x, y, 0);
	glVertex3f(x + 5, y, 0);      //     adds 2.5px width
	glVertex3f(x + 5, y + 5, 0);//     adds 2.5px height
	glVertex3f(x, y + 5, 0);      //     removes 2.5px width

	//sets the ending of the draw
	glEnd();

	//bot

	glBegin(GL_LINE_LOOP);


	glVertex3f(x, y, 1.5);
	glVertex3f(x + 5, y, 1.5);      //     adds 2.5px width
	glVertex3f(x + 5, y + 5, 1.5);//     adds 2.5px height
	glVertex3f(x, y + 5, 1.5);      //     removes 2.5px width

	//sets the ending of the draw
	glEnd();

	//front

	glBegin(GL_LINE_LOOP);

	glVertex3f(x, y, 0);
	glVertex3f(x + 5, y, 0);      //     adds 2.5px width
	glVertex3f(x + 5, y, 1.5);//     adds 2.5px height
	glVertex3f(x, y, 1.5);      //     removes 2.5px width

	//sets the ending of the draw
	glEnd();

	//back

	glBegin(GL_LINE_LOOP);

	glVertex3f(x, y + 5, 0);      //     adds 2.5px width
	glVertex3f(x + 5, y + 5, 0);//     adds 2.5px height
	glVertex3f(x + 5, y + 5, 1.5);//     adds 2.5px height
	glVertex3f(x, y + 5, 1.5);      //     adds 2.5px width

	//sets the ending of the draw
	glEnd();

	//left

	glBegin(GL_LINE_LOOP);

	glVertex3f(x, y, 0);      //     adds 2.5px width
	glVertex3f(x, y + 5, 0);//     adds 2.5px height
	glVertex3f(x, y + 5, 1.5);//     adds 2.5px height
	glVertex3f(x, y, 1.5);      //     adds 2.5px width

	//sets the ending of the draw
	glEnd();

	//right

	glBegin(GL_LINE_LOOP);

	glVertex3f(x + 5, y, 0);      //     adds 2.5px width
	glVertex3f(x + 5, y + 5, 0);//     adds 2.5px height
	glVertex3f(x + 5, y + 5, 1.5);//     adds 2.5px height
	glVertex3f(x + 5, y, 1.5);      //     adds 2.5px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


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

	glVertex3f(x, y, 0);
	glVertex3f(x + 10, y, 0);       //     adds 10px width
	glVertex3f(x + 10, y + 10, 0);  //     adds 10px height
	glVertex3f(x, y + 10, 0);       //     removes 10x width

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
void draw_LeftTower_Ruined_Bottom_TopView(GLfloat x, GLfloat y) {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(x, y, 0);
	glVertex3f(x + 30, y, 0);       //     adds 30px width
	glVertex3f(x + 30, y + 30, 0);  //     adds 30px height
	glVertex3f(x, y + 30, 0);       //     removes 30px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

/**********************************************************************/
//stairway steps horizontal
void draw_LeftTower_Ruined_Stairway_Steps_TopView(GLfloat x, GLfloat y) {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(x, y, 0);
	glVertex3f(x + 3.5, y, 0);      //     adds 3.5px width
	glVertex3f(x + 3.5, y + 5, 0);  //     adds 5px height
	glVertex3f(x, y + 5, 0);        //     removes 3.5px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

//stairway steps vertical
void draw_LeftTower_Ruined_Stairway_Steps_Vertical_TopView(GLfloat x, GLfloat y) {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(x, y, 0);
	glVertex3f(x + 5, y, 0);    //     adds 5px width
	glVertex3f(x + 5, y + 3, 0);//     adds 3px height
	glVertex3f(x, y + 3, 0);    //     removes 5px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


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

	glVertex3f(x + 11, y + 5, 0);   //     adds 11px width and 5px height
	glVertex3f(x + 16, y + 5, 0);   //     adds more 5px width
	glVertex3f(x + 16, y + 8, 0);   //     adds more 3px height
	glVertex3f(x + 11, y + 8, 0);   //     removes 5px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(x + 11, y + 11, 0);  //     adds 11px both width and height
	glVertex3f(x + 16, y + 11, 0);  //     adds more 5px width
	glVertex3f(x + 16, y + 16, 0);  //     adds more 5px height
	glVertex3f(x + 11, y + 16, 0);  //     removes 5px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

/**********************************************************************/
//head
void draw_LeftTower_Ruined_Head_TopView(GLfloat x, GLfloat y) {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(x, y, 0);
	glVertex3f(x + 20, y, 0);       //     adds 20px width
	glVertex3f(x + 20, y + 20, 0);  //     adds 20px height
	glVertex3f(x, y + 20, 0);       //     removes 20px width

	//sets the ending of the draw
	glEnd();

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(x + 2, y + 2, 0);    //     adds 2 both in width and height
	glVertex3f(x + 18, y + 2, 0);   //     adds more 16px width
	glVertex3f(x + 18, y + 18, 0);  //     adds more 16px height
	glVertex3f(x + 2, y + 18, 0);   //     removes 16px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


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

	glVertex3f(x, y, 0);
	glVertex3f(x + 5, y, 0);        //     adds 5px width
	glVertex3f(x + 5, y + 5, 0);    //     adds 5px height
	glVertex3f(x, y + 5, 0);        //     removes 5px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


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

	glVertex3f(x, y, 0);
	glVertex3f(x + 5, y, 0);        //     adds 5px width
	glVertex3f(x + 5, y + 5, 0);    //     adds 5px height
	glVertex3f(x, y + 5, 0);        //     removes 5px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


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

	glVertex3f(x, y, 0);
	glVertex3f(x + 15, y, 0);       //     adds 15px width
	glVertex3f(x + 15, y - 1, 0);   //     removes 1px height
	glVertex3f(x, y - 1, 0);        //     removes 15px width

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
void draw_RightTower_Bottom_TopView(GLfloat x, GLfloat y) {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(x, y, 0);            //                          start

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


}

/***********************************************************************************************************************
************************************************************************************************************************
*********************************Sets the origin point position of each the towers draw*********************************
************************************************************************************************************************
***********************************************************************************************************************/

//left tower
void draw_LeftTower_TopView() {

	//X_INITIAL = 100;
	//Y_INITIAL = 300;

	draw_LeftTower_Crown_TopView(X_INITIAL + 20, Y_INITIAL + 20);     //(120, 320)
	draw_LeftTower_Trapdoor_TopView(X_INITIAL + 27, Y_INITIAL + 27);  //(127, 327)

}

/**********************************************************************/
//left tower ruined
void draw_LeftTower_Ruined_TopView() {

	//X_INITIAL = 100;
	//Y_INITIAL = 300;

	draw_LeftTower_Ruined_Bottom_TopView(X_INITIAL + 110, Y_INITIAL + 25);//(200, 325)
	draw_LeftTower_Ruined_Head_TopView(X_INITIAL + 115, Y_INITIAL + 30);  //(205, 330)

}

/**********************************************************************/
//middle tower
void draw_MiddleTower_TopView() {

	//X_INITIAL = 100;
	//Y_INITIAL = 300;

	//draws the left middle tower
	draw_MiddleTower_Bottom_Crown_TopView(X_INITIAL + 190, Y_INITIAL + 25);   //(290, 325)
	draw_MiddleRight_Tower_Crown_TopView(X_INITIAL + 197.5, Y_INITIAL + 32.5);//(297.5, 332.5)
	draw_MiddleTower_Banner_TopView(X_INITIAL + 197.5, Y_INITIAL + 25);       //(297.5, 325)

	//draws the right middle tower
	draw_MiddleTower_Bottom_Crown_TopView(X_INITIAL + 320, Y_INITIAL + 25);   //(420, 325)
	draw_MiddleRight_Tower_Crown_TopView(X_INITIAL + 327.5, Y_INITIAL + 32.5);//(427.5, 332.5)
	draw_MiddleTower_Banner_TopView(X_INITIAL + 327.5, Y_INITIAL + 25);       //(427.5, 325)

}

/**********************************************************************/
//right tower
void draw_RightTower_TopView() {

	//X_INITIAL = 100;
	//Y_INITIAL = 300;

	draw_RightTower_Bottom_TopView(X_INITIAL + 400, Y_INITIAL + 10);          //(515, 310)
	draw_MiddleRight_Tower_Crown_TopView(X_INITIAL + 416.5, Y_INITIAL + 31);  //(531.5, 331)

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

	glVertex3f(x, y, 0);
	glVertex3f(x + 5, y, 0);        //     adds 5px width
	glVertex3f(x + 5, y + 5, 0);    //     adds 5px height
	glVertex3f(x, y + 5, 0);        //     removes 5px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

/**********************************************************************/
//arc bridge border
void draw_ArcBridge_Border_TopView(GLfloat x, GLfloat y) {

	for (GLfloat i = x; i < x + 50; i += 5) {

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

	//X_INITIAL = 100;
	//Y_INITIAL = 300;

	glPushMatrix();
	glTranslatef(X_INITIAL + 60, Y_INITIAL + 30, 0);
	glTranslatef(0, 15, 0);
	glTranslatef(80, -15, 0);
	glTranslatef(0, 15, 0);
	glTranslatef(90, -15, 0);
	glTranslatef(0, 15, 0);
	glPopMatrix();
	draw_ArcBridge_Border_TopView(X_INITIAL + 60, Y_INITIAL + 30);    //(160, 330)
	draw_ArcBridge_Border_TopView(X_INITIAL + 60, Y_INITIAL + 45);    //(160, 345)

	draw_ArcBridge_Border_TopView(X_INITIAL + 140, Y_INITIAL + 30);   //(230, 330)
	draw_ArcBridge_Border_TopView(X_INITIAL + 140, Y_INITIAL + 45);   //(230, 345)

	draw_ArcBridge_Border_TopView(X_INITIAL + 350, Y_INITIAL + 30);   //(450, 330)
	draw_ArcBridge_Border_TopView(X_INITIAL + 350, Y_INITIAL + 45);   //(450, 345)

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

/*
	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	//top

	//sets a point in the position (x, y, 0)
	glVertex3f(x, y, 0);
	//based on the position of the original point makes calculus to create the other points
	//so it has the pretended shape
	glVertex3f(x + 1, y, 0);      //     adds 2.5px width
	glVertex3f(x + 1, y + 1, 0);//     adds 2.5px height
	glVertex3f(x, y + 1, 0);      //     removes 2.5px width

	//sets the ending of the draw
	glEnd();

	//bot

	glBegin(GL_LINE_LOOP);

	//sets a point in the position (x, y, 0)
	glVertex3f(x, y, 10);
	//based on the position of the original point makes calculus to create the other points
	//so it has the pretended shape
	glVertex3f(x + 1, y, 10);      //     adds 2.5px width
	glVertex3f(x + 1, y + 1, 10);//     adds 2.5px height
	glVertex3f(x, y + 1, 10);      //     removes 2.5px width

	//sets the ending of the draw
	glEnd();

	//front

	glBegin(GL_LINE_LOOP);

	//sets a point in the position (x, y, 0)
	glVertex3f(x, y, 0);
	//based on the position of the original point makes calculus to create the other points
	//so it has the pretended shape
	glVertex3f(x + 1, y, 0);      //     adds 2.5px width
	glVertex3f(x + 1, y, 10);//     adds 2.5px height
	glVertex3f(x, y, 10);      //     removes 2.5px width

	//sets the ending of the draw
	glEnd();

	//back

	glBegin(GL_LINE_LOOP);

	glVertex3f(x, y + 1, 0);      //     adds 2.5px width
	glVertex3f(x + 1, y + 1, 0);//     adds 2.5px height
	glVertex3f(x + 1, y + 1, 10);//     adds 2.5px height
	glVertex3f(x, y + 1, 10);      //     adds 2.5px width

	//sets the ending of the draw
	glEnd();

	//left

	glBegin(GL_LINE_LOOP);

	glVertex3f(x, y, 0);      //     adds 2.5px width
	glVertex3f(x, y + 1, 0);//     adds 2.5px height
	glVertex3f(x, y + 1, 10);//     adds 2.5px height
	glVertex3f(x, y, 10);      //     adds 2.5px width

	//sets the ending of the draw
	glEnd();

	//right

	glBegin(GL_LINE_LOOP);

	glVertex3f(x + 1, y, 0);      //     adds 2.5px width
	glVertex3f(x + 1, y + 1, 0);//     adds 2.5px height
	glVertex3f(x + 1, y + 1, 10);//     adds 2.5px height
	glVertex3f(x + 1, y, 10);      //     adds 2.5px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered

*/

}

/**********************************************************************/
//flag holder (gate)
void draw_FlagHolder_TopView() {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(X_INITIAL, Y_INITIAL, 0);
	glVertex3f(X_INITIAL + 10, Y_INITIAL, 0);       //     adds 10px width
	glVertex3f(X_INITIAL + 10, Y_INITIAL + 10, 0);  //     adds 10px height
	glVertex3f(X_INITIAL, Y_INITIAL + 10, 0);       //     removes 10px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

/**********************************************************************/
//flag (gate)
void draw_Flag_TopView() {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(X_INITIAL, Y_INITIAL, 0);
	glVertex3f(X_INITIAL + 5, Y_INITIAL - 5, 0);    //     adds 5px width and removes 5px height

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


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
void draw_Gargoyles_TopView(GLfloat x, GLfloat y) {

	//sets the beginning of the inside draw part
	glBegin(GL_LINE_LOOP);

	glVertex3f(X_INITIAL, Y_INITIAL, 0);
	glVertex3f(X_INITIAL + 10, Y_INITIAL, 0);       //     adds 10px width
	glVertex3f(X_INITIAL + 10, Y_INITIAL + 10, 0);  //     adds 10px height
	glVertex3f(X_INITIAL, Y_INITIAL + 10, 0);       //     removes 10px width

	//sets the ending of the draw
	glEnd();

	//set the drawing to be rendered


}

/***********************************************************************************************************************
************************************************************************************************************************
**********************************Sets the origin point position and draw the gargoyles*********************************
************************************************************************************************************************
***********************************************************************************************************************/

//entrance gargoyles
void draw_EntranceGargoyles_TopView() {

	//X_INITIAL = 100;
	//Y_INITIAL = 300;
	glPushMatrix();
	glTranslatef(220, -10, 0);
	draw_Gargoyles_TopView(X_INITIAL + 220, Y_INITIAL - 10);  //(320, 90)
	glTranslatef(90, 0, 0);
	draw_Gargoyles_TopView(X_INITIAL + 310, Y_INITIAL - 10);  //(410, 90)
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
