#pragma once

void setOrtho_Courtyard(int option) {

	switch (option) {

		//      front
	case -18: {

		setFrontOrtho_Courtyard();

	}break;

		//      back
	case -19: {

		setBackOrtho_Courtyard();

	}break;

		//      Left
	case -20: {

		setLeftOrtho_Courtyard();

	}break;

		//      Right
	case -21: {

		setRightOrtho_Courtyard();

	}break;

		//      Top
	case -22: {

		setTopOrtho_Courtyard();

	}break;

		//      Bot
	case -23: {

		setBotOrtho_Courtyard();

	}break;

	}

}
