#include "Options.h"
#include "UI.h"
#include <iostream>

Options::Options() {}

Options::Options(std::vector<std::string> options) {
	this->options = options;
}

void Options::setOptions(std::vector<std::string> newOptions) {
	options = newOptions;
}

int Options::chooseOption() {

	displayOptions();

	return UI::readNumber(1, options.size());;
}

void Options::displayOptions() {

	for (int i = 1; i <= options.size(); i++) {
		std::cout << i << ". " << options[i - 1] << std::endl;
	}
}
