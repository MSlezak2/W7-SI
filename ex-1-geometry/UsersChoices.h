#pragma once
#include <iostream>
#include <map>

class UsersChoices {
public:
	UsersChoices();
	UsersChoices(std::map<int, std::string> choices);
	int chooseNewState();

private:
	void displayChoices();
	int readNumber(int rangeStart, int rangeEnd);

	std::map<int, std::string> choices; // key represents a state_id, value its label (what's gonna be displayed in menu)

};

