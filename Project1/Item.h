// Item class
// Written by Dr. Renk, James Maher, and Kurt

class Item {
	string UPC;
	string desc; // item description
	float price;
	int qty;
public:
	Item(string UPC, string desc, float price, int qty);
	string getUPC(){ return UPC; }
	string getDesc(){ return desc; }
};