// Cash register class
// Written by James Maher and Kurt

#include <string>
using namespace std;

#include "Tape.h"
#include "Item.h"
#include "Inven.h"

class CashReg {
	float total,
		  regTotal; // cash in register
	string input; // value for a prompt
	Tape tape; // holds the order's items
	Inven inventory;
	Item item;
	float initAmt;
public:
	//CashReg(float, float, string, Tape, Inven, Item); // constructor - create an empty cash register
	CashReg(const CashReg &obj); // copy constructor
	~CashReg(); // destroy the cash register
	void TurnOn() {}
	void TurnOff() {}
	void CloseOrder() {}
};
