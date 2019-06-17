/***********************************************************************************************************************
*                                                                                                                      *
*                                                        Draw.h                                                        *
*                                                                                                                      *
*                           This file is responsible to set all drawings in the right place                            *
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

/***********************************************************************************************************************
************************************************************************************************************************
*******************************Sets the origin point position of each the rock block draw*******************************
************************************************************************************************************************
***********************************************************************************************************************/

void draw_RockBlock() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 40 units for the x value
     *      Y_INITIAL + 40 units for the y value
     * draw_Left_RockBlock()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 40, Y_INITIAL + 40, 0);
    draw_Left_RockBlock();
    glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 40 units for the x value
     *      Y_INITIAL + 40 units for the y value
     * draw_LeftMiddle_RockBlock_Connection()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 40, Y_INITIAL + 40, 0);
    draw_LeftMiddle_RockBlock_Connection();     //(180 ,320)
    glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 180 units for the x value
     *      Y_INITIAL - 50 units for the y value
     * draw_Middle_RockBlock()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 180, Y_INITIAL - 50, 0);
    draw_Middle_RockBlock();                   //(280 ,250)
    glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 360 units for the x value
     *      Y_INITIAL + 20 units for the y value
     * draw_RightMiddle_RockBlock_Connection()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 360, Y_INITIAL + 20, 0);
    draw_RightMiddle_RockBlock_Connection();   //(460, 320)
    glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 380 units for the x value
     *      Y_INITIAL - 20 units for the y value
     * draw_Right_RockBlock()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 380, Y_INITIAL - 20, 0);
    draw_Right_RockBlock();                    //(495, 280)
    glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 245 units for the x value
     *      Y_INITIAL + 90 units for the y value
     * draw_DeliveryPath_RockBlock()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 245, Y_INITIAL + 90, 0);
    draw_DeliveryPath_RockBlock();             //(345, 390)
    glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 314 units for the x value
     *      Y_INITIAL - 65 units for the y value
     * draw_EntrancePath_RockBlock()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 314, Y_INITIAL - 65, 0);
    draw_EntrancePath_Full_RockBlock();
    glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 268.5 units for the x value
     *      Y_INITIAL + 365 units for the y value
     * draw_Castle_RockBlock()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 268.5, Y_INITIAL + 365, 0);
    draw_Castle_RockBlock();
    glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
*********************************Sets the origin point position of each the towers draw*********************************
************************************************************************************************************************
***********************************************************************************************************************/

//left tower
void draw_LeftTower() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 20 units for the x value
     *      Y_INITIAL + 20 units for the y value
     * draw_LeftTower_Crown()
     * translate the figure
     *      7 units for the x value
     *      7 units for the y value
     * draw_LeftTower_Crown_Spikes_Part()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 25, Y_INITIAL + 20, 0);

    glPushMatrix();
    glScalef(35, 35, 85);
    draw_LeftTower_Body_Down();
    glPopMatrix();

	glBindTexture(GL_TEXTURE_2D, 0);

    glPushMatrix();
    glTranslatef(0, 0, 85);
    glScalef(35, 35, 55);
    draw_LeftTower_Body_Top();
    glPopMatrix();

	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[3]);

	glTranslatef(0, -5, 140);

	glPushMatrix();
	glScalef(35, 5, 10);
	draw_LeftTower_Crown();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 40, 0);
	glScalef(35, 5, 10);
	draw_LeftTower_Crown();
	glPopMatrix();

	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[0]);

	glTranslatef(0, 0, 10);

	for (int x = 0; x < 40; x += 5) {

		if (x % 2 == 0) {

			glPushMatrix();
			glTranslatef(x, 0, 0);
			glScalef(5, 5, 10);
			draw_LeftTower_Crown_Spike();
			glPopMatrix();

			glPushMatrix();
			glTranslatef(x, 40, 0);
			glScalef(5, 5, 10);
			draw_LeftTower_Crown_Spike();
			glPopMatrix();

		} else {

		}

	}

	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[3]);

    glTranslatef(-5, 0, -10);

    glPushMatrix();
    glScalef(5, 45, 10);
    draw_LeftTower_Crown_Y_Axis();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(40, 0, 0);
    glScalef(5, 45, 10);
    draw_LeftTower_Crown_Y_Axis();
    glPopMatrix();

	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[1]);

    glPushMatrix();
    glTranslatef(10, 10, 0);
    glScalef(10, 10, 1);
    draw_LeftTower_Trapdoor();
    glPopMatrix();

	glBindTexture(GL_TEXTURE_2D, texture[0]);

    glTranslatef(0, 0, 10);

    for (int y = 5; y < 40; y += 5) {

        if (y % 2 != 0) {

            glPushMatrix();
            glTranslatef(0, y, 0);
            glScalef(5, 5, 10);
			draw_LeftTower_Crown_Spike();
            glPopMatrix();

			glPushMatrix();
			glTranslatef(40, y, 0);
			glScalef(5, 5, 10);
			draw_LeftTower_Crown_Spike();
			glPopMatrix();

        }

    }

	glBindTexture(GL_TEXTURE_2D, 0);
	
    glPopMatrix();

}

