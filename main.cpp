#include <iostream>
#include "mychainedstack.h"
using namespace std;

// Basic Stack test procedure
int main()
{
 	cout << "Stacktest v1.0\n";
	Mychainedstack *mystack = new Mychainedstack();
	cout << "Empty stack : " << endl;
    mystack->print();
	mystack->push(1);
	cout << "Push 1" << endl;
    mystack->print();
	mystack->push(24);
	cout << "Push 24" << endl;
    mystack->print();
	cout << "Push 98" << endl;
	mystack->push(98);
    mystack->print();
	int tmp;
	tmp = mystack->pop();
	cout << "Pop" << endl;
	mystack->print();
	tmp = mystack->pop();
	cout << "Pop" << endl;
	mystack->print();
	cout << tmp << "\n";
	mystack->push(51);
	cout << "Push 51" << endl;
	mystack->print();
	mystack->push(63);
	cout << "Push 63" << endl;
	mystack->print();
	Mychainedstack *appendstack = *mystack + *mystack;
	cout << "Double add !" << endl;
	appendstack->print();
	tmp = appendstack->pop();
	cout << "Pop !" << endl;
	appendstack->print();
	tmp = appendstack->pop();
	cout << "Pop !" << endl;
	appendstack->print();
	cout << tmp << "\n";

	mystack->clear();
	cout << "Clear mystack" << endl;
	mystack->print();
	cout << "Appendstack value : " << endl;
	appendstack->print();
	tmp = appendstack->pop();
        cout << tmp << "\n";

	cout << "New : thinkgy" << endl;

    delete appendstack;
    delete mystack;

    return 0;
}
