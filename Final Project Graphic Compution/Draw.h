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
    glTranslatef(X_INITIAL + 20, Y_INITIAL + 20, 0);

    glPushMatrix();
    glScalef(35, 35, 140);
    draw_LeftTower_Body();
    glPopMatrix();

    glTranslatef(-5, -5, 140);

    glPushMatrix();
    glScalef(40, 5, 10);
    draw_LeftTower_Crown();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 40, 0);
    glScalef(40, 5, 10);
    draw_LeftTower_Crown();
    glPopMatrix();

    glPushMatrix();
    glScalef(5, 40, 10);
    draw_LeftTower_Crown();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(40, 0, 0);
    glScalef(5, 40, 10);
    draw_LeftTower_Crown();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(10, 10, 0);
    glScalef(10, 10, 1);
    draw_LeftTower_Trapdoor();
    glPopMatrix();

    glTranslatef(0, 0, 10);

    for (int x = 0; x < 45; x += 5) {

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

        }

    }

    for (int y = 5; y < 40; y += 5) {

        if (y % 2 == 0) {

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

    glPopMatrix();

}

/**********************************************************************/
//left tower ruined
void draw_LeftTower_Ruined() {

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
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 110, Y_INITIAL + 25, 0);
    draw_LeftTower_Ruined_Bottom();
    glTranslatef(5, 5, 0);
    draw_LeftTower_Ruined_Head();
    glPopMatrix();

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
    glScalef(30, 30, 140);
    draw_MiddleTower_Body_Bottom();
    glPopMatrix();

    glTranslatef(0, 0, 140);

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
    glScalef(30, 30, 140);
    draw_MiddleTower_Body_Bottom();
    glPopMatrix();

    glTranslatef(0, 0, 140);

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

        if (y % 2 == 0) {

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

}

/***********************************************************************************************************************
************************************************************************************************************************
***********************************Sets the origin point position of all arc bridges************************************
************************************************************************************************************************
***********************************************************************************************************************/

//arc bridge
void draw_ArcBridge() {

    /*
     * save the matrix status
     * translate the figure
     *      X_INITIAL + 60 units for the x value
     *      Y_INITIAL + 30 units for the y value
     * draw_ArcBridge_Border()
     * translate the figure
     *      15 units for the y value
     * draw_ArcBridge_Border()
     * translate the figure
     *      80 units for the x value
     *      -15 units for the y value
     * draw_ArcBridge_Border()
     * translate the figure
     *      15 units for the y value
     * draw_ArcBridge_Border()
     * translate the figure
     *      210 units for the x value
     *      -15 units for the y value
     * draw_ArcBridge_Border()
     * translate the figure
     *      15 units for the y value
     * draw_ArcBridge_Border()
     * every vertex non modified keeps the same as it was, but the modified ones are changed
     * */
    glPushMatrix();
    glTranslatef(X_INITIAL + 60, Y_INITIAL + 30, 0);
    draw_ArcBridge_Border();
    glTranslatef(0, 15, 0);
    draw_ArcBridge_Border();
    glTranslatef(80, -15, 0);
    draw_ArcBridge_Border();
    glTranslatef(0, 15, 0);
    draw_ArcBridge_Border();
    glTranslatef(210, -15, 0);
    draw_ArcBridge_Border();
    glTranslatef(0, 15, 0);
    draw_ArcBridge_Border();
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
    glPushMatrix();
    glTranslatef(X_INITIAL + 195, Y_INITIAL + 55, 0);
    draw_WallEdification_Roof(150, 25);
    glTranslatef(25, -20, 0);
    draw_WallEdification_Roof(100, 20);
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
    glPushMatrix();
    glTranslatef(X_INITIAL + 220, Y_INITIAL + 30, 0);
    glPushMatrix();
    glScalef(100, 1, 1);
    draw_Gate();
    glPopMatrix();

    glTranslatef(-5, -10, 0);
    draw_Flag_Holder();

    glTranslatef(100, 0, 0);
    draw_Flag_Holder();

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
    glPushMatrix();
    glTranslatef(X_INITIAL + 220, Y_INITIAL - 10, 0);

    glPushMatrix();
    glScalef(10, 10 , 10);
    draw_Gargoyles();
    glPopMatrix();

    glTranslatef(90, 0, 0);

    glPushMatrix();
    glScalef(10, 10 , 10);
    draw_Gargoyles();
    glPopMatrix();

    glPopMatrix();

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
    glTranslatef(X_INITIAL + 252.5, Y_INITIAL + 295, 0);
    draw_Castle_Road(30, 40);

    glTranslatef(0, 100, 0);
    draw_Castle_Road(30, 40);

    glTranslatef(0, 70, 0);
    draw_Castle_Road(30, 10);

    glTranslatef(121, -265, 0);
    draw_Castle_Road(30, 305);

    glTranslatef(-240, 0, 0);
    draw_Castle_Road(30, 305);

    glTranslatef(30, 0, 0);
    draw_Castle_Road(10, 30);

    glTranslatef(200, 0, 0);
    draw_Castle_Road(10, 30);

    glTranslatef(-200, 275, 0);
    draw_Castle_Road(210, 30);

    glTranslatef(0, -125, 0);
    draw_Castle_Road(10, 30);

    glTranslatef(40, 0, 0);
    draw_Castle_Road(35, 30);

    glTranslatef(95, 0, 0);
    draw_Castle_Road(35, 30);

    glTranslatef(65, 0, 0);
    draw_Castle_Road(10, 30);
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
    glPushMatrix();
    glTranslatef(X_INITIAL + 173.5, Y_INITIAL + 200, 0);

//	make the courtyard limit (ground)
    glPushMatrix();
    glScalef(190, 65, 1);
    create_Bot_Face();
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
    glTranslatef(94.5, 29.5, 0);

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

    draw_Store(10, 32);

    glTranslatef(10, 22, 0);

    draw_Store(30, 10);

    glTranslatef(10, -32, 0);
    draw_Store(30, 20);

    glTranslatef(-10, -20, 0);
    draw_Store(40, 10);

    glTranslatef(110, 0, 0);
    draw_Store(20, 40);

    glTranslatef(30, 0, 0);
    draw_Store(20, 20);

    glTranslatef(20, 30, 0);
    draw_Store(12, 32);

    glTranslatef(-50, 22, 0);
    draw_Store(40, 10);
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
    glPushMatrix();
    glTranslatef(253, 165, 0);
    for (int h = 0; h < 28; h += 5) {

        for (int v = 0; v < 45; v += 5) {

            glPushMatrix();
            glTranslatef(X_INITIAL + h, Y_INITIAL + v, 0);

//			make the courtyard road (1 square)
            glPushMatrix();
            glScalef(5, 5, 1);
            create_Bot_Face();
            glPopMatrix();

            glPopMatrix();

        }

    }

    glTranslatef(-5, 45, 0);
    for (int h = 0; h < 38; h += 5) {

        for (int v = 0; v < 40; v += 5) {

            glPushMatrix();
            glTranslatef(X_INITIAL + h, Y_INITIAL + v, 0);

//			make the courtyard road (1 square)
            glPushMatrix();
            glScalef(5, 5, 1);
            create_Bot_Face();
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
    draw_Hallway_Section(30, 200);

    glTranslatef(-130, 170, 0);
    draw_Hallway_Section(130, 30);

    glTranslatef(0, -170, 0);
    draw_Hallway_Section(130, 30);

    glTranslatef(-30, 0, 0);
    draw_Hallway_Section(30, 200);

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
    draw_6_Faces_Figure();
    glPopMatrix();
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

}

/***********************************************************************************************************************
************************************************************************************************************************
***********************************Sets the origin point position of the castle walls***********************************
************************************************************************************************************************
***********************************************************************************************************************/

///castle walls
void draw_Castle_Walls(/*values*/) {}