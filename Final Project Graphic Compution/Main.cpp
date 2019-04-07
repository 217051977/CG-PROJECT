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

//define the PI value
#define PI 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912983367336244065664308602139494639522473719070217986094370277053921717629317675238467481846766940513200056812714526356082778577134275778960917363717872146844090122495343014654958537105079227968925892354201995611212902196086403441815981362977477130996051870721134999999837297804995105973173281609631859502445945534690830264252230825334468503526193118817101000313783875288658753320838142061717766914730359825349042875546873115956286388235378759375195778185778053217122680661300192787661119590921642019893809525720106548586327886593615338182796823030195203530185296899577362259941389124972177528347913151557485724245415069595082953311686172785588907509838175463746493931925506040092770167113900984882401285836160356370766010471018194295559619894676783744944825537977472684710404753464620804668425906949129331367702898915210475216205696602405803815019351125338243003558764024749647326391419927260426992279678235478163600934172164121992458631503028618297455570674983850549458858692699569092721079750930295532116534498720275596023648066549911988183479775356636980742654252786255181841757467289097777279380008164706001614524919217321721477235014144197356854816136115735255213347574184946843852332390739414333454776241686251898356948556209921922218427255025425688767179049460165346680498862723279178608578438382796797668145410095388378636095068006422512520511739298489608412848862694560424196528502221066118630674427862203919494504712371378696095636437191728746776465757396241389086583264599581339047802759009946576407895126946839835259570982582262052248

