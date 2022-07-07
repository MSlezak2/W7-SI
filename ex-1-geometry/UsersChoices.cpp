#include "UsersChoices.h"
#include "UI.h"
#include <string>

UsersChoices::UsersChoices() {

}

UsersChoices::UsersChoices(std::map<int, std::string> states) {
	this->states = states;
}

void UsersChoices::setStates(std::map<int, std::string> newStates) {
	states = newStates;
}

void UsersChoices::setOptions(std::vector<std::string> newOptions) {
	options = newOptions;
}

int UsersChoices::chooseNewState() {
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

int UsersChoices::chooseOption() {

	displayOptions();

	return UI::readNumber(1, options.size());;
}

void UsersChoices::displayStates() {
	int optionNumber = 1;

	for (const auto& choice : states) {
		std::cout << optionNumber++ << ". " << choice.second << std::endl;
	}
}

void UsersChoices::displayOptions() {

	for (int i = 1; i <= options.size(); i++) {
		std::cout << i << ". " << options[i - 1] << std::endl;
	}
}

