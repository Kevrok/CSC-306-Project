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
	nHead = nPtr;

	while (nPtr) {
		// traverse through the list, and have each member destroy itself
	}
}

bool Tape::addItem(string upc, string description, float price) // add item to the tail of the list
{
	bool rtn = true;  // really should predicate return value on the allocation working

	nPtr = new Node();                                      // create a node
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

	return rtn;
}

bool Tape::voidItem(string upc)  // remove item # nbr from the list
{
	bool rtn = true;
	// find item in list
	// remove item
	return rtn;
}

void Tape::displayItems()  // display the displaySize newest items   
{
	S.Box(posX, posY, posX + 25, posY + displaySize + 2, OLIVE); // draw display area
	int  count = 0;
	nPtr = nHead;

	while (nPtr && count++ < displaySize)
	{
		S.GotoXY(posX + 1, posY + count);
		cout << nPtr->itemPtr->UPC << " " << nPtr->itemPtr->desc << endl;  // use drawString
		nPtr = nPtr->nextPtr;
	}
}

Tape::Node * Tape::find(string upc)  // Private method: find node UPC in list and return a pointer to it
{
	nPtr = nHead;
	while (nPtr)                   // look at each Item until found
	{
		if (nPtr->itemPtr->UPC.compare(upc) == 0)   // if strings are equal
			return nPtr;           // found the node, return a pointer to it in list
		else
			nPtr = nPtr->nextPtr;  // move to next Item
	}
	return NULL;                   // not found
}