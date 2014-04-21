// Cash Register Tape
// Author: Dr. Renk
// Modifier: James Maher

#include <iostream>
using namespace std;

#include "Tape.h"

Tape::Tape(int x, int y, int size)   // constructor - create an empty list
{
	posX = x; posY = y; displaySize = size;
	nHead = nTail = nPtr = NULL;
	itemCount = 0;
}

Tape::~Tape()   // destructor
{
	nPtr = nHead;

	while (nPtr) {
		// traverse through the list, and have each member destroy itself
		Node *nextPtr = nPtr->nextPtr;
		delete nPtr;
		nPtr = nextPtr;
	}
}

bool Tape::addItem(Item * item) // add item to head of list
{
	bool rtn = false; // predicates return value on the allocation working

	if (nPtr = new Node()) { // create a node
		rtn = true;
		nPtr->itemPtr = item;
		itemCount++;

		// hook node on head of list

		if (!nHead) // empty list
			nHead = nTail = nPtr;
		else
		{
			nPtr->nextPtr = nHead;
			nHead = nPtr;
		}
	}

	return rtn;
}

bool Tape::addItem(string upc, string description, float price) // add item to the head of the list
{
	bool rtn = false;  // predicates return value on the allocation working

	if (nPtr = new Node()) { // create a node
		rtn = true;
		nPtr->itemPtr = new Item(upc, description, price, 1);   // create & link a dynamic Item
		itemCount++;

		// hook node on head of list

		if (!nHead)    // empty list
			nHead = nTail = nPtr;
		else
		{
			nPtr->nextPtr = nHead;
			nHead = nPtr;
		}
	}

	return rtn;
}

bool Tape::voidItem(string upc)  // remove item # from the list
{
	bool rtn = false;

	if (nPtr = find(upc)) { // if item can be found
		rtn = true;

		// have previous item point to next item
		nPtr->prevPtr = ;

		// have next item point to prev item
		nPtr->nextPtr = nPtr;

		// remove item
		delete nPtr;
	}

	return rtn;
}

void Tape::displayItems()  // display the displaySize newest items   
{
	S.Box(posX, posY, posX + 25, posY + displaySize + 2, OLIVE); // draw display area
	int  count = 0;
	nPtr = nHead;

	while (nPtr && count++ < displaySize) // while you're pointing to something and you haven't printed enough items on the screen
	{ // go ahead and print the next one
		S.DrawString(nPtr->itemPtr->getUPC(), posX + 1, posY + count, OLIVE, WHITE);
		S.DrawString(nPtr->itemPtr->getDesc(), posX + 15, posY + count, OLIVE, WHITE);
		nPtr = nPtr->nextPtr;
	}
}

Tape::Node * Tape::find(string upc)  // Private method: find node UPC in list and return a pointer to it
{
	nPtr = nHead;
	while (nPtr)                   // look at each Item until found
	{
		if (nPtr->itemPtr->getUPC().compare(upc) == 0)   // if strings are equal
			return nPtr;           // found the node, return a pointer to it in list
		else
			nPtr = nPtr->nextPtr;  // move to next Item
	}
	return NULL;                   // not found
}