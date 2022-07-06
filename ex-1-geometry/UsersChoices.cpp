#include "UsersChoices.h"
#include <string>

UsersChoices::UsersChoices() {

}

UsersChoices::UsersChoices(std::map<int, std::string> choices) {
	this->choices = choices;
}

int UsersChoices::chooseNewState() {
	int newState;
	int usersNumber;

	// display options
	displayChoices();

	// read user's input
	usersNumber = readNumber(1, choices.size());

	// set new state accordingly
	std::map<int, std::string>::iterator it = choices.begin();
	for (int i = 0; i < usersNumber - 1; i++) {
		it++;
	}
	newState = it->first;

	return newState;
}

void UsersChoices::displayChoices() {
	int optionNumber = 1;

	for (const auto& choice : choices) {
		std::cout << optionNumber++ << ". " << choice.second << std::endl;
	}
}

int UsersChoices::readNumber(int rangeStart, int rangeEnd) {
	
	int number = HUGE_VAL;
	std::string userInput;

	while (number < rangeStart || number > rangeStart) {
		std::cin >> userInput;
		try {
			number = stoi(userInput);
			if (number < rangeStart || number > rangeStart) {
				std::cout << "Look, you're allowed to choose only between those few options" << std::endl;
			}
		} catch (const std::exception&) {
			std::cout << "It's not even a number!" << std::endl;
		}
	}
	
	return number;
}
