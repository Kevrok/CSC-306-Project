// James Maher
// CSC-306 Project 1
// File: main.cpp
// Last modified on 4-17-14

#include <iostream>
#include <string>

#include "CScreen.h"
#include "Item.h"

using namespace std;

class List {
	Node *head, *tail, *ptr;
public:
	List() { head = tail = ptr = NULL; }
	bool isEmpty() { return !head; }
	bool isFull() {}
	void addItem() {}
	void removeItem() {}
};

class Tape {
public:
	Tape (CScreen&) {}
	void display(int x, int y, int nbrItems) {} // x,y is upper left corner of display area, and nbrItems is # of items to display at once
};

struct Inventory {

};

class CashReg {
	float total,
	      registerTotal; // cash in register
	string input; // value for a prompt
	Tape tape; // holds the order's items
	Inventory inventory;
	Item item;
public:
	CashReg (float, float, string, Tape, Inventory, Item);
	void EnterUPC (char* UPC) {}
	void ShutDown () {}
	void CloseOrder () {}
};

void CashReg::EnterUPC (char* UPC) {
}

void CashReg::ShutDown () { // Verify that there is not currently an open order, and then shut down
}

void CashReg::CloseOrder() { // calculate total purchase amt, amt received, and change
}

int main(void) {
	bool moreCustomers, 
		 moreItems;

	char* command = 0;

	float initialCash = 0.0;

	CScreen s;

	moreCustomers = moreItems = true;

	cout << "Please enter the amount of cash in the register: ";
	cin >> initialCash;

	while (moreCustomers) { // loop until E is entered
		cout << "\nPlease enter a command: ";
		cin >> command;

		if (command[0] == 'N') { // start new tape
			while (moreItems) { // loop until T is entered
				cout << "\nPlease enter a command or UPC: ";
				cin >> command;

				if (command[1] != '\0') { // it's a UPC
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

	return 0;
}