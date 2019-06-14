/***********************************************************************************************************************
*                                                                                                                      *
*                                                     Gargoyles.h                                                      *
*                                                                                                                      *
*                                   This file is responsible to create the gargoyles                                   *
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

//gargoyles
void draw_Gargoyles() {

    //sets the beginning of the inside draw part
    glBegin(GL_LINE_LOOP);

	glTranslatef(0, 0, -1);
	create_Top_Face(0, 0, 1, 1);

    //sets the ending of the draw
    glEnd();

}