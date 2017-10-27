#ifndef DEF_MYCHAINEDSTACK
#define DEF_MYCHAINEDSTACK

#include <ostream>
#include "mystack.h"

struct Node {
    int number;
    Node *next;
};

class Mychainedstack : public Mystack {
    // Méthodes
private:
    Node *first;

    Node *getLast();

    Node *duplicateNodeTree();


public:

    ~Mychainedstack();

    void push(int number);

    int pop(void);

    Mychainedstack *operator+(Mychainedstack s2);

    void print();

    void clear();
};

#endif


