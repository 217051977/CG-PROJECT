/***********************************************************************************************************************
*                                                                                                                      *
*                                                     RoofTiles.h                                                      *
*                                                                                                                      *
*                                  This file is responsible to create the roof tiles                                   *
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
			 * increase the figure size by
			 *     2.5 times of the x value
			 *     2.5 times of the y value
			 *     0.5 times of the z value
			 * draw_6_Faces_Figure()
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