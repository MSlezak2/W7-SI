#include "States.h"
#include "UI.h"


States::States() {}

States::States(std::map<int, std::string> states) {
	this->states = states;
}

void States::setStates(std::map<int, std::string> newStates) {
	states = newStates;
}

int States::chooseNewState() {
	int newState;
	int usersNumber;

	// display options
	displayStates();

	// read user's input
	usersNumber = UI::readNumber(1, states.size());

	// set new state accordingly
	std::map<int, std::string>::iterator it = states.begin();
	for (int i = 0; i < usersNumber - 1; i++) {
		it++;
	}
	newState = it->first;

	return newState;
}

void States::displayStates() {
	int optionNumber = 1;

	for (const auto& choice : states) {
		std::cout << optionNumber++ << ". " << choice.second << std::endl;
	}
}

