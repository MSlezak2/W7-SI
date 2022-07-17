#include "ShowAllShapesWindow.h"

ShowAllShapesWindow::ShowAllShapesWindow(ShapeCollection* shapeCollection) {
	title = "SHOW ALL SHAPES WINDOW";
	availableStates.setStates({ {0, "MAIN MENU"} });
	this->shapeCollection = shapeCollection;
}

void ShowAllShapesWindow::doTheTask() {
	shapeCollection->getShapesTable();
}
