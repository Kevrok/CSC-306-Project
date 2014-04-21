// Cash register methods
// Written by James Maher and Kurt

#include <iostream>
using namespace std;

#include "CashReg.h"

void CashReg::TurnOn() {
	cout << "Please enter the amount of cash in the register: ";
	cin >> initAmt;
}