// Cash register menu
// Written by James Maher and Kurt

#include <iostream>
using namespace std;

#include "Menu.h"

void Menu::displayChoices() {
	moreCust = true;

	while (moreCust) { // loop until E is entered
		cout << "M -- Multiple\nV -- Void\nT -- Total\nN -- New tape\nE -- Close register\nPlease enter a command: ";
		cin >> input;

		if (input.compare("N") == 0) { // start new tape
			moreItem = true;

			while (moreItem) { // loop until T is entered
				cout << "\nPlease enter a command or UPC: ";
				cin >> input;

				if (input.compare(NULL) != 0) { // it's a UPC
					// look up item in inventory
					desc = inven.lookUpDesc(input);
					price = inven.lookUpPrice(input);

					// add item to purchase list
					tape.addItem(input, desc, price);
				}
				else if (input.compare("M") == 0) {
					// handle multiples
				}
				else if (input.compare("V") == 0)
					tape.voidItem(input);
				else if (input.compare("T") == 0) {
					// total order
					moreItem = false;
				}
				else
					cout << "Please enter a valid command or UPC.\n";
			}
		}
		else if (input.compare("E") == 0) {
			// close register
			moreCust = false;
		}
		else
			cout << "Please enter a valid command.\n";
	}
}