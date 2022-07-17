#include "Controller.h"

void Controller::start() {

	int state = 0;

	while (state != -1) {
		switch (state) {
		case 0: // state MAIN MENU
		{
			window = new MenuWindow();
			break;
		}
		case 1:
		{
			window = new AddNewShapeWindow(&shapeCollection);
			break;
		}
		case 2:
		{
			window = new ShowAllShapesWindow(&shapeCollection);
			break;
		}
		}
		state = window->displayWindow();
		delete window; // to avoid memory leak
	}
}