#pragma once
//#include "UI.h"
#include <iostream>
#include <map>
#include <vector>

class UI;

class UsersChoices {
public:
	UsersChoices();
	UsersChoices(std::map<int, std::string> states);
	void setStates(std::map<int, std::string> newStates);
	void setOptions(std::vector<std::string> newOptions);
	int chooseNewState();
	int chooseOption();

private:
	void displayStates();
	void displayOptions();


	std::map<int, std::string> states; // key represents a state_id, value its label (what's gonna be displayed in menu)
	std::vector<std::string> options;
};

