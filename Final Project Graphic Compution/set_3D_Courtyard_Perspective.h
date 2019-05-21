#pragma once

void setPerspective_Courtyard(int option) {

	switch (option) {

		//      front
	case 19: {

		setFrontPerspective_Courtyard();

	}break;

		//      back
	case 20: {

		setBackPerspective_Courtyard();

	}break;

		//      Left
	case 21: {

		setLeftPerspective_Courtyard();

	}break;

		//      Right
	case 22: {

		setRightPerspective_Courtyard();

	}break;

		//      Top
	case 23: {

		setTopPerspective_Courtyard();

	}break;

		//      Bot
	case 24: {

		setBotPerspective_Courtyard();

	}break;

	}

}