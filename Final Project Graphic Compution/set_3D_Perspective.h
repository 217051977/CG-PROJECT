#pragma once


void setPerspective_Regular(int option) {

	switch (option) {

		//      front
	case 1: {

		setFrontPerspective();

	}break;

		//      back
	case 2: {

		setBackPerspective();

	}break;

		//      left
	case 3: {

		setLeftPerspective();

	}break;

		//      right
	case 4: {

		setRightPerspective();

	}break;

		//      Top
	case 5: {

		setTopPerspective();

	}break;

		//      bot
	case 6: {

		setBotPerspective();

	}break;

	}

}