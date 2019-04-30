/***********************************************************************************************************************
*                                                                                                                      *
*                                                     ArcBridge.h                                                      *
*                                                                                                                      *
*                                  This file is responsible to create the arc bridge                                   *
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