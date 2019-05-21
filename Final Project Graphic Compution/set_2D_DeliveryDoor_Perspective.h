#pragma once

void setOrtho_Delivery_Door(int option) {

	switch (option) {

		//      front
	case -30: {

		setFrontOrtho_Delivery_Door();

	}break;

		//      back
	case -31: {

		setBackOrtho_Delivery_Door();

	}break;

		//      Left
	case -32: {

		setLeftOrtho_Delivery_Door();

	}break;

		//      Right
	case -33: {

		setRightOrtho_Delivery_Door();

	}break;

		//      Top
	case -34: {

		setTopOrtho_Delivery_Door();

	}break;

		//      Bot
	case -35: {

		setBotOrtho_Delivery_Door();

	}break;

	}

}