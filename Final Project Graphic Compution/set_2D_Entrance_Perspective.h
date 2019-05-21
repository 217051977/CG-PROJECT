#pragma once

void setOrtho_Entrance(int option) {

	switch (option) {

		//      front
	case -6: {

		setFrontOrtho_Entrance();

	}break;

		//      back
	case -7: {

		setBackOrtho_Entrance();

	}break;

		//      left
	case -8: {

		setLeftOrtho_Entrance();

	}break;

		//      right
	case -9: {

		setRightOrtho_Entrance();

	}break;

		//      top
	case -10: {

		setTopOrtho_Entrance();

	}break;

		//      bot
	case -11: {

		setBotOrtho_Entrance();

	}

	}

}