#include <iostream>
using namespace std;

// build a Q class
struct Node {
	int data; // the data stored
	Node * next; // address to next node
};

class Q {
	Node * front; // ptr to first in line
	Node * back; // ptr to last in line
	int count;
public:
	Q(){ front = back = NULL; count = 0;}
	~Q(); // no copy or = yet
	bool nq(int val); // place value in back of Q
	bool dq(int & val); // // remove value from front of Q
	bool examine(int & val); // rtn value at front w/o removing
	bool isEmpty(){ return front == NULL; }// true if Q is empty
	void fnPrint(); // display the Q
};

Q::~Q() // destroy the Q and return its memory
{
	Node * temp = front; // start at front

	while (front != NULL) // loop till all gone
	{
		temp = front; // save old front
		front = front->next; // move to next item
		delete temp;
	}
}

bool Q::nq(int val) // add iVal at back
{
	Node * newPtr = new Node;
	bool rtn = true;

	if (newPtr == NULL) // new failed
	{
		rtn = false; // no space for new item
	}
	else // put new item at end
	{
		newPtr->data = val; // store data
		newPtr->next = NULL; // set end of list flag
		if (isEmpty())
		{
			front = back = newPtr; // only item in Q
		}
		else
		{
			back->next = newPtr; // put at back
		}
		back = newPtr; // new item now back of list
		count++;
	}
	return rtn;
}

bool Q::dq(int & val) // remove from front
{
	Node * temp;
	bool rtn = true;

	if (isEmpty())
	{
		rtn = false; // no item to remove
	}
	else // remove item at front
	{
		val = front->data; // get data
		temp = front; // save old front
		front = front->next; // move to next
		if (isEmpty())
		{
			back = NULL; // clean-up state
		}
		count--; // one less item
		delete temp; // return storage to heap
	}
	return rtn;
}