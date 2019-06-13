/***********************************************************************************************************************
*                                                                                                                      *
*                                                       Circle.h                                                       *
*                                                                                                                      *
*                                     This file is responsible to create a circle                                      *
*                                                                                                                      *
************************************************************************************************************************
*                                                                         *                                            *
*                               GROUP MEMBERS:                            *         GROUP MEMBERS' NUMBERS:            *
*                                                                         *                                            *
*                           Bruno Miguel Dias Leal                        *               Nº 21705197                  *
*              Diana Margarida Simões Soares da Silva de Jesus            *               Nº 21703012                  *
*                                                                         *                                            *
***********************************************************************************************************************/

//makes the program where this header will be used add it just one time this header to it
#pragma once

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

void draw_Inverted_Circle(GLfloat starAngle, GLfloat finalAngle, GLfloat xSize, GLfloat ySize, GLfloat height) {

    //  from the start angle increase 0.0001 unit until it reach the final angle
    for (GLfloat angle = starAngle; angle > finalAngle; angle -= 0.0001) {

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



void draw_Vertical_Circle(GLfloat starAngle, GLfloat finalAngle, GLfloat xSize, GLfloat ySize, GLfloat height) {

    //  from the start angle increase 0.0001 unit until it reach the final angle
    for (GLfloat angle = starAngle; angle < finalAngle; angle += 0.0001) {

        /*
         * draw the vertex in the position:
         *      xSize times the value of the cos(angle) for the x axis
         *      ySize times the value of the sin(angle) for the y axis
         *      height for the z axis
         *              angle is the value fo the current angle set by this loop (for)
         * */
        glVertex3f(xSize * cosf(angle), ySize * sinf(angle), 1);

    }

}

void draw_Vertical_Inverted_Circle(GLfloat starAngle, GLfloat finalAngle, GLfloat xSize, GLfloat ySize, GLfloat height) {

    //  from the start angle increase 0.0001 unit until it reach the final angle
    for (GLfloat angle = starAngle; angle > finalAngle; angle -= 0.0001) {

        /*
         * draw the vertex in the position:
         *      xSize times the value of the cos(angle) for the x axis
         *      ySize times the value of the sin(angle) for the y axis
         *      height for the z axis
         *              angle is the value fo the current angle set by this loop (for)
         * */
        glVertex3f(xSize * cosf(angle), height + ySize * sinf(angle), 1);

    }

}