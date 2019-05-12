/***********************************************************************************************************************
*                                                                                                                      *
*                                                       Resize.h                                                       *
*                                                                                                                      *
*                                  This file is responsible manage the view settings                                   *
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

void visualization_Manager() {

    //set to the matrix projection style
    glMatrixMode(GL_PROJECTION);
    //reset the matrix for an identity one
    glLoadIdentity();
    //set the orthographic view (perpendicular) with the size:
    //x_min, x_max, y_min, y_max, z_min, z_max (from the observer perspective!)
    //AKA -> left, right, top, down, near, far

//    glRotatef(90, 0, 1, 0);
//    glRotatef(90, 1, 0, 0);

    printf("the perspective_Or_Animation is at %d", perspective_Or_Animation);

    setPerspectives(perspective_Or_Animation);
//    glOrtho(X_MIN_VIEW + 215, X_MIN_VIEW + 325, 19, 74, - 140, 5);
//    glTranslatef(- X_INITIAL, - Y_INITIAL, 0);

}

// reshapes the OpenGL window
void resize(int w, int h) {

    //set the view -> in this case it fills all the OpenGL Window
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);

    visualization_Manager();

}