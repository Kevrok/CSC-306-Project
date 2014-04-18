// James Maher
// CSC-306 Project 1
// File: main.cpp
// Last modified on 4-17-14

#include <iostream>
#include <string>

#include "CScreen.h"
#include "Item.h"

using namespace std;

class Node {
};

class List {
	Node *head, *tail, *ptr;
public:
	List() { head = tail = ptr = NULL; } // simple constructor
	List() {const List &obj) // copy constructor
	~List() {}
	bool isEmpty() { return !head; }
	bool isFull() {}
	void addItem(char* UPC) {}
	void removeItem() {}
};

void List::addItem(char* UPC) {
	if (&head == NULL) // if list is currently empty
		head = tail = ptr;
	else if (&head != NULL && tail == head) // if there's only one thing in the list
		// make tail the new item, and have head point to tail
	else // if (&head != NULL && &tail != NULL) // the list is >= 2 nodes in size
		// make a new node between head and tail, have head point to new node, and have new node point to tail (assuming there are no other in-between nodes) 
		
}

class Tape {
public:
	Tape (CScreen&) {} // simple constructor
	Tape () {const Tape &obj} // copy constructor
	~Tape () {}
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
	CashReg (float, float, string, Tape, Inventory, Item); // simple constructor
	CashReg (const CashReg &obj); // copy constructor
	~CashReg(); // destructor
	void TurnOn () {}
	void TurnOff () {}
	void CloseOrder () {}
};

void CashReg::ShutDown () { // Verify that there is not currently an open order, and then shut down
}

void CashReg::CloseOrder() { // calculate total purchase amt, amt received, and change
}

class keyboard {
public:
	void enterCommand() {}
	char* UPC enterUPC() {}
};

char keyboard::enterCommand() {} {
	// send command to cash register CPU
}

char* UPC keyboard::enterUPC() {
	char* UPC;

	return UPC;
	// send UPC to cash register CPU
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

	return 0;
}