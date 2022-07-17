#include "ShowLargestPerimeterWindow.h"

ShowLargestPerimeterWindow::ShowLargestPerimeterWindow(ShapeCollection* shapeCollection) {
	title = "SHOW LARGEST PERIMETER WINDOW";
	availableStates.setStates({ {0, "MAIN MENU"} });
	this->shapeCollection = shapeCollection;
}

void ShowLargestPerimeterWindow::doTheTask() {

	std::cout << shapeCollection->getLargestShapeByPerimeter()->toString() << std::endl;
}