/**********************************************************************/
//left tower ruined
void draw_LeftTower_Ruined() {

    glPushMatrix();
    glTranslatef(X_INITIAL + 110, Y_INITIAL + 25, 85);
    glScalef(30, 30, 50);
    draw_LeftTower_Body_Top();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(X_INITIAL + 110, Y_INITIAL + 25, 35);
    glScalef(30, 30, 50);
    create_Left_Ruined_Tower_Bot_Figure();
    glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 110 units for the x value
     *      Y_INITIAL + 25 units for the y value
     * draw_LeftTower_Crown()
     * translate the figure
     *      5 units for the x value
     *      5 units for the y value
     * draw_LeftTower_Crown_Spikes_Part()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * *//*
    glPushMatrix();
    glTranslatef(X_INITIAL + 110, Y_INITIAL + 25, 0);
    draw_LeftTower_Ruined_Bottom();
    glTranslatef(5, 5, 0);
    draw_LeftTower_Ruined_Head();
    glPopMatrix();*/

}

/**********************************************************************/
//middle tower
void draw_MiddleTower() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 190 units for the x value
     *      Y_INITIAL + 25 units for the y value
     * draw_MiddleTower_Bottom_Crown()
     * translate the figure
     *      7.5 units for the x value
     *      7.5 units for the y value
     * draw_MiddleRight_Tower_Crown()
     * translate the figure
     *      -7.5 units for the y value
     * draw_MiddleTower_Banner()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 190, Y_INITIAL + 25, 0);

    glPushMatrix();
    glScalef(30, 30, 160);
    draw_MiddleTower_Body_Bottom();
    glPopMatrix();

    glTranslatef(0, 0, 160);

    for (int x = 0; x < 30; x += 5) {

        if (x % 2 == 0) {

            glPushMatrix();
            glTranslatef(x, 0, 0);
            glScalef(5, 5, 10);
            draw_MiddleTower_Body_Bottom_Spikes();
            glPopMatrix();

        } else {

            glPushMatrix();
            glTranslatef(x, 25, 0);
            glScalef(5, 5, 10);
            draw_MiddleTower_Body_Bottom_Spikes();
            glPopMatrix();

        }

    }

    for (int y = 5; y < 25; y += 5) {

        if (y % 2 == 0) {

            glPushMatrix();
            glTranslatef(0, y, 0);
            glScalef(5, 5, 10);
            draw_MiddleTower_Body_Bottom_Spikes();
            glPopMatrix();

        } else {

            glPushMatrix();
            glTranslatef(25, y, 0);
            glScalef(5, 5, 10);
            draw_MiddleTower_Body_Bottom_Spikes();
            glPopMatrix();

        }

    }

    glTranslatef(7.5, 7.5, 0);

    glPushMatrix();
    glScalef(15, 15, 50);
    draw_MiddleTower_Body_Middle();
    glPopMatrix();

    glTranslatef(3.5, 3.5, 50);

    glPushMatrix();
    glScalef(8, 8, 55);
    draw_MiddleTower_Body_Top();
    glPopMatrix();

    glTranslatef(-3.5, -3.5, 55);

    glPushMatrix();
    glScalef(15, 5, 10);
    draw_MiddleTower_Crown();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 10, 0);
    glScalef(15, 5, 10);
    draw_MiddleTower_Crown();
    glPopMatrix();

    glPushMatrix();
    glScalef(5, 15, 10);
    draw_MiddleTower_Crown();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(10, 0, 0);
    glScalef(5, 15, 10);
    draw_MiddleTower_Crown();
    glPopMatrix();

    glTranslatef(0, 0, 10);

    for (int x = 0; x < 15; x += 5) {

        if (x % 2 != 0) {

            glPushMatrix();
            glTranslatef(x, 0, 0);
            glScalef(5, 5, 10);
            draw_MiddleTower_Crown_Spike();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(x, 10, 0);
            glScalef(5, 5, 10);
            draw_MiddleTower_Crown_Spike();
            glPopMatrix();

        }

    }

    for (int y = 0; y < 15; y += 5) {

        if (y % 2 != 0) {

            glPushMatrix();
            glTranslatef(0, y, 0);
            glScalef(5, 5, 10);
            draw_MiddleTower_Crown_Spike();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(10, y, 0);
            glScalef(5, 5, 10);
            draw_MiddleTower_Crown_Spike();
            glPopMatrix();

        }

    }

