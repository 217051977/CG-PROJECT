#pragma once

void setOrtho_Regular(int option) {

	switch (option) {

		//      front
	case 0: {

		setFrontOrtho();

	}break;

		//      back view
	case -1: {

		setBackOrtho();

	}break;

		//      left view
	case -2: {

		setLeftOrtho();

	}break;

		//      right view
	case -3: {

		setRightOrtho();

	}break;

		//      top view
	case -4: {

		glOrtho(X_MIN_VIEW, X_MAX_VIEW, Y_MIN_VIEW, Y_MAX_VIEW, Z_NEAR_VIEW, Z_FAR_VIEW);

	}break;

		//      bot view
	case -5: {

		setBotOrtho();

	}break;

	}

}