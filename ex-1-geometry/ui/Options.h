#pragma once
#include <vector>
#include <string>

class Options {
public:
	Options();
	Options(std::vector<std::string> options);
	void setOptions(std::vector<std::string> newOptions);
	int chooseOption();

private:
	void displayOptions();
	std::vector<std::string> options;
};


