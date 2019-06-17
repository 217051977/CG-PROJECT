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

void light0() {

	glLightfv(GL_LIGHT0, GL_AMBIENT, ambientLight);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseLight);
	glLightfv(GL_LIGHT0, GL_SPECULAR, specularLight);

	glEnable(GL_LIGHT0);

}

void lightning() {

	//glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_TRUE);
	glEnable(GL_LIGHTING);
	
	light0();

	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, globalLight);

	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, materialAmbientAndDiffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, materialSpecular);
	glMaterialfv(GL_FRONT, GL_SHININESS, materialShine);

}

// Initialization routine.
void setup(void) {

    //set the color of the background
    glClearColor(B_RED, B_GREEN, B_BLUE, B_ALPHA);

	glEnable(GL_DEPTH_TEST);

	lightning();

	glGenTextures(20, texture);

	loadExternalTextures();

	glEnable(GL_TEXTURE_2D);

	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

	glEnable(GL_CULL_FACE);
	glCullFace(GL_BACK);

}