//    draw_MiddleTower_Banner();

    glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 320 units for the x value
     *      Y_INITIAL + 25 units for the y value
     * draw_MiddleTower_Bottom_Crown()
     * translate the figure
     *      7.5 units for the x value
     *      7.5 units for the y value
     * draw_MiddleRight_Tower_Crown()
     * translate the figure
     *      -7.5 units for the y value
     * draw_MiddleTower_Banner()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 320, Y_INITIAL + 25, 0);

    glPushMatrix();
    glScalef(30, 30, 160);
    draw_MiddleTower_Body_Bottom();
    glPopMatrix();

    glTranslatef(0, 0, 160);

    for (int x = 0; x < 30; x += 5) {

        if (x % 2 == 0) {

            glPushMatrix();
            glTranslatef(x, 0, 0);
            glScalef(5, 5, 10);
            draw_MiddleTower_Body_Bottom_Spikes();
            glPopMatrix();

        } else {

            glPushMatrix();
            glTranslatef(x, 25, 0);
            glScalef(5, 5, 10);
            draw_MiddleTower_Body_Bottom_Spikes();
            glPopMatrix();

        }

    }

    for (int y = 5; y < 25; y += 5) {

        if (y % 2 == 0) {

            glPushMatrix();
            glTranslatef(0, y, 0);
            glScalef(5, 5, 10);
            draw_MiddleTower_Body_Bottom_Spikes();
            glPopMatrix();

        } else {

            glPushMatrix();
            glTranslatef(25, y, 0);
            glScalef(5, 5, 10);
            draw_MiddleTower_Body_Bottom_Spikes();
            glPopMatrix();

        }

    }

    glTranslatef(7.5, 7.5, 0);

    glPushMatrix();
    glScalef(15, 15, 50);
    draw_MiddleTower_Body_Middle();
    glPopMatrix();

    glTranslatef(3.5, 3.5, 50);

    glPushMatrix();
    glScalef(8, 8, 55);
    draw_MiddleTower_Body_Top();
    glPopMatrix();

    glTranslatef(-3.5, -3.5, 55);

    glPushMatrix();
    glScalef(15, 5, 10);
    draw_MiddleTower_Crown();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 10, 0);
    glScalef(15, 5, 10);
    draw_MiddleTower_Crown();
    glPopMatrix();

    glPushMatrix();
    glScalef(5, 15, 10);
    draw_MiddleTower_Crown();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(10, 0, 0);
    glScalef(5, 15, 10);
    draw_MiddleTower_Crown();
    glPopMatrix();

    glTranslatef(0, 0, 10);

    for (int x = 0; x < 15; x += 5) {

		if (x % 2 != 0) {

			glPushMatrix();
			glTranslatef(x, 0, 0);
			glScalef(5, 5, 10);
			draw_MiddleTower_Crown_Spike();
			glPopMatrix();

			glPushMatrix();
			glTranslatef(x, 10, 0);
			glScalef(5, 5, 10);
			draw_MiddleTower_Crown_Spike();
			glPopMatrix();

		}

    }

    for (int y = 0; y < 15; y += 5) {

		if (y % 2 != 0) {

			glPushMatrix();
			glTranslatef(0, y, 0);
			glScalef(5, 5, 10);
			draw_MiddleTower_Crown_Spike();
			glPopMatrix();

			glPushMatrix();
			glTranslatef(10, y, 0);
			glScalef(5, 5, 10);
			draw_MiddleTower_Crown_Spike();
			glPopMatrix();

		}

    }

//    draw_MiddleTower_Banner();

    glPopMatrix();

}

