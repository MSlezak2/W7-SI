#pragma once
#include <iostream>
#include "States.h"

class Window {

public:
	int displayWindow(); // returns the id of next state (state machine)

protected:
	void displayTitle();
	void displayDescription();
	virtual void doTheTask() = 0; // each window has it's own purpose, that method is where it should be implemented

	std::string title;
	std::string description;
	States availableStates;
};

