// Cash Register Tape
// Author: Dr. Renk

#include <string>
using namespace std;

#include "CScreen.h"
#include "Item.h"

class Tape
{
	class Node { // local class - data element for linked list
	public:
		// Node is used in a doubly linked list (forward & backward)
		Item * itemPtr; // pointer to an Item
		Node * nextPtr; // pointer to the next Node
		Node * prevPtr; // pointer to previous Node

		Node(){ itemPtr = NULL; nextPtr = prevPtr = NULL; } // Constructor: create unconnecting node
	};

	Node * nHead, *nTail, *nPtr; // linked list pointers
	int itemCount;                       // # items in the list
	int posX, posY;         // (x, y) position of upper left corner of the Tape display
	int displaySize;         // number of Items displayed
	CScreen S;

	// ******* Helper methods ********
	Node * find(string upc); // find node # in list and return a pointer to it

public:
	Tape(int x, int y, int size); // constructor - create an empty list
	~Tape(); // destroy the list
	bool addItem(Item * item); // add item to the head of the list 
	bool addItem(string upc, string description, float price);
	bool voidItem(string upc); // remove item # from the list 
	void displayItems(); // display current Item & the previous displaySize-1 items
	// this will give the illusion of scrolling - call after every addItem()
};