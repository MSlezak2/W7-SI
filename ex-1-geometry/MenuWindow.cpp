#include "MenuWindow.h"


MenuWindow::MenuWindow() {
	title = "MAIN MENU";
	availableStates.setStates({ { 1, "Add new shape" }, {2, "Show all shapes"},
			{3, "Show shape with the largest perimeter"}, {4, "Show shape with the largest area"},
			{5, "Show formulas"} });
}

void MenuWindow::doTheTask() {

}
