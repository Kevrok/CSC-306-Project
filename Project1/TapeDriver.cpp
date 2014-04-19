// Cash Register Tape Driver
// Author: Dr. Renk

#include <conio.h>

#include "Tape.h"

void main() // using main() to test the tape object
{
	Tape tape(10, 10, 5); // create a tape

	tape.addItem("0000", "clown doll", 0.99f);
	tape.addItem("1111", "woopy cushion", 1.99f);
	tape.addItem("2222", "barby doll", 2.99f);
	tape.addItem("3333", "straight As", 3.99f);
	tape.addItem("4444", "dog food", 4.99f);
	tape.addItem("5555", "old tires", 5.99f);
	tape.addItem("6666", "yard waste", 6.99f);
	tape.addItem("7777", "somethin' good", 7.99f);

	tape.displayItems();
	_getch();
}