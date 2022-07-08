#pragma once
#include <iostream>
#include <map>

class States {
public:
	States();
	States(std::map<int, std::string> states);
	void setStates(std::map<int, std::string> states);
	int chooseNewState();

private:
	void displayStates();
	std::map<int, std::string> states; // key represents a state_id, value its label (what's gonna be displayed in menu)
};

