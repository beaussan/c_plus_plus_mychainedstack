#include "mychainedstack.h"
#include <iostream>

using namespace std;

/**
 *
 * @param number
 */
void Mychainedstack::push(int number) {
    Node *node;
    node = new Node();
    node->number = number;

    if (this->first != NULL) {
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

    if (this->first == NULL) {
        return 42;
    }

    current = this->first;
    next = current->next;
    number = current->number;
    this->first = next;
    delete current;
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

    if (s2.first == NULL) {
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
    while (this->first != NULL) {
        this->pop();
    }
}

Node *Mychainedstack::getLast() {
    Node *current;
    if (this->first == NULL) {
        return NULL;
    }
    current = this->first;
    while (current->next != NULL) {
        current = current->next;
    }
    return current;
}

void Mychainedstack::print() {

    Node *current;
    int i;
    cout << "My chained stack" << endl;
    current = this->first;
    if (this->first == NULL) {
        cout << "Empty !" << endl;
    }
    for (i = 0; current != NULL; ++i) {
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

    if (this->first == NULL) {
        return NULL;
    }
    firstNode = new Node();
    firstNode->number = this->first->number;

    currentOriginal = this->first;
    current = firstNode;
    nextOriginal = currentOriginal->next;

    while (nextOriginal != NULL) {

        next = new Node();
        next->number = nextOriginal->number;
        current->next = next;
        current = next;
        nextOriginal = nextOriginal->next;

    }


    return firstNode;
}

Mychainedstack::~Mychainedstack() {
    this->clear();
}


