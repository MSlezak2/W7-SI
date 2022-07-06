#include "UI.h"
#include <iostream>
#include <map>

UI::UI() {
	std::cout << "test";
}

void UI::start() {

	int state = 0;

	while (state != -1) {
		switch (state) {
		case 0: // state MAIN MENU
		{
			/*std::map<int, std::string> choices{ {1, "Add new shape"}, {2, "Show all shapes"}, {}};
			std::string possibilities_keys_start[] = { "NAME","BATTERY CHARGE STATUS","TEMPERATURE","VELOCITY","STATUS","EXIT" };
			char possibilities_values_start[] = { '1','2','3','4','5','x' };
			int no_possibilities_start = LENGTH_OF(possibilities_keys_start);
			users_choice = let_user_decide(possibilities_keys_start, possibilities_values_start, no_possibilities_start);*/

			std::map<int, std::string> choices = { {1, "Add new shape"}, {2, "Show all shapes"} };
			usersChoices = UsersChoices(choices);
			state = usersChoices.chooseNewState();
			break;
		}
		case 1:
			std::cout << "STATE ADD" << std::endl;
			getchar();
			state = 0;
			break;
		case 2:
			std::cout << "STATE SHOW ALL" << std::endl;
			getchar();
			state = 0;
			break;
		}
	}
}
