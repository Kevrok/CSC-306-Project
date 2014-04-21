#include <string>
using namespace std;

#include "Tape.h"
#include "Inven.h"

class Menu {
	string input;
	bool moreCust;
	bool moreItem;
	Inven inven;
	float price;
	Tape tape;
	string desc;
public:
	void displayChoices(); // displays possible letters that user can enter, such as E, M, T, etc.
};