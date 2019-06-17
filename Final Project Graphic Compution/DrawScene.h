/***********************************************************************************************************************
*                                                                                                                      *
*                                                      DrawScene.h                                                     *
*                                                                                                                      *
*                                      This file is responsible draw all drawings                                      *
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

void full() {

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
    draw_Castle_Roads();
	
    /**********************************************************************/
    draw_Castle_Hallway();
	
    /**********************************************************************/
    draw_Castle_Courtyard();
	
    /**********************************************************************/
    draw_Castle_OldTower();
	
    /**********************************************************************/
    draw_Castle_Buildings();

}

void entrance() {

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
    draw_MiddleTowers_connection();
	
    /**********************************************************************/
    draw_Gate_Entrance();
	
    /**********************************************************************/
    draw_EntranceGargoyles();

}

void hallway() {

    draw_Castle_Hallway();

}

void courtyard() {

    draw_Castle_Courtyard();

}

void mainBuild() {

    draw_Castle_Buildings();

}

void deliveryDoor() {

    draw_Delivery();

}

void castle() {

    draw_RockBlock();

    /**********************************************************************/
    draw_Delivery();

    /**********************************************************************/
    draw_Castle_Walls();

    /**********************************************************************/
    draw_Castle_Roads();

    /**********************************************************************/
    draw_Castle_Hallway();

    /**********************************************************************/
    draw_Castle_Courtyard();

    /**********************************************************************/
    draw_Castle_OldTower();

    /**********************************************************************/
    draw_Castle_Buildings();

}

// Drawing routine.
void drawScene(void) {

	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, materialAmbientAndDiffuse);

	//set the screen to the background color
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glFrontFace(GL_CW);

	glLoadIdentity();

	set_LookAt(perspective_Or_Animation);
	//glRotatef(draw_angleUp, 1, 0, 0);
	//glRotatef(draw_angleUp, 0, 0, 1);

    //set the next draw color
    // RBG (Red Blue Green) -> (0-1, 0-1, 0-1)
    //glColor3f(D_RED, D_GREEN, D_BLUE);

    switch (scene_To_print) {

        case 0: {

            full();

        }break;

        case 1: {

            entrance();

        }break;

        case 2: {

            hallway();

        }break;

        case 3: {

            courtyard();

        }break;

        case 4: {

            mainBuild();

        }break;

        case 5: {

            deliveryDoor();

        }break;

        case 6: {

            castle();

        }break;

    }

	// Material properties of the sphere (only the front is ever seen).
	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, materialAmbientAndDiffuse_Sky);

	drawSkyBox();

    //send the scene to be rendered
    glutSwapBuffers();

}