/**********************************************************************/
//right tower
void draw_RightTower() {

	/*
	 * save the matrix status
	 * translate the figure
	 *      X_INITIAL + 20 units for the x value
	 *      Y_INITIAL + 20 units for the y value
	 * draw_LeftTower_Crown()
	 * translate the figure
	 *      7 units for the x value
	 *      7 units for the y value
	 * draw_LeftTower_Crown_Spikes_Part()
	 * every vertex non modified keeps the same as it was, but the modified ones are changed
	 * */

	glBindTexture(GL_TEXTURE_2D, texture[0]);
	glPushMatrix();
    glTranslatef(X_INITIAL + 400, Y_INITIAL + 17, 0);

	glPushMatrix();
	glScalef(43, 43, 140);
	draw_RightTower_Body();
	glPopMatrix();

	glTranslatef(0, -7, 140);

	glPushMatrix();
	glScalef(43, 7, 10);
	draw_RightTower_Crown();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 50, 0);
	glScalef(43, 7, 10);
	draw_RightTower_Crown();
	glPopMatrix();

	glTranslatef(0, 0, 10);

	for (int x = 0; x < 36; x += 7) {

		if (x % 2 != 0) {

			glPushMatrix();
			glTranslatef(x, 0, 0);
			glScalef(7, 7, 10);
			draw_RightTower_Spikes();
			glPopMatrix();

		} else {

			glPushMatrix();
			glTranslatef(x, 50, 0);
			glScalef(7, 7, 10);
			draw_RightTower_Spikes();
			glPopMatrix();
		
		}

	}
	
	glTranslatef(-7, 0, -10);

	glPushMatrix();
	glScalef(7, 57, 10);
	draw_RightTower_Crown();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(50, 0, 0);
	glScalef(7, 57, 10);
	draw_RightTower_Crown();
	glPopMatrix();

	glTranslatef(0, 0, 10);

	for (int y = 0; y < 50; y += 7) {

		if (y % 2 == 0) {

			glPushMatrix();
			glTranslatef(0, y, 0);
			glScalef(7, 7, 10);
			draw_RightTower_Spikes();
			glPopMatrix();

		} else {

			glPushMatrix();
			glTranslatef(50, y, 0);
			glScalef(7, 7, 10);
			draw_RightTower_Spikes();
			glPopMatrix();

		}

	}
	
	glPopMatrix();

	/*
    glPushMatrix();
    glTranslatef(X_INITIAL + 400, Y_INITIAL + 10, 0);
    glScalef(57, 2, 1);
    draw_RightTower_Wall();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(X_INITIAL + 455, Y_INITIAL + 10, 0);
    glScalef(2, 57, 1);
    draw_RightTower_Wall();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(X_INITIAL + 400, Y_INITIAL + 65, 0);
    glScalef(57, 2, 1);
    draw_RightTower_Wall();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(X_INITIAL + 400, Y_INITIAL + 17, 0);
    glScalef(2, 50, 1);
    draw_RightTower_Wall();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(X_INITIAL + 400, Y_INITIAL + 17, 0);
    glScalef(50, 2, 1);
    draw_RightTower_Wall();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(X_INITIAL + 448, Y_INITIAL + 17, 0);
    glScalef(2, 43, 1);
    draw_RightTower_Wall();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(X_INITIAL + 407, Y_INITIAL + 58, 0);
    glScalef(43, 2, 1);
    draw_RightTower_Wall();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(X_INITIAL + 407, Y_INITIAL + 24, 0);
    glScalef(2, 36, 1);
    draw_RightTower_Wall();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(X_INITIAL + 407, Y_INITIAL + 24, 0);
    glScalef(36, 2, 1);
    draw_RightTower_Wall();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(X_INITIAL + 441, Y_INITIAL + 24, 0);
    glScalef(2, 29, 1);
    draw_RightTower_Wall();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(X_INITIAL + 414, Y_INITIAL + 51, 0);
    glScalef(29, 2, 1);
    draw_RightTower_Wall();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(X_INITIAL + 416.5, Y_INITIAL + 31, 0);

    glPushMatrix();
    glScalef(15, 15, 1);
    draw_RightTower_Wall();
    glPopMatrix();

    glTranslatef(0, 0, 1);

    for (int x = 0; x < 15; x += 5) {

        if (x % 2 != 0) {

            glPushMatrix();
            glTranslatef(x, 0, 0);
            glScalef(5, 5, 10);
            draw_MiddleTower_Crown_Spike();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(x, 10, 0);
            glScalef(5, 5, 10);
            draw_MiddleTower_Crown_Spike();
            glPopMatrix();

        }

    }

    for (int y = 0; y < 15; y += 5) {

        if (y % 2 != 0) {

            glPushMatrix();
            glTranslatef(0, y, 0);
            glScalef(5, 5, 10);
            draw_MiddleTower_Crown_Spike();
            glPopMatrix();

            glPushMatrix();
            glTranslatef(10, y, 0);
            glScalef(5, 5, 10);
            draw_MiddleTower_Crown_Spike();
            glPopMatrix();

        }

    }

    glPopMatrix();
	*/
}

