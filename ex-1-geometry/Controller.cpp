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
		case 3:
		{
			window = new ShowLargestPerimeterWindow(&shapeCollection);
			break;
		}
		case 4:
		{
			window = new ShowLargestAreaWindow(&shapeCollection);
			break;
		}
		case 5:
		{
			window = new ShowFormulasWindow();
			break;
		}
		}
		state = window->displayWindow();
		delete window; // to avoid memory leak
	}
}