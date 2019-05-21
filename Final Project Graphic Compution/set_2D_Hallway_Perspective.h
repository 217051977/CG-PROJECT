#pragma once

void setOrtho_Hallway(int option) {

	switch (option) {

		//      front
	case -12: {

		setFrontOrtho_Hallway();

	}break;

		//      back
	case -13: {

		setBackOrtho_Hallway();

	}break;

		//      Left
	case -14: {

		setLeftOrtho_Hallway();

	}break;

		//      Right
	case -15: {

		setRightOrtho_Hallway();

	}break;

		//      Top
	case -16: {

		setTopOrtho_Hallway();

	}break;

		//      Bot
	case -17: {

		setBotOrtho_Hallway();

	}break;

	}

}