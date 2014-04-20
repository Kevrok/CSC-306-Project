// Cash register menu
// Written by James Maher and Kurt

#include <iostream>
#include <string>
using namespace std;

#include "CScreen.h"
#include "Menu.h"

void Menu::displayChoices() {
	while (moreCustomers) { // loop until E is entered
		cout << "\nPlease enter a command: ";
		cin >> command;

		if (command[0] == 'N') { // start new tape
			while (moreItems) { // loop until T is entered
				cout << "\nPlease enter a command or UPC: ";
				cin >> command;

				if (command[1] != NULL) { // it's a UPC
					// look up item in inventory
					// add item to purchase list
				}
				else if (command[0] == 'M')
					// handle multiples
				else if (command[0] == 'V')
				// handle void
				else if (command[0] == 'T') {
					// total order
					moreItems = false;
				}
			}
		}
		else if (command[0] == 'E') {
			// close register
			moreCustomers = false;
		}
	}
}

int main(void) {
	bool moreCustomers,
		 moreItems;
	string command;
	float initialCash;
	CScreen s;

	cout << "Please enter the amount of cash in the register: ";
	cin >> initialCash;

	return 0;
}