//makes implicit the std:: instruction to all std namespace
using namespace std;

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
double X_WINDOW_SIZE = 800, Y_WINDOW_SIZE = 1000;
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
*                                                                                                                      *
*                                                     Create Faces                                                     *
*                                                                                                                      *
***********************************************************************************************************************/
//create bottom face
void create_Bot_Face() {

//  sets the beginning with only the lines that surrounds it
	glBegin(GL_LINE_LOOP);

	/*
	 * set a vertex on the position (0, 0, 0)
	 * set a vertex on the position (1, 0, 0)
	 * set a vertex on the position (1, 1, 0)
	 * set a vertex on the position (0, 1, 0)
	 * */
	glVertex3f(0, 0, 0);
	glVertex3f(1, 0, 0);
	glVertex3f(1, 1, 0);
	glVertex3f(0, 1, 0);

//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

void create_Left_Face() {

//  sets the beginning with only the lines that surrounds it
    glBegin(GL_LINE_LOOP);

    /*
     * set a vertex on the position (0, 0, 0)
     * set a vertex on the position (0, 1, 0)
     * set a vertex on the position (0, 1, 1)
     * set a vertex on the position (0, 0, 1)
     * */
	glVertex3f(0, 0, 0);
	glVertex3f(0, 1, 0);
	glVertex3f(0, 1, 1);
	glVertex3f(0, 0, 1);

//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

}

void create_Front_Face() {

//  sets the beginning with only the lines that surrounds it
    glBegin(GL_LINE_LOOP);

    /*
     * set a vertex on the position (0, 0, 0)
     * set a vertex on the position (1, 0, 0)
     * set a vertex on the position (1, 0, 1)
     * set a vertex on the position (0, 0, 1)
     * */
	glVertex3f(0, 0, 0);
	glVertex3f(1, 0, 0);
	glVertex3f(1, 0, 1);
	glVertex3f(0, 0, 1);

//	sets the ending of the draw connecting the first vertex draw with the last
    glEnd();

}

/***********************************************************************************************************************
************************************************************************************************************************
*                                                     Draw Circles                                                     *
************************************************************************************************************************
***********************************************************************************************************************/
//draw circle
void draw_Circle(GLfloat starAngle, GLfloat finalAngle, GLfloat xSize, GLfloat ySize, GLfloat height) {

//  from the start angle increase 0.0001 unit until it reach the final angle
    for (GLfloat angle = starAngle; angle < finalAngle; angle += 0.0001) {

        /*
         * draw the vertex in the position:
         *      xSize times the value of the cos(angle) for the x axis
         *      ySize times the value of the sin(angle) for the y axis
         *      height for the z axis
         *              angle is the value fo the current angle set by this loop (for)
         * */
        glVertex3f(xSize * cosf(angle), ySize * sinf(angle), height);

    }

}

/***********************************************************************************************************************
************************************************************************************************************************
*                                                     Draw figures                                                     *
************************************************************************************************************************
***********************************************************************************************************************/
//draw 6 faces figure
void draw_6_Faces_Figure() {

	//top
	/*
	 * save the matrix status
	 * translate the figure 0.5 units up (z axis)
     * increase the figure size by
     *      2.5 times of the x value
     *      2.5 times of the y value
	 * call the function create_Bot_Face()
	 * every vertex non modified keeps the same as it was, but the modified ones are changed
	 * */
	glPushMatrix();
	glTranslatef(0, 0, 1);
	create_Bot_Face();
	glPopMatrix();

	//bot
    /*
     * save the matrix status
     * increase the figure size by
     *      2.5 times of the x value
     *      2.5 times of the y value
     * call the function create_Bot_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	create_Bot_Face();
	glPopMatrix();

	//front
    /*
     * save the matrix status
     * increase the figure size by
     *      2.5 times of the x value
     *      0.5 times of the z value
     * call the function create_Front_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	create_Front_Face();
	glPopMatrix();

	//back
    /*
     * save the matrix status
     * translate the figure 2.5 units up (y axis)
     * increase the figure size by
     *      2.5 times of the x value
     *      0.5 times of the z value
     * call the function create_Front_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(0, 1, 0);
	create_Front_Face();
	glPopMatrix();

	//left
    /*
     * save the matrix status
     * increase the figure size by
     *      2.5 times of the y value
     *      0.5 times of the z value
     * call the function create_Left_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	create_Left_Face();
	glPopMatrix();

	//right
    /*
     * save the matrix status
     * translate the figure 2.5 units up (x axis)
     * increase the figure size by
     *      2.5 times of the y value
     *      0.5 times of the z value
     * call the function create_Left_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(1, 0, 0);
	create_Left_Face();
	glPopMatrix();

}

//draw cylinder figure
void draw_Cylinder_Figure() {

//  sets the beginning with only the lines that surrounds it
    glBegin(GL_LINE_LOOP);

//  call the function draw_Circle()
    draw_Circle(0, 2 * PI, 1, 1, 0);

//  call the function draw_Circle()
    draw_Circle(0, 2 * PI, 1, 1, 1);

//  sets the ending of the draw connecting the first vertex draw with the last
    glEnd();

}

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
	draw_Left_RockBlock();                      //(100 ,300)
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
             * draw_RoofTiles_Square()
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

//flag (gate)
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
     *
     *      save the matrix status
     *      increase the figure size by
     *           100 times of the x value
     *           5 times of the y value
     *           100 times of the z value
     *      draw_6_Faces_Figure()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * translate the figure
     *      -5 units for the x value
     *      -10 units for the y value
     *
     *      save the matrix status
     *      increase the figure size by
     *           10 times of the x value
     *           10 times of the y value
     *           70 times of the z value
     *      draw_6_Faces_Figure()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * translate the figure
     *      100 units for the x value
     *
     *      save the matrix status
     *      increase the figure size by
     *           10 times of the x value
     *           10 times of the y value
     *           70 times of the z value
     *      draw_6_Faces_Figure()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * translate the figure
     *      -93 units for the x value
     *      2.5 units for the y value
     * draw_Flag()
     * translate the figure
     *      95 units for the x value
     * draw_Flag()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 220, Y_INITIAL + 30, 0);

	glPushMatrix();
	glScalef(100, 5, 100);
	draw_6_Faces_Figure();
	glPopMatrix();

	glTranslatef(-5, -10, 0);

//	make the flag holder
    glPushMatrix();
    glScalef(10, 10, 70);
    draw_6_Faces_Figure();
    glPopMatrix();

	glTranslatef(100, 0, 0);

//	make the flag holder
    glPushMatrix();
    glScalef(10, 10, 70);
    draw_6_Faces_Figure();
    glPopMatrix();

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
void draw_EntranceGargoyles() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 220 units for the x value
     *      Y_INITIAL - 10 units for the y value
     * draw_Gargoyles()
     * translate the figure
     *      90 units for the x value
     * draw_Gargoyles()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 220, Y_INITIAL - 10, 0);
	draw_Gargoyles();
	glTranslatef(90, 0, 0);
	draw_Gargoyles();
	glPopMatrix();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                            Draws the deliver road it self                                            *
*                                                                                                                      *
***********************************************************************************************************************/

void draw_FrontDoor() {

    /*
     * save the matrix status
     * translate the figure
     *      2.5 for the x value
     *      2.5 for the y value
     *
     *      save the matrix status
     *      translate the figure
     *           0 units for the x value
     *           0 units for the y value
     *           100 units for the z axis
     *
     *      sets the beginning with only the lines that surrounds it
     *      draw_Circle()
     *      draw_Circle()
     *      draw_Circle()
     *      sets the ending of the draw connecting the first vertex draw with the last
     *
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     *      save the matrix status
     *      increase the figure size by
     *           5 times of the x value
     *           5 times of the y value
     *           100 times of the z value
     *      draw_Cylinder_Figure()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * translate the figure
     *      35 for the x value
     *
     *      save the matrix status
     *      translate the figure
     *           0 units for the x value
     *           0 units for the y value
     *           100 units for the z axis
     *
     *      sets the beginning with only the lines that surrounds it
     *      draw_Circle()
     *      draw_Circle()
     *      draw_Circle()
     *      sets the ending of the draw connecting the first vertex draw with the last
     *
     *      save the matrix status
     *      increase the figure size by
     *           5 times of the x value
     *           5 times of the y value
     *           100 times of the z value
     *      draw_Cylinder_Figure()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(2.5, 2.5, 0);

//  make the roof of the tower
    glPushMatrix();
    glTranslatef(0, 0, 100);
    glBegin(GL_LINE_LOOP);

    draw_Circle(0, 2 * PI, 5, 5, 0);
    draw_Circle(0, 2 * PI, 3, 3, 5);
    draw_Circle(0, 2 * PI, 1, 1, 10);

    glEnd();
    glPopMatrix();

//  make the body of the tower
    glPushMatrix();
    glScalef(5, 5, 100);
    draw_Cylinder_Figure();
    glPopMatrix();

    glTranslatef(35, 0, 0);

//  make the roof of the tower
    glPushMatrix();
    glTranslatef(0, 0, 100);
    glBegin(GL_LINE_LOOP);

    draw_Circle(0, 2 * PI, 5, 5, 0);
    draw_Circle(0, 2 * PI, 3, 3, 5);
    draw_Circle(0, 2 * PI, 1, 1, 10);

    glEnd();
    glPopMatrix();

//  make the body of the tower
    glPushMatrix();
    glScalef(5, 5, 100);
    draw_Cylinder_Figure();
    glPopMatrix();

    glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      7 for the x value
     *
     *      save the matrix status
     *      increase the figure size by
     *           100 times of the x value
     *           5 times of the y value
     *           100 times of the z value
     *      draw_6_Faces_Figure()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * draw_Gate_Head()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(7, 0, 0);

    glPushMatrix();
    glScalef(26, 5, 100);
    draw_6_Faces_Figure();
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
************************************************************************************************************************
***********************************Sets the origin point position of the castle roads***********************************
************************************************************************************************************************
***********************************************************************************************************************/
//castle road
void draw_Castle_Road() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 252.5 for the x value
     *      Y_INITIAL + 295 for the y value
     * increase the figure size by
     *      30 times of the x value
     *      40 times of the y value
     * create_Bot_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 252.5, Y_INITIAL + 295, 0);
	glScalef(30, 40, 0);
	create_Bot_Face();
	glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 252.5 for the x value
     *      Y_INITIAL + 395 for the y value
     * increase the figure size by
     *      30 times of the x value
     *      40 times of the y value
     * create_Bot_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 252.5, Y_INITIAL + 395, 0);
	glScalef(30, 40, 0);
	create_Bot_Face();
	glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 252.5 for the x value
     *      Y_INITIAL + 465 for the y value
     * increase the figure size by
     *      30 times of the x value
     *      10 times of the y value
     * create_Bot_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 252.5, Y_INITIAL + 465, 0);
	glScalef(30, 10, 0);
	create_Bot_Face();
	glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 373.5 for the x value
     *      Y_INITIAL + 200 for the y value
     * increase the figure size by
     *      30 times of the x value
     *      305 times of the y value
     * create_Bot_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 373.5, Y_INITIAL + 200, 0);
	glScalef(30, 305, 0);
	create_Bot_Face();
	glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 133.5 for the x value
     *      Y_INITIAL + 200 for the y value
     * increase the figure size by
     *      30 times of the x value
     *      305 times of the y value
     * create_Bot_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 133.5, Y_INITIAL + 200, 0);
	glScalef(30, 305, 0);
	create_Bot_Face();
	glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 163.5 for the x value
     *      Y_INITIAL + 200 for the y value
     * increase the figure size by
     *      10 times of the x value
     *      30 times of the y value
     * create_Bot_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 163.5, Y_INITIAL + 200, 0);
	glScalef(10, 30, 0);
	create_Bot_Face();
	glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 363.5 for the x value
     *      Y_INITIAL + 200 for the y value
     * increase the figure size by
     *      10 times of the x value
     *      30 times of the y value
     * create_Bot_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 363.5, Y_INITIAL + 200, 0);
	glScalef(10, 30, 0);
	create_Bot_Face();
	glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 163.5 for the x value
     *      Y_INITIAL + 475 for the y value
     * increase the figure size by
     *      210 times of the x value
     *      30 times of the y value
     * create_Bot_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 163.5, Y_INITIAL + 475, 0);
	glScalef(210, 30, 0);
	create_Bot_Face();
	glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 163.5 for the x value
     *      Y_INITIAL + 350 for the y value
     * increase the figure size by
     *      10 times of the x value
     *      30 times of the y value
     * create_Bot_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 163.5, Y_INITIAL + 350, 0);
	glScalef(10, 30, 0);
	create_Bot_Face();
	glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 203.5 for the x value
     *      Y_INITIAL + 350 for the y value
     * increase the figure size by
     *      35 times of the x value
     *      30 times of the y value
     * create_Bot_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 203.5, Y_INITIAL + 350, 0);
	glScalef(35, 30, 0);
	create_Bot_Face();
	glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 298.5 for the x value
     *      Y_INITIAL + 350 for the y value
     * increase the figure size by
     *      35 times of the x value
     *      30 times of the y value
     * create_Bot_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 298.5, Y_INITIAL + 350, 0);
	glScalef(35, 30, 0);
	create_Bot_Face();
	glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 363.5 for the x value
     *      Y_INITIAL + 350 for the y value
     * increase the figure size by
     *      10 times of the x value
     *      30 times of the y value
     * create_Bot_Face()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 363.5, Y_INITIAL + 350, 0);
	glScalef(10, 30, 0);
	create_Bot_Face();
	glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
