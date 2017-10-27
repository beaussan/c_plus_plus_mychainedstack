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

	Mychainedstack* stack1 = new Mychainedstack();
	Mychainedstack* stack2 = new Mychainedstack();
	// + test de fuite memoire

    cout << "Start push value " << endl;
	stack1->push(1);
    cout << "Start push value " << endl;
	stack1->push(2);
    cout << "Start push value " << endl;
	stack1->push(3);

    cout << "Start push value Stack 2" << endl;
    stack2->print();
	stack2->push(10);
    stack2->print();
    cout << "Start push value Stack 2" << endl;
	stack2->push(20);
    cout << "Start push value Stack 2" << endl;
	stack2->push(30);

    cout << "Start copy" << endl;

	Mychainedstack *appenBis = *stack1 + *stack2;

    cout << "End copy" << endl;

    appenBis->print();

    cout << "Start boucle" << endl;



    delete stack1;
    delete stack2;
    delete appenBis;
    delete appendstack;
    delete mystack;

    return 0;
}