/***********************************************************************************************************************
************************************************************************************************************************
***********************************Sets the origin point position of all arc bridges************************************
************************************************************************************************************************
***********************************************************************************************************************/

void mount_ArcBridge(){

	glBindTexture(GL_TEXTURE_2D, texture[2]);

    glPushMatrix();
    glTranslatef(0, 5, 0);
    glScalef(50, 10, 10);
    draw_ArcBridge_Platform();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 0, -20);
    glScalef(50, 5, 40);
    draw_ArcBridge_Border();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 15, -20);
    glScalef(50, 5, 40);
    draw_ArcBridge_Border();
    glPopMatrix();

}

//arc bridge
void draw_ArcBridge() {

    glPushMatrix();
    glTranslatef(X_INITIAL + 60, Y_INITIAL + 30, 105);

    mount_ArcBridge();

    glTranslatef(80, 0, 0);

    mount_ArcBridge();

    glTranslatef(210, 0, 0);

    mount_ArcBridge();

    glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
*****************************Sets the origin point position of the middle towers connection*****************************
************************************************************************************************************************
***********************************************************************************************************************/

//middle towers connection
void draw_MiddleTowers_connection() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 195 units for the x value
     *      Y_INITIAL + 55 units for the y value
     * draw_WallEdification_Roof()
     * translate the figure
     *      25 units for the x value
     *      -20 units for the y value
     * draw_WallEdification_Roof()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */

	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[5]);
    glPushMatrix();
    glTranslatef(X_INITIAL + 195, Y_INITIAL + 55, 0);

	for (int y = 0; y < 25; y += 5) {

		for (int x = 0; x < 150; x += 5) {

			glPushMatrix();
			glTranslatef(x, y, 0);
			glScalef(5, 5, 1);
			create_Top_Face(0, 0, 1, 1);
			glPopMatrix();

		}

	}

	glTranslatef(25, -20, 0);

	for (int y = 0; y < 20; y += 5) {

		for (int x = 0; x < 100; x += 5) {

			glPushMatrix();
			glTranslatef(x, y, 0);
			glScalef(5, 5, 1);
			create_Top_Face(0, 0, 1, 1);
			glPopMatrix();

		}

	}

    glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
***************************************Sets the origin point position of the gate***************************************
************************************************************************************************************************
***********************************************************************************************************************/

//gate
void draw_Gate_Entrance() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 220 units for the x value
     *      Y_INITIAL + 30 units for the y value
     * draw_Gate()
     *
     * translate the figure
     *      -5 units for the x value
     *      -10 units for the y value
     * draw_Flag_Holder()
     *
     * translate the figure
     *      100 units for the x value
     * draw_Flag_Holder()
     *
     * translate the figure
     *      -93 units for the x value
     *      2.5 units for the y value
     * draw_Flag()
     *
     * translate the figure
     *      95 units for the x value
     * draw_Flag()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */

	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[1]);

    glPushMatrix();
    glTranslatef(X_INITIAL + 220, Y_INITIAL + 30, 0);
    draw_Entrance_Gate_Left_Door(entrance_Door_Angle);
    draw_Entrance_Gate_Right_Door(-entrance_Door_Angle);

	glBindTexture(GL_TEXTURE_2D, 0);

	glBindTexture(GL_TEXTURE_2D, texture[2]);

    glTranslatef(-5, -10, 0);
    draw_Flag_Holder();

    glTranslatef(100, 0, 0);
    draw_Flag_Holder();

	glBindTexture(GL_TEXTURE_2D, 0);

    glTranslatef(-93, 2.5, 0);
    draw_Flag();

    glTranslatef(95, 0, 0);
    draw_Flag();
    glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
**********************************Sets the origin point position and draw the gargoyles*********************************
************************************************************************************************************************
***********************************************************************************************************************/