*********************************Sets the origin point position of the castle courtyard*********************************
************************************************************************************************************************
***********************************************************************************************************************/
//castle road
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
     *
     *      save the matrix status
     *      increase the figure size by
     *           10 times of the x value
     *           32 times of the y value
     *           15 times of the z value
     *      draw_Castle_Courtyard_Store()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * translate the figure
     *      10 for the x value
     *      22 for the y value
     *
     *      save the matrix status
     *      increase the figure size by
     *           30 times of the x value
     *           10 times of the y value
     *           15 times of the z value
     *      draw_Castle_Courtyard_Store()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * translate the figure
     *      10 for the x value
     *      -32 for the y value
     *
     *      save the matrix status
     *      increase the figure size by
     *           30 times of the x value
     *           20 times of the y value
     *           15 times of the z value
     *      draw_Castle_Courtyard_Store()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * translate the figure
     *      -10 for the x value
     *      -20 for the y value
     *
     *      save the matrix status
     *      increase the figure size by
     *           40 times of the x value
     *           10 times of the y value
     *           15 times of the z value
     *      draw_Castle_Courtyard_Store()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * translate the figure
     *      110 for the x value
     *
     *      save the matrix status
     *      increase the figure size by
     *           20 times of the x value
     *           40 times of the y value
     *           15 times of the z value
     *      draw_Castle_Courtyard_Store()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * translate the figure
     *      30 for the x value
     *
     *      save the matrix status
     *      increase the figure size by
     *           20 times of the x value
     *           20 times of the y value
     *           15 times of the z value
     *      draw_Castle_Courtyard_Store()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * translate the figure
     *      20 for the x value
     *      30 for the y value
     *
     *      save the matrix status
     *      increase the figure size by
     *           12 times of the x value
     *           32 times of the y value
     *           15 times of the z value
     *      draw_Castle_Courtyard_Store()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * translate the figure
     *      -50 for the x value
     *      22 for the y value
     *
     *      save the matrix status
     *      increase the figure size by
     *           40 times of the x value
     *           10 times of the y value
     *           15 times of the z value
     *      draw_Castle_Courtyard_Store()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 177.5, Y_INITIAL + 230, 0);

    glPushMatrix();
    glScalef(10, 32, 15);
	draw_6_Faces_Figure();
	glPopMatrix();

	glTranslatef(10, 22, 0);
	glPushMatrix();
	glScalef(30, 10, 15);
	draw_6_Faces_Figure();
    glPopMatrix();

	glTranslatef(10, -32, 0);
    glPushMatrix();
    glScalef(30, 20, 15);
	draw_6_Faces_Figure();
	glPopMatrix();

	glTranslatef(-10, -20, 0);
    glPushMatrix();
    glScalef(40, 10, 15);
	draw_6_Faces_Figure();
	glPopMatrix();

	glTranslatef(110, 0, 0);
    glPushMatrix();
    glScalef(20, 40, 15);
	draw_6_Faces_Figure();
	glPopMatrix();

	glTranslatef(30, 0, 0);
    glPushMatrix();
    glScalef(20, 20, 15);
	draw_6_Faces_Figure();
	glPopMatrix();

	glTranslatef(20, 30, 0);
    glPushMatrix();
    glScalef(12, 32, 15);
	draw_6_Faces_Figure();
	glPopMatrix();

	glTranslatef(-50, 22, 0);
    glPushMatrix();
    glScalef(40, 10, 15);
	draw_6_Faces_Figure();
	glPopMatrix();

	glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 177.5 for the x value
     *      Y_INITIAL + 230 for the y value
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
    glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 177.5 for the x value
     *      Y_INITIAL + 230 for the y value
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
    glTranslatef(248, 210, 0);
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
************************************************************************************************************************
**********************************Sets the origin point position of the castle hallways*********************************
************************************************************************************************************************
***********************************************************************************************************************/
//castle road
void draw_Castle_Hallway() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 333.5 of the x value
     *      Y_INITIAL + 265 of the y value
     *
     *      save the matrix status
     *      increase the figure size by
     *           30 times of the x value
     *           200 times of the y value
     *           40 times of the z value
     *      draw_6_Faces_Figure()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * draw_Castle_Hallway_Roof()
     *
     *
     * translate the figure
     *      -130 of the x value
     *      170 of the x value
     *
     *      save the matrix status
     *      increase the figure size by
     *           130 times of the x value
     *           30 times of the y value
     *           40 times of the z value
     *      draw_6_Faces_Figure()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     *      save the matrix status
     *      translate the figure
     *           40 for the y value
     *      draw_WallEdification_Roof()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     *
     * translate the figure
     *      -170 of the y value
     *
     *      save the matrix status
     *      increase the figure size by
     *           130 times of the x value
     *           30 times of the y value
     *           40 times of the z value
     *      draw_6_Faces_Figure()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     *      save the matrix status
     *      translate the figure
     *           40 for the y value
     *      draw_WallEdification_Roof()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     *
     * translate the figure
     *      -30 of the x value
     *
     *      save the matrix status
     *      increase the figure size by
     *           30 times of the x value
     *           200 times of the y value
     *           40 times of the z value
     *      draw_6_Faces_Figure()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     *      save the matrix status
     *      translate the figure
     *           40 for the y value
     *      draw_WallEdification_Roof()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
	glPushMatrix();
	glTranslatef(X_INITIAL + 333.5, Y_INITIAL + 265, 0);

	glPushMatrix();

