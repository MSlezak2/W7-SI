#include "ShowLargestAreaWindow.h"

ShowLargestAreaWindow::ShowLargestAreaWindow(ShapeCollection* shapeCollection) {
	title = "SHOW LARGEST AREA WINDOW";
	availableStates.setStates({ {0, "MAIN MENU"} });
	this->shapeCollection = shapeCollection;
}

void ShowLargestAreaWindow::doTheTask() {

	std::cout << shapeCollection->getLargestShapeByArea()->toString() << std::endl;
}