//entrance gargoyles
void draw_EntranceGargoyles() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 220 units for the x value
     *      Y_INITIAL - 10 units for the y value
     *
     *      save the matrix status
     *      increase the figure size by
	 *          xSize times of the 10 value
	 *          ySize times of the 10 value
	 *          zSize times of the 1 value
     *      draw_Gargoyles()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * translate the figure
     *      90 units for the x value
     *
     *      save the matrix status
     *      increase the figure size by
	 *          xSize times of the 10 value
	 *          ySize times of the 10 value
	 *          zSize times of the 1 value
     *      draw_Gargoyles()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    //glPushMatrix();
    //glTranslatef(X_INITIAL + 220, Y_INITIAL - 10, 0);
	//
    //glPushMatrix();
    //glScalef(10, 10 , 10);
    //draw_Gargoyles();
    //glPopMatrix();
	//
    //glTranslatef(90, 0, 0);
	//
    //glPushMatrix();
    //glScalef(10, 10 , 10);
    //draw_Gargoyles();
    //glPopMatrix();
	//
    //glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
************************************Sets the origin point position of the deliver road**********************************
************************************************************************************************************************
***********************************************************************************************************************/
//delivery road
void draw_Delivery() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 247.5 for the x value
     *      Y_INITIAL + 160 for the y value
     * draw_FrontDoor()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 247.5, Y_INITIAL + 160, 0);
    draw_FrontDoor();
    glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
***********************************Sets the origin point position of the castle roads***********************************
************************************************************************************************************************
***********************************************************************************************************************/
//castle road
void draw_Castle_Roads() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 252.5 for the x value
     *      Y_INITIAL + 295 for the y value
     * draw_Castle_Road()
     *
     * translate the figure
     *      100 for the y value
     * draw_Castle_Road()
     *
     * translate the figure
     *      70 for the y value
     * draw_Castle_Road()
     *
     * translate the figure
     *      121 for the x value
     *      -265 for the y value
     * draw_Castle_Road()
     *
     * translate the figure
     *      -240 for the x value
     * draw_Castle_Road()
     *
     * translate the figure
     *      30 for the x value
     * draw_Castle_Road()
     *
     * translate the figure
     *      200 for the x value
     * draw_Castle_Road()
     *
     * translate the figure
     *      -200 for the x value
     *      275 for the y value
     * draw_Castle_Road()
     *
     * translate the figure
     *      -125 for the y value
     * draw_Castle_Road()
     *
     * translate the figure
     *      40 for the x value
     * draw_Castle_Road()
     *
     * translate the figure
     *      95 for the x value
     * draw_Castle_Road()
     *
     * translate the figure
     *      65 for the x value
     * draw_Castle_Road()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 252.5, Y_INITIAL + 295, 0.01);

	glPushMatrix();
	glTranslatef(-10, -30, 0);
    draw_Castle_Road_Vertical_Core();
	glPopMatrix();

    glTranslatef(0, 100, 0);

	glPushMatrix();
	glTranslatef(-10, 0, 0);
    draw_Castle_Road_Vertical_Core();
	glPopMatrix();

    glTranslatef(0, 70, 0);

	glPushMatrix();
	glTranslatef(-10, 0, 0);
    draw_Castle_Road_Vertical_Inside();
	glPopMatrix();

    glTranslatef(121, -265, 0);
    draw_Castle_Road_Vertical_OutSide();

    glTranslatef(-240, 0, 0);
    draw_Castle_Road_Vertical_OutSide();

    glTranslatef(30, 0, 0);
	draw_Castle_Road_Horizontal_Inside();

	glTranslatef(200, 0, 0);
	draw_Castle_Road_Horizontal_Inside();

	glTranslatef(-200, 275, 0);
	draw_Castle_Road_Horizontal_OutSide();

	glTranslatef(40, -125, 0);

	glPushMatrix();
	glTranslatef(-40, -25, 0);
	draw_Castle_Road_Horizontal_Core();
	glPopMatrix();

	glTranslatef(95, 0, 0);

	glPushMatrix();
	glTranslatef(-4, -25, 0);
	draw_Castle_Road_Horizontal_Core();
	glPopMatrix();

    glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
*********************************Sets the origin point position of the castle courtyard*********************************
************************************************************************************************************************
***********************************************************************************************************************/
//castle courtyard
void draw_Castle_Courtyard() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 173.5 for the x value
     *      Y_INITIAL + 200 for the y value
     *
     *      save the matrix status
     *      increase the figure size by
     *           190 times of the x value
     *           65 times of the y value
     *      create_Bot_Face()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */

	glBindTexture(GL_TEXTURE_2D, texture[9]);

    glPushMatrix();
    glTranslatef(X_INITIAL + 173.5, Y_INITIAL + 200, 0.01);

