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
    printf("The value of the variable perspective_Or_Animation is at %d\n", perspective_Or_Animation);

    printf("The value of the variable scene_To_print to %d\n\n", scene_To_print);

    setPerspectives(perspective_Or_Animation);

}

// reshapes the OpenGL window
void resize(int w, int h) {

    //set the view -> in this case it fills all the OpenGL Window
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);

    visualization_Manager();

}