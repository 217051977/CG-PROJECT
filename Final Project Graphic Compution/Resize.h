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

//  debug
    printf(" *                     B_RED = %lf, B_GREEN = %lf, B_BLUE = %lf                     *\n", B_RED, B_GREEN, B_BLUE);

    printf(" *                     D_RED = %lf, D_GREEN = %lf, D_BLUE = %lf                     *\n", D_RED, D_GREEN, D_BLUE);

    printf(" *                                                                                                 * \n");

    if (perspective_Or_Animation < 0 || perspective_Or_Animation > 9) {

        printf(" *                                  perspective_Or_Animation = %d                                  *\n",perspective_Or_Animation);

    } else {

        printf(" *                                  perspective_Or_Animation = %d                                   *\n",perspective_Or_Animation);

    }

    printf(" *                                        scene_To_print = %d                                       *\n", scene_To_print);

    printf(" *                                                                                                 * \n");

    printf(" *                                   entranceDoors_AreOpening = %d                                  *\n", entranceDoors_AreOpening);

    printf(" *                                   deliveryDoors_AreOpening = %d                                  *\n", deliveryDoors_AreOpening);

    printf("\\***************************************************************************************************/\n");

    printf(" *                                                                                                 * \n");

    printf("/***************************************************************************************************\\\n");

    setPerspectives(perspective_Or_Animation);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

}

// reshapes the OpenGL window
void resize(int w, int h) {

    //set the view -> in this case it fills all the OpenGL Window
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);

    printf("\\***************************************************************************************************/\n");

    printf(" *                                                                                                 * \n");

    printf("/***************************************************************************************************\\\n");

    visualization_Manager();

}