//	make the courtyard limit (ground)
    glPushMatrix();
    glScalef(190, 65, 1);
	glTranslatef(0, 0, -1);

	//  sets the beginning with only the lines that surrounds it
	glBegin(GL_POLYGON);

	glTexCoord2f(0, 0); glVertex3f(0, 0, 1);
	glTexCoord2f(0, 2); glVertex3f(0, 1, 1);
	glTexCoord2f(4, 2); glVertex3f(1, 1, 1);
	glTexCoord2f(4, 0); glVertex3f(1, 0, 1);

	//	sets the ending of the draw connecting the first vertex draw with the last
	glEnd();

    glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      94.5 for the x value
     *      29.5 for the y value
     *
     *      sets the beginning with only the lines that surrounds it
     *      draw_Circle()
     *      draw_Circle()
     *      sets the ending of the draw connecting the first vertex draw with the last
     *
     *      sets the beginning with only the lines that surrounds it
     *      draw_Circle()
     *      draw_Circle()
     *      sets the ending of the draw connecting the first vertex draw with the last
     *
     * draw_Castle_Courtyard_Roundabout_Outside()
     * draw_Castle_Courtyard_Roundabout_Inside()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */

	glBindTexture(GL_TEXTURE_2D, texture[1]);

    glTranslatef(94.5, 29.5, 0);

	glColor3f(0, 0, 0);									//CW mas tem de ser CCW!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//	make the outside part of the roundabout
    glBegin(GL_LINE_LOOP);
    draw_Circle(0, 2 * PI, 7.5, 7.5, 0);
    draw_Circle(0, 2 * PI, 7.5, 7.5, 5);
    glEnd();

//	make the inside part of the roundabout
    glBegin(GL_LINE_LOOP);
    draw_Circle(0, 2 * PI, 2.5, 2.5, 0);
    draw_Circle(0, 2 * PI, 2.5, 2.5, 10);
    glEnd();
	glPopMatrix();

    /*
     * make the stores
     *
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 177.5 for the x value
     *      Y_INITIAL + 230 for the y value
     * draw_Store()
     *
     * translate the figure
     *      10 for the x value
     *      22 for the y value
     * draw_Store()
     *
     * translate the figure
     *      10 for the x value
     *      -32 for the y value
     * draw_Store()
     *
     * translate the figure
     *      -10 for the x value
     *      -20 for the y value
     * draw_Store()
     *
     * translate the figure
     *      110 for the x value
     * draw_Store()
     *
     * translate the figure
     *      30 for the x value
     * draw_Store()
     *
     * translate the figure
     *      20 for the x value
     *      30 for the y value
     * draw_Store()
     *
     * translate the figure
     *      -50 for the x value
     *      22 for the y value
     * draw_Store()
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 177.5, Y_INITIAL + 230, 0);

    draw_Store_Vertical(10, 32, 12, 2, 0.25);

    glTranslatef(10, 22, 0);

	draw_Store_Horizontal(30, 10, 6, 4, 0);

    glTranslatef(10, -32, 0);
	draw_Store_Vertical(30, 20, 8, 6, 0.35);

    glTranslatef(-10, -20, 0);
	glPushMatrix();
	glTranslatef(40, 10, 0);
	glRotatef(180, 0, 0, 1);
	draw_Store_Horizontal(40, 10, 8, 4, 0.25);
	glPopMatrix();

	glTranslatef(110, 0, 0);
	glPushMatrix();
	glTranslatef(20, 40, 0);
	glRotatef(180, 0, 0, 1);
	draw_Store_Vertical(20, 40, 14, 4, 0.2);
	glPopMatrix();

	glTranslatef(30, 0, 0);
	draw_Store_Vertical(20, 20, 8, 4, 0.25);

	glTranslatef(20, 30, 0);
	glPushMatrix();
	glTranslatef(12, 32, 0);
	glRotatef(180, 0, 0, 1);
	draw_Store_Vertical(12, 32, 12, 2, 0.25);
	glPopMatrix();

	glTranslatef(-50, 22, 0);
	draw_Store_Horizontal(40, 10, 8, 4, 0.25);
    glPopMatrix();

    /*
     * save the matrix status
     * translate the figure
     *      253 for the x value
     *      165 for the y value
     * for 28 unities, increasing 2.5 each
     * for 45 unities, increasing 2.5 each
     *
     *      save the matrix status
     *      translate the figure
     *          X_INITIAL + h for the x value
     *          Y_INITIAL + v for the y value
     *
     *              save the matrix status
     *              increase the figure size by
     *                   5 times of the x value
     *                   5 times of the y value
     *              create_Bot_Face()
     *              every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * translate the figure
     *      -5 for the x value
     *      45 for the y value
     * for 38 unities, increasing 2.5 each
     * for 40 unities, increasing 2.5 each
     *
     *      save the matrix status
     *      translate the figure
     *          X_INITIAL + h for the x value
     *          Y_INITIAL + v for the y value
     *
     *              save the matrix status
     *              increase the figure size by
     *                   5 times of the x value
     *                   5 times of the y value
     *              create_Bot_Face()
     *              every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */

	glBindTexture(GL_TEXTURE_2D, texture[1]);

    glPushMatrix();
    glTranslatef(253, 165, 0.01);
    for (int h = 0; h < 28; h += 5) {

        for (int v = 0; v < 45; v += 5) {

            glPushMatrix();
            glTranslatef(X_INITIAL + h, Y_INITIAL + v, 0);

//			make the courtyard road (1 square)
            glPushMatrix();
            glScalef(5, 5, 1);
			glTranslatef(0, 0, -1);
			create_Top_Face(0, 0, 1, 1);
            glPopMatrix();

            glPopMatrix();

        }

    }
    glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
