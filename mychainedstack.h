#ifndef DEF_MYCHAINEDSTACK
#define DEF_MYCHAINEDSTACK

#include <ostream>
#include "mystack.h"

class Node {
public:
    explicit Node(int num) {
        this->number = num;
        this->next = nullptr;
    }
    ~Node() = default;

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

    Mychainedstack();

    void push(int number);

    int pop(void);

    Mychainedstack *operator+(Mychainedstack s2);

    void print();

    void clear();
};

#endif