//	make the hallway body
    glScalef(30, 200, 40);
    draw_6_Faces_Figure();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0, 0, 40);
    draw_WallEdification_Roof(30, 200);
    glPopMatrix();


	glTranslatef(-130, 170, 0);

    glPushMatrix();
    glScalef(130, 30, 40);

//	make the hallway body
    draw_6_Faces_Figure();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0, 0, 40);
    draw_WallEdification_Roof(130, 30);
    glPopMatrix();


	glTranslatef(0, -170, 0);

    glPushMatrix();
    glScalef(130, 30, 40);

//	make the hallway body
    draw_6_Faces_Figure();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0, 0, 40);
    draw_WallEdification_Roof(130, 30);
    glPopMatrix();


	glTranslatef(-30, 0, 0);

    glPushMatrix();
    glScalef(30, 200, 40);

//	make the hallway body
    draw_6_Faces_Figure();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0, 0, 40);
    draw_WallEdification_Roof(30, 200);
    glPopMatrix();

	glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
************************************Sets the origin point position of the castle walls**********************************
************************************************************************************************************************
***********************************************************************************************************************/

//castle walls
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
    glPushMatrix();
    glScalef(60, 60, 70);
    draw_6_Faces_Figure();
    glPopMatrix();

	glPopMatrix();

}