**********************************Sets the origin point position of the castle hallways*********************************
************************************************************************************************************************
***********************************************************************************************************************/
//castle hallway
void draw_Castle_Hallway() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 333.5 of the x value
     *      Y_INITIAL + 265 of the y value
     * draw_Hallway_Section()
     *
     * translate the figure
     *      -130 of the x value
     *      170 of the x value
     * draw_Hallway_Section()
     *
     * translate the figure
     *      -170 of the y value
     * draw_Hallway_Section()
     *
     * translate the figure
     *      -30 of the x value
     * draw_Hallway_Section()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 333.5, Y_INITIAL + 265, 0);

	glPushMatrix();
	glTranslatef(30, 200, 0);
	glRotatef(-180, 0, 0, 1);
	draw_Hallway_Section_Vertical();
	glPopMatrix();

	glTranslatef(-130, 170, 0);
	
	glPushMatrix();
	glScalef(130, 30, 40);
	glTranslatef(1, 1, 0);
	glRotatef(180, 0, 0, 1);
	draw_Hallway_Section_Horizontal();
	glPopMatrix();

	glTranslatef(0, -170, 0);

	glPushMatrix();
	glScalef(130, 30, 40);
	draw_Hallway_Section_Horizontal();
	glPopMatrix();

	glTranslatef(-30, 0, 0);
	draw_Hallway_Section_Vertical();

    glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
************************************Sets the origin point position of the castle walls**********************************
************************************************************************************************************************
***********************************************************************************************************************/

//castle buildings
void draw_Castle_Buildings() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 238.5 for the x value
     *      Y_INITIAL + 335 for the y value
     *
     *      save the matrix status
     *      increase the figure size by
     *           60 times of the x value
     *           60 times of the y value
     *           70 times of the z value
     *      draw_6_Faces_Figure()
     *      every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 238.5, Y_INITIAL + 335, 0);

//	make the central building
    /*
     * save the matrix status
     * increase the figure size by
     *     60 times of the x value
     *     60 times of the y value
     *     70 times of the z value
     * draw_6_Faces_Figure()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     *
     * */
    glPushMatrix();
    glScalef(60, 60, 70);

	create_Main_Building();

	glPopMatrix();

    glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
**********************************Sets the origin point position of the old castle walls********************************
************************************************************************************************************************
***********************************************************************************************************************/

//castle old tower
void draw_Castle_OldTower(/*values*/) {

	glPushMatrix();
	glColor3f(0, 0, 0);
    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 268.5 for the x value
     *      Y_INITIAL + 515 for the y value
     * draw_Castle_OldTower_Left()
     * draw_Castle_OldTower_Central()
     * draw_Castle_OldTower_Right()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 268.5, Y_INITIAL + 515, 0);
    draw_Castle_OldTower_Left(20);
    draw_Castle_OldTower_Central(20);
    draw_Castle_OldTower_Right(20);
    glPopMatrix();

	glPopMatrix();

}

/***********************************************************************************************************************
************************************************************************************************************************
***********************************Sets the origin point position of the castle walls***********************************
************************************************************************************************************************
***********************************************************************************************************************/

///castle walls
void draw_Castle_Walls(/*values*/) {}