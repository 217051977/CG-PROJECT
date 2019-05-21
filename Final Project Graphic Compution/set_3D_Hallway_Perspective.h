#pragma once

void setPerspective_Hallway(int option) {

	switch (option) {

		//      front
	case 13: {

		setFrontPerspective_Hallway();

	}break;

		//      back
	case 14: {

		setBackPerspective_Hallway();

	}break;

		//      Left
	case 15: {

		setLeftPerspective_Hallway();

	}break;

		//      Right
	case 16: {

		setRightPerspective_Hallway();

	}break;

		//      Top
	case 17: {

		setTopPerspective_Hallway();

	}break;

		//      Bot
	case 18: {

		setBotPerspective_Hallway();

	}break;

	}

}