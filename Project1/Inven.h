// Inventory class
// Written by James Maher and Kurt

#include "Item.h"

class Inven {
	Item item;
public:
	float findPrice();
	string lookUpDesc(string upc); // find description that corresponds with UPC
	float lookUpPrice(string upc); // look up item's price
};