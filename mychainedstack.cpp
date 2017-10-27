#include "mychainedstack.h"
#include <iostream>

using namespace std;

/**
 *
 * @param number
 */
void Mychainedstack::push(int number) {
    Node *node;
    node = new Node(number);
    if (this->first != nullptr) {
        node->next = this->first;
    }

    this->first = node;
}

/**
 *
 * @return the data, if empty return 0
 */
int Mychainedstack::pop(void) {
    Node *next;
    Node *current;
    int number;

    if (this->first == nullptr) {
        return 42;
    }

    current = this->first;
    next =  this->first->next;
    number = current->number;
    this->first = next;
    delete current;
    // free(current);
    return number;
}

/**
 * Add pile 2 au dessus de pile source
 * if pille 2 == NUL, return pile 1
 * @param s2
 * @return
 */
Mychainedstack *Mychainedstack::operator+(Mychainedstack s2) {
    Mychainedstack *newStack;

    newStack = new Mychainedstack();

    if (s2.first == nullptr) {
        newStack->first = duplicateNodeTree();
    } else {

        newStack->first = s2.duplicateNodeTree();

        newStack->getLast()->next = this->duplicateNodeTree();
    }

    return newStack;
}

/**
 *
 */
void Mychainedstack::clear(void) {
    while (this->first != nullptr) {
        this->pop();
    }
}

Node *Mychainedstack::getLast() {
    Node *current;
    if (this->first == nullptr) {
        return nullptr;
    }
    current = this->first;
    while (current->next != nullptr) {
        current = current->next;
    }
    return current;
}

void Mychainedstack::print() {

    Node *current;
    int i;
    cout << "My chained stack" << endl;
    current = this->first;
    if (this->first == nullptr) {
        cout << "Empty !" << endl;
    }
    for (i = 0; current != nullptr; ++i) {
        cout << i << " : " << current->number << endl;
        current = current->next;
    }
}

Node *Mychainedstack::duplicateNodeTree() {
    Node *firstNode;
    Node *current;
    Node *currentOriginal;
    Node *next;
    Node *nextOriginal;

    if (this->first == nullptr) {
        return nullptr;
    }
    firstNode = new Node(this->first->number);

    currentOriginal = this->first;
    current = firstNode;
    nextOriginal = currentOriginal->next;

    while (nextOriginal != nullptr) {

        next = new Node(nextOriginal->number);
        // next->number = nextOriginal->number;
        current->next = next;
        current = next;
        nextOriginal = nextOriginal->next;

    }


    return firstNode;
}

Mychainedstack::~Mychainedstack() {
    this->clear();
}

Mychainedstack::Mychainedstack() {
    this->first = nullptr;
}


