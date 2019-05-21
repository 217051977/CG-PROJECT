#pragma once

void setOrtho_Castle(int option) {

	switch (option) {

		//      front
	case -36: {

		setFrontOrtho_Castle();

	}break;

		//      back
	case -37: {

		setBackOrtho_Castle();

	}break;

		//      Left
	case -38: {

		setLeftOrtho_Castle();

	}break;

		//      Right
	case -39: {

		setRightOrtho_Castle();

	}break;

		//      Top
	case -40: {

		setTopOrtho_Castle();

	}break;

		//      Bot
	case -41: {

		setBotOrtho_Castle();

	}break;

	}

}