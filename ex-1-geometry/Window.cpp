#include "Window.h"

int Window::displayWindow() {
	//
	int nextState;

	displayTitle();
	displayDescription();

	//do what is supposed to be done
	doTheTask();

	//let user choose next state
	nextState = availableStates.chooseNewState();

	return nextState;
}

void Window::displayTitle() {
	std::cout << title << std::endl;
}

void Window::displayDescription() {
	if (!description.empty()) {
		std::cout << description << std::endl;
	}
}
