/***********************************************************************************************************************
*                                                                                                                      *
*                                                      LeftTower.h                                                     *
*                                                                                                                      *
*                                  This file is responsible to create the left tower                                   *
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

//body
void draw_LeftTower_Body_Top() {

    create_Left_Top_Body_Left_Tower_Figure();

}

void draw_LeftTower_Body_Down() {

    create_Left_Bot_Body_Left_Tower_Figure();

}

//crown
void draw_LeftTower_Crown() {

    draw_6_Faces_Figure();

}

//crown spike
void draw_LeftTower_Crown_Spike() {

    draw_6_Faces_Figure();

}

//trapdoor
void draw_LeftTower_Trapdoor() {

    create_Bot_Face();

}