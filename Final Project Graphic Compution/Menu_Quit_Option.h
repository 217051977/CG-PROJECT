#pragma once

void quitOption(int optionID) {

	if (optionID == -1) {

		exit(0);

		printf("Bye!");

	}
	else {

		printf("There's no %d as optionID\n", optionID);

	}

}