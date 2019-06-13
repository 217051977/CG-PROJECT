/***********************************************************************************************************************
*                                                                                                                      *
*                                                       SetUp.U                                                        *
*                                                                                                                      *
*                            This file is responsible manage any set up made to the program                            *
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

// Initialization routine.
void setup(void) {

    //set the color of the background
    glClearColor(B_RED, B_GREEN, B_BLUE, B_ALPHA);

	glEnable(GL_DEPTH_TEST);

	glGenTextures(2, texture);

	loadExternalTextures();

	glEnable(GL_TEXTURE_2D);

	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);

	glEnable(GL_CULL_FACE);
	glCullFace(GL_BACK);

}