#pragma once

void setOrtho_Main_Building(int option) {

	switch (option) {

		//      front
	case -24: {

		setFrontOrtho_Main_Building();

	}break;

		//      back
	case -25: {

		setBackOrtho_Main_Building();

	}break;

		//      Left
	case -26: {

		setLeftOrtho_Main_Building();

	}break;

		//      Right
	case -27: {

		setRightOrtho_Main_Building();

	}break;

		//      Top
	case -28: {

		setTopOrtho_Main_Building();

	}break;

		//      Bot
	case -29: {

		setBotOrtho_Main_Building();

	}break;

	}

}