#pragma once

void setPerspective_Entrance(int option) {

	switch (option) {

		//      front
	case 7: {

		setFrontPerspective_Entrance();

	}break;

		//      back
	case 8: {

		setBackPerspective_Entrance();

	}break;

		//      Left
	case 9: {

		setLeftPerspective_Entrance();

	}break;

		//      Right
	case 10: {

		setRightPerspective_Entrance();

	}break;

		//      Top
	case 11: {

		setTopPerspective_Entrance();

	}break;

		//      Bot
	case 12: {

		setBotPerspective_Entrance();

	}break;

	}

}