/***********************************************************************************************************************
*                                                                                                                      *
*                                          Draws the old castle walls it self                                          *
*                                                                                                                      *
***********************************************************************************************************************/

//castle old tower side top
void draw_Castle_OldTower_Roof(GLfloat size) {

//  while the size is bigger than one, decrease 2 units and increase 5 units in height
    for (GLfloat i = size, h = 0; i > 1; i -= 2, h += 5) {

//      call the function draw_Circle()
        draw_Circle(0, 2 * PI, i, i, h);

    }

}

//castle old tower side top
void draw_Castle_OldTower_Left(GLfloat size) {

    /*
     * save the matrix status
     * translate the figure
     *      -size - 5 for the x value
     *      200 for the z value
     *
     * sets the beginning with only the lines that surrounds it
     *      draw_Castle_OldTower_Roof()
     * sets the ending of the draw connecting the first vertex draw with the last
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(-size - 5, 0, 200);
    glBegin(GL_LINE_LOOP);
    draw_Castle_OldTower_Roof(size / 2);
    glEnd();
    glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      -size - 5 for the x value
     *      150 for the z value
     * increase the figure size by
     *      size / 2 times of the x value
     *      size / 2 times of the y value
     *      50 times of the z value
     * draw_Cylinder_Figure()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(-size - 5, 0, 150);
    glScalef(size / 2, size / 2, 50);

//  make the body of the tower
    draw_Cylinder_Figure();
    glPopMatrix();

}

//castle old tower side top
void draw_Castle_OldTower_Central(GLfloat size) {

    /*
     * save the matrix status
     * translate the figure
     *      200 for the z value
     *
     * sets the beginning with only the lines that surrounds it
     *      draw_Castle_OldTower_Roof()
     * sets the ending of the draw connecting the first vertex draw with the last
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(0, 0, 200);
    glBegin(GL_LINE_LOOP);
    draw_Castle_OldTower_Roof(size);
    glEnd();
    glPopMatrix();

    /*
     * save the matrix status
     * increase the figure size by
     *      size times of the x value
     *      size times of the y value
     *      200 times of the z value
     * draw_Cylinder_Figure()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glScalef(size, size, 200);

//  make the body of the tower
    draw_Cylinder_Figure();
    glPopMatrix();

}

//castle old tower side top
void draw_Castle_OldTower_Right(GLfloat size) {

    /*
     * save the matrix status
     * translate the figure
     *      size + 5 for the x value
     *      200 for the z value
     *
     * sets the beginning with only the lines that surrounds it
     *      draw_Castle_OldTower_Roof()
     * sets the ending of the draw connecting the first vertex draw with the last
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(size + 5, 0, 200);
    glBegin(GL_LINE_LOOP);
    draw_Castle_OldTower_Roof(size / 2);
    glEnd();
    glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      size + 5 for the x value
     *      150 for the z value
     * increase the figure size by
     *      size / 2 times of the x value
     *      size / 2 times of the y value
     *      50 times of the z value
     * draw_Cylinder_Figure()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(size + 5, 0, 150);
    glScalef(size / 2, size / 2, 50);

//  make the body of the tower
    draw_Cylinder_Figure();
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
	draw_Castle_Road();

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
//	glRotatef(75, 1, 0, 0);
//	glRotatef(65, 0, 0, 1);
	glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW, Z_FAR_VIEW);
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

/*
 * TODO: check if there's some duplicated code remaining
 *
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
 * TODO: try to make the left tower circular
 * */