#pragma once

void setPerspective_Main_Building(int option) {

	switch (option) {

		//      front
	case 25: {

		setFrontPerspective_Main_Building();

	}break;

		//      back
	case 26: {

		setBackPerspective_Main_Building();

	}break;

		//      Left
	case 27: {

		setLeftPerspective_Main_Building();

	}break;

		//      Right
	case 28: {

		setRightPerspective_Main_Building();

	}break;

		//      Top
	case 29: {

		setTopPerspective_Main_Building();

	}break;

		//      Bot
	case 30: {

		setBotPerspective_Main_Building();

	}break;

	}

}