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
GLfloat X_MIN_VIEW = 0, X_MAX_VIEW = 800, Y_MIN_VIEW = 0, Y_MAX_VIEW = 1000, Z_MIN_VIEW = -1, Z_MAX_VIEW = 1;
GLfloat X_INITIAL = 100, Y_INITIAL = 300;



/***********************************************************************************************************************
************************************************************************************************************************
****************************************************Draw roof tiles*****************************************************
************************************************************************************************************************
***********************************************************************************************************************/
//With squares
void draw_RoofTiles_Square_TopView(GLfloat x, GLfloat y) {

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

/***********************************************************************************************************************
************************************************************************************************************************
*************************************************Draw roof tiles lines**************************************************
************************************************************************************************************************
***********************************************************************************************************************/
//lines for the tiles
void draw_RoofTiles_Line_TopView(GLfloat x, GLfloat y, GLfloat width, GLfloat height) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + width, y, 0);
    glVertex3f(x + width, y + height, 0);
    glVertex3f(x, y + height, 0);

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

/***********************************************************************************************************************
************************************************************************************************************************
******************************************************Draw Circles******************************************************
************************************************************************************************************************
***********************************************************************************************************************/

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

    draw_Inverted_Circle(x + 40, y + 40, PI / 2, -(/*21 * */PI) / 2/*36*/, 40, 40);  //Center (x, y)

    //sets the ending of the draw
    glEnd();

	//set the drawing to be rendered
	glFlush();

}

//left__middle connection
void draw_LeftMiddle_RockBlock_Connection_TopView(GLfloat x, GLfloat y) {

	//sets the beginning of the draw
	glBegin(GL_LINE_LOOP);

//    draw_Inverted_Circle(x - 40, y + 20, PI/2, -PI/2, 40, 40);  //Center (x, y)

    draw_Inverted_Circle(x - 40, y + 20, (5 * PI)/24, -PI/3, 40, 40);  //Center (x, y)

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

//    draw_Inverted_Circle(x + 190, y, (33 * PI) / 32, (7 * PI) / 12, 90, 70);  //Center (x, y)
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
//    draw_Circle(x + 90, y + 70, 0, 2 * PI, 90, 70);  //Center (x, y)
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
    glVertex3f(x + 25, y - 5, 0);
    glVertex3f(x + 20, y + 10, 0);
    glVertex3f(x + 18, y + 25, 0);
    glVertex3f(x + 25, y + 40, 0);
    glVertex3f(x + 40, y + 50, 0);
    glVertex3f(x + 50, y + 60, 0);
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
    glVertex3f(x + 65, y + 5, 0);
    glVertex3f(x + 50, y + 10, 0);
    glVertex3f(x + 55, y + 30, 0);
    glVertex3f(x + 45, y + 40, 0);
    glVertex3f(x + 40, y + 70, 0);
/*    glVertex3f(x + 40, y + 100, 0); //    adds 100px height
    glVertex3f(x, y + 100, 0);      //    removes 40px width
    glVertex3f(x, y + 80, 0);*/
    glVertex3f(x + 5, y + 70, 0);
    glVertex3f(x + 5, y + 60, 0);
    glVertex3f(x, y + 45, 0);
    glVertex3f(x, y + 30, 0);
    glVertex3f(x - 5, y + 15, 0);
    glVertex3f(x, y + 10, 0);

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

                        /**********************************************************************/
//entrance path full
void draw_EntrancePath_Full_RockBlock_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the draw
    glBegin(GL_LINE_LOOP);

    glVertex3f(x + 10, y, 0);
    glVertex3f(x + 75, y, 0);
    glVertex3f(x + 75, y - 5, 0);
    draw_Circle(x + 74, y - 15, (PI / 2), (( 3 * PI) / 2), 2, 5);
    glVertex3f(x + 80, y - 25, 0);
    glVertex3f(x + 78, y - 30, 0);
    glVertex3f(x + 95, y - 40, 0);
    glVertex3f(x + 110, y - 60, 0);
    glVertex3f(x + 110, y - 70, 0);
    glVertex3f(x + 111, y - 75, 0);
    glVertex3f(x + 115, y - 80, 0);
    glVertex3f(x + 119, y - 85, 0);
    glVertex3f(x + 120, y - 90, 0);
    glVertex3f(x + 130, y - 100, 0);
    glVertex3f(x + 120, y - 110, 0);
    glVertex3f(x + 118, y - 112, 0);
    glVertex3f(x + 115, y - 112, 0);
    glVertex3f(x + 108, y - 120, 0);
    glVertex3f(x + 70, y - 130, 0);
    glVertex3f(x + 50, y - 128, 0);
    glVertex3f(x + 20, y - 140, 0);
    glVertex3f(x - 5, y - 137, 0);
    glVertex3f(x, y - 150, 0);
    glVertex3f(x - 5, y - 165, 0);
    glVertex3f(x - 5, y - 170, 0);
    glVertex3f(x - 40, y - 170, 0);
    glVertex3f(x - 50, y - 160, 0);
    glVertex3f(x - 52, y - 155, 0);
    glVertex3f(x - 55, y - 150, 0);
    glVertex3f(x - 52, y - 145, 0);
    glVertex3f(x - 50, y - 130, 0);
    glVertex3f(x - 40, y - 130, 0);
    glVertex3f(x - 30, y - 125, 0);
    glVertex3f(x - 27.5, y - 120, 0);
    glVertex3f(x - 30, y - 110, 0);
    glVertex3f(x - 15, y - 105, 0);
    glVertex3f(x - 10, y - 95, 0);
    glVertex3f(x + 5, y - 90, 0);
    glVertex3f(x + 30, y - 100, 0);
    glVertex3f(x + 35, y - 105, 0);
    glVertex3f(x + 50, y - 95, 0);
    glVertex3f(x + 75, y - 90, 0);
    glVertex3f(x + 60, y - 80, 0);
    glVertex3f(x + 67, y - 67, 0);
    glVertex3f(x + 65, y - 60, 0);
    glVertex3f(x + 45, y - 50, 0);
    glVertex3f(x + 35, y - 20, 0);

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

                        /**********************************************************************/
//entrance path
void draw_Castle_RockBlock_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the draw
    glBegin(GL_LINE_LOOP);

    glVertex3f(x, y + 35, 0);
    glVertex3f(x + 5, y + 30, 0);
    glVertex3f(x + 30, y + 20, 0);
    glVertex3f(x + 54, y, 0);
    glVertex3f(x + 60, y - 5, 0);
    glVertex3f(x + 90, y - 10, 0);
    glVertex3f(x + 300, y, 0);
    glVertex3f(x + 330, y + 10, 0);
    glVertex3f(x + 340, y + 20, 0);
    glVertex3f(x + 360, y + 45, 0);
    glVertex3f(x + 370, y + 70, 0);
    glVertex3f(x + 380, y + 80, 0);
    glVertex3f(x + 395, y + 95, 0);
    glVertex3f(x + 390, y + 117, 0);
    glVertex3f(x + 400, y + 120, 0);
    glVertex3f(x + 415, y + 145, 0);
    glVertex3f(x + 420, y + 150, 0);
    glVertex3f(x + 400, y + 175, 0);
    glVertex3f(x + 410, y + 210, 0);
    glVertex3f(x + 390, y + 240, 0);
    glVertex3f(x + 390, y + 260, 0);
    glVertex3f(x + 380, y + 280, 0);
    glVertex3f(x + 390, y + 290, 0);
    glVertex3f(x + 377, y + 310, 0);
    glVertex3f(x + 360, y + 325, 0);
    glVertex3f(x + 340, y + 330, 0);
    glVertex3f(x + 330, y + 340, 0);
    glVertex3f(x + 300, y + 350, 0);
    glVertex3f(x + 280, y + 370, 0);
    glVertex3f(x + 260, y + 370, 0);
    glVertex3f(x + 240, y + 390, 0);
    glVertex3f(x + 200, y + 400, 0);
    glVertex3f(x + 188.5, y + 385, 0);
    glVertex3f(x + 130, y + 390, 0);
    glVertex3f(x + 80, y + 380, 0);
    glVertex3f(x + 65, y + 385, 0);
    glVertex3f(x + 35, y + 370, 0);
    glVertex3f(x + 30, y + 340, 0);
    glVertex3f(x + 20, y + 350, 0);
    glVertex3f(x + 5, y + 330, 0);
    glVertex3f(x + 5, y + 320, 0);
    glVertex3f(x - 10, y + 290, 0);
    glVertex3f(x - 5, y + 250, 0);
    glVertex3f(x - 20, y + 220, 0);
    glVertex3f(x - 30, y + 200, 0);
    glVertex3f(x - 23, y + 175, 0);
    glVertex3f(x - 30, y + 130, 0);
    glVertex3f(x - 15, y + 90, 0);
    glVertex3f(x - 5, y + 80, 0);
    glVertex3f(x + 5 , y + 60, 0);
    glVertex3f(x, y + 40, 0);

    //sets the ending of the draw
    glEnd();

    //sets the beginning of the draw
    glBegin(GL_LINE_LOOP);

    draw_Circle(x + 188.5, y + 175, 0, 2 * PI, 205, 205);

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

/***********************************************************************************************************************
************************************************************************************************************************
*******************************Sets the origin point position of each the rock block draw*******************************
************************************************************************************************************************
***********************************************************************************************************************/

void draw_RockBlock_TopView() {

    //X_INITIAL = 100;
    //Y_INITIAL = 300;

	draw_Left_RockBlock_TopView(X_INITIAL, Y_INITIAL);                      //(100 ,300)
	draw_LeftMiddle_RockBlock_Connection_TopView(X_INITIAL + 80, Y_INITIAL + 20);     //(180 ,320)
	draw_Middle_RockBlock_TopView(X_INITIAL + 180, Y_INITIAL - 50);                   //(280 ,250)
	draw_RightMiddle_RockBlock_Connection_TopView(X_INITIAL + 360, Y_INITIAL + 20);   //(460, 320)
	draw_Right_RockBlock_TopView(X_INITIAL + 380, Y_INITIAL - 20);                    //(495, 280)

	draw_DeliveryPath_RockBlock_TopView(X_INITIAL + 245, Y_INITIAL + 90);             //(345, 390)

	draw_EntrancePath_Full_RockBlock_TopView(X_INITIAL + 240, Y_INITIAL - 50);

	draw_Castle_RockBlock_TopView(X_INITIAL + 80, Y_INITIAL + 190);

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
void draw_WallEdification_Roof_TopView(GLfloat x, GLfloat y, GLfloat size, GLfloat height) {

    for (GLfloat v = y; v < y + height; v += 2.5) {

        for (GLfloat h = x; h < x + size; h += 2.5) {

            draw_RoofTiles_Square_TopView(h, v);
            draw_RoofTiles_Square_TopView(h, v);

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

    draw_WallEdification_Roof_TopView(X_INITIAL + 220, Y_INITIAL + 35, 100, 20);  //(320, 335)

    draw_WallEdification_Roof_TopView(X_INITIAL + 195, Y_INITIAL + 55, 150, 25);  //(295, 355)

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                Draws the gate it self                                                *
*                                                                                                                      *
***********************************************************************************************************************/

//gate head
void draw_Gate_Head_TopView(GLfloat x, GLfloat y, GLfloat size) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    //sets a point in the position (x, y, 0)
    glVertex3f(x, y, 0);
    //based on the position of the original point makes calculus to create the other points
    //so it has the pretended shape
    glVertex3f(x + size, y, 0);      //     adds 100px width
    glVertex3f(x + size, y + 5, 0);  //     adds 100px height
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

    //X_INITIAL = 100;
    //Y_INITIAL = 300;

    draw_Gate_Head_TopView(X_INITIAL + 220, Y_INITIAL + 30, 100);  //(320, 330)
    draw_FlagHolder_TopView(X_INITIAL + 215, Y_INITIAL + 20); //(315, 320)
    draw_FlagHolder_TopView(X_INITIAL + 315, Y_INITIAL + 20); //(415, 320)
    draw_Flag_TopView(X_INITIAL + 222.5, Y_INITIAL + 22.5);   //(322.5, 322.5)
    draw_Flag_TopView(X_INITIAL + 317.5, Y_INITIAL + 22.5);   //(417.5, 322.5)

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

    //X_INITIAL = 100;
    //Y_INITIAL = 300;

    draw_Gargoyles_TopView(X_INITIAL + 220, Y_INITIAL - 10);  //(320, 90)
    draw_Gargoyles_TopView(X_INITIAL + 310, Y_INITIAL - 10);  //(410, 90)

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                            Draws the deliver road it self                                            *
*                                                                                                                      *
***********************************************************************************************************************/

void draw_FrontDoor_Tower_TopView(GLfloat x, GLfloat y) {

    glBegin(GL_LINE_LOOP);

    draw_Circle(x, y, 0, 2 * PI, 5, 5);

    glEnd();

    glBegin(GL_LINE_LOOP);

    draw_Circle(x, y, 0, 2 * PI, 3, 3);

    glEnd();

    glBegin(GL_LINE_LOOP);

    draw_Circle(x, y, 0, 2 * PI, 1, 1);

    glEnd();

}

void draw_FrontDoor_SideWall_TopView(GLfloat x, GLfloat y, GLfloat size) {

    glBegin(GL_LINE_LOOP);

    glVertex3f(x, y, 0);
    glVertex3f(x + 5, y, 0);
    glVertex3f(x + 5, y + size, 0);
    glVertex3f(x, y + size, 0);

    glEnd();

}

                        /**********************************************************************/
void draw_FrontDoor_TopView(GLfloat x, GLfloat y) {

    draw_FrontDoor_Tower_TopView(x + 2.5, y + 2.5);

    draw_FrontDoor_Tower_TopView(x + 37.5, y + 2.5);

    draw_Gate_Head_TopView(x + 7, y, 26);

    draw_FrontDoor_SideWall_TopView(x, y + 7, 23);

    draw_FrontDoor_SideWall_TopView(x + 35, y + 7, 23);

    glFlush();

}

/***********************************************************************************************************************
************************************************************************************************************************
************************************Sets the origin point position of the deliver road**********************************
************************************************************************************************************************
***********************************************************************************************************************/
//delivery road
void draw_Delivery_TopView() {

    draw_FrontDoor_TopView(X_INITIAL + 247.5, Y_INITIAL + 160);

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                 Draw the castle road                                                 *
*                                                                                                                      *
***********************************************************************************************************************/
//castle road horizontal
void draw_Castle_Road_Horizontal_TopView(GLfloat x, GLfloat y, GLfloat size) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    glVertex3f(x, y, 0);
    glVertex3f(x + size, y, 0);
    glVertex3f(x + size, y + 30, 0);
    glVertex3f(x, y + 30, 0);

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

//castle road horizontal
void draw_Castle_Road_Vertical_TopView(GLfloat x, GLfloat y, GLfloat size) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    glVertex3f(x, y, 0);
    glVertex3f(x + 30, y, 0);
    glVertex3f(x + 30, y + size, 0);
    glVertex3f(x, y + size, 0);

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

/***********************************************************************************************************************
************************************************************************************************************************
***********************************Sets the origin point position of the castle roads***********************************
************************************************************************************************************************
***********************************************************************************************************************/
//castle road
void draw_Castle_Road_TopView() {

    draw_Castle_Road_Vertical_TopView(X_INITIAL + 252.5, Y_INITIAL + 295, 40);
    draw_Castle_Road_Vertical_TopView(X_INITIAL + 252.5, Y_INITIAL + 395, 40);
    draw_Castle_Road_Vertical_TopView(X_INITIAL + 252.5, Y_INITIAL + 465, 10);
    draw_Castle_Road_Vertical_TopView(X_INITIAL + 373.5, Y_INITIAL + 200, 305);
    draw_Castle_Road_Vertical_TopView(X_INITIAL + 133.5, Y_INITIAL + 200, 305);

    draw_Castle_Road_Horizontal_TopView(X_INITIAL + 163.5, Y_INITIAL + 200, 10);
    draw_Castle_Road_Horizontal_TopView(X_INITIAL + 363.5, Y_INITIAL + 200, 10);
    draw_Castle_Road_Horizontal_TopView(X_INITIAL + 163.5, Y_INITIAL + 475, 210);
    draw_Castle_Road_Horizontal_TopView(X_INITIAL + 163.5, Y_INITIAL + 350, 10);
    draw_Castle_Road_Horizontal_TopView(X_INITIAL + 203.5, Y_INITIAL + 350, 35);
    draw_Castle_Road_Horizontal_TopView(X_INITIAL + 298.5, Y_INITIAL + 350, 35);
    draw_Castle_Road_Horizontal_TopView(X_INITIAL + 363.5, Y_INITIAL + 350, 10);

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                               Draw the castle courtyard                                              *
*                                                                                                                      *
***********************************************************************************************************************/
//castle courtyard
void draw_Castle_Courtyard_Limit_TopView(GLfloat x, GLfloat y, GLfloat xSize, GLfloat ySize) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    glVertex3f(x, y, 0);
    glVertex3f(x + xSize, y, 0);
    glVertex3f(x + xSize, y + ySize, 0);
    glVertex3f(x, y + ySize, 0);

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

                        /**********************************************************************/
//roundabout outside
void draw_Castle_Courtyard_Roundabout_Outside_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    draw_Circle(x, y, 0, 2 * PI, 7.5, 7.5);  //Center (x, y)

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

//roundabout inside
void draw_Castle_Courtyard_Roundabout_Inside_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    draw_Circle(x, y, 0, 2 * PI, 2.5, 2.5);  //Center (x, y)

    //sets the ending of the draw
    glEnd();

    //set the drawing to be rendered
    glFlush();

}

                        /**********************************************************************/

void draw_Castle_Courtyard_Store_TopView(GLfloat x, GLfloat y, GLfloat hSize, GLfloat vSize) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    glVertex3f(x, y, 0);
    glVertex3f(x + hSize, y, 0);
    glVertex3f(x + hSize, y + vSize, 0);
    glVertex3f(x, y + vSize, 0);

    // sets the ending of the draw
    glEnd();

    // set the drawing to be rendered
    glFlush();

}

void draw_Castle_Courtyard_Road_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    glVertex3f(x, y, 0);
    glVertex3f(x + 5, y, 0);
    glVertex3f(x + 5, y + 5, 0);
    glVertex3f(x, y + 5, 0);

    // sets the ending of the draw
    glEnd();

    // set the drawing to be rendered
    glFlush();

}

/***********************************************************************************************************************
************************************************************************************************************************
*********************************Sets the origin point position of the castle courtyard*********************************
************************************************************************************************************************
***********************************************************************************************************************/
//castle road
void draw_Castle_Courtyard_TopView() {

    draw_Castle_Courtyard_Limit_TopView(X_INITIAL + 173.5, Y_INITIAL + 200, 190, 65);

    draw_Castle_Courtyard_Roundabout_Outside_TopView(X_INITIAL + 267.5, Y_INITIAL + 229.5);

    draw_Castle_Courtyard_Roundabout_Inside_TopView(X_INITIAL + 267.5, Y_INITIAL + 229.5);

    draw_Castle_Courtyard_Store_TopView(X_INITIAL + 177.5, Y_INITIAL + 230, 10, 32);
    draw_Castle_Courtyard_Store_TopView(X_INITIAL + 187.5, Y_INITIAL + 252, 30, 10);

    draw_Castle_Courtyard_Store_TopView(X_INITIAL + 197.5, Y_INITIAL + 220, 30, 20);

    draw_Castle_Courtyard_Store_TopView(X_INITIAL + 187.5, Y_INITIAL + 200, 40, 10);

    draw_Castle_Courtyard_Store_TopView(X_INITIAL + 297.5, Y_INITIAL + 200, 20, 40);

    draw_Castle_Courtyard_Store_TopView(X_INITIAL + 327.5, Y_INITIAL + 200, 20, 20);

    draw_Castle_Courtyard_Store_TopView(X_INITIAL + 347.5, Y_INITIAL + 230, 10, 32);
    draw_Castle_Courtyard_Store_TopView(X_INITIAL + 297.5, Y_INITIAL + 252, 40, 10);

    for (int h = 253; h < 281; h += 5) {

        for (int v = 165; v < 210; v += 5) {

            draw_Castle_Courtyard_Road_TopView(X_INITIAL + h, Y_INITIAL + v);

        }

    }

    for (int h = 248; h < 286; h += 5) {

        for (int v = 210; v < 250; v += 5) {

            draw_Castle_Courtyard_Road_TopView(X_INITIAL + h, Y_INITIAL + v);

        }

    }

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                                 Draw the castle hallway                                                 *
*                                                                                                                      *
***********************************************************************************************************************/
//castle road
void draw_Castle_Hallway_TopView(GLfloat x, GLfloat y, GLfloat sizeH, GLfloat sizeV) {

    //sets the beginning of the inside draw part
//    glBegin(GL_LINE_LOOP);

    for (GLfloat h = x; h < x + sizeH; h += 2.5) {

        for (GLfloat v = y; v < y + sizeV; v += 2.5) {

            draw_RoofTiles_Square_TopView(h, v);

        }

    }

}

/***********************************************************************************************************************
************************************************************************************************************************
**********************************Sets the origin point position of the castle hallways*********************************
************************************************************************************************************************
***********************************************************************************************************************/
//castle road
void draw_Castle_Hallway_TopView() {

    draw_Castle_Hallway_TopView(X_INITIAL + 203.5, Y_INITIAL + 435, 130, 30);
    draw_Castle_Hallway_TopView(X_INITIAL + 203.5, Y_INITIAL + 265, 130, 30);

    draw_Castle_Hallway_TopView(X_INITIAL + 173.5, Y_INITIAL + 265, 30, 200);
    draw_Castle_Hallway_TopView(X_INITIAL + 333.5, Y_INITIAL + 265, 30, 200);

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                              Draws the castle buildings                                              *
*                                                                                                                      *
***********************************************************************************************************************/

//castle front left wall
void draw_Castle_CentralBuilding_TopView(GLfloat x, GLfloat y) {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

    glVertex3f(x, y, 0);
    glVertex3f(x + 60, y, 0);
    glVertex3f(x + 60, y + 60, 0);
    glVertex3f(x, y + 60, 0);

    // sets the ending of the draw
    glEnd();

    // set the drawing to be rendered
    glFlush();

}

/***********************************************************************************************************************
************************************************************************************************************************
************************************Sets the origin point position of the castle walls**********************************
************************************************************************************************************************
***********************************************************************************************************************/

///castle walls
void draw_Castle_Buildings_TopView(/*values*/) {

    draw_Castle_CentralBuilding_TopView(X_INITIAL + 238.5, Y_INITIAL + 335);

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                          Draws the old castle walls it self                                          *
*                                                                                                                      *
***********************************************************************************************************************/

//castle old tower side top
void draw_Castle_OldTower_Full_TopView(GLfloat x, GLfloat y, GLfloat size) {

    for (GLfloat i = size / 2; i > 1; i -= 2) {

        glBegin(GL_LINE_LOOP);

        draw_Circle(x - size - 5, y, 0, 2 * PI, i, i);

        glEnd();

        glBegin(GL_LINE_LOOP);

        draw_Circle(x + size + 5, y, 0, 2 * PI, i, i);

        glEnd();

    }

    for (GLfloat i = size; i > 0; i -= 2) {

        glBegin(GL_LINE_LOOP);

        draw_Circle(x, y, 0, 2 * PI, i, i);

        glEnd();

    }

    glFlush();

}

/***********************************************************************************************************************
************************************************************************************************************************
**********************************Sets the origin point position of the old castle walls********************************
************************************************************************************************************************
***********************************************************************************************************************/

///castle old tower
void draw_Castle_OldTower_TopView(/*values*/) {

    draw_Castle_OldTower_Full_TopView(X_INITIAL + 268.5, Y_INITIAL + 515, 20);

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
	glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW, Y_MAX_VIEW, Z_MIN_VIEW, Z_MAX_VIEW);

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
