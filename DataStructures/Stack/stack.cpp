#include <iostream>
#include "../DoubleLinkedList/doubleLinkedList.hpp"
#include "stack.hpp"

void Stack::push(int value) {
    this->list->add(value);
}

int Stack::top() {
    return this->list->last->value;
}

int Stack::length() {
    return this->list->length;
}

int Stack::pop() {
    int value = this->list->last->value;
    this->list->removeLast();
    return value;
}

bool Stack::isEmpty() {
    return this->list->isEmpty();
}

void Stack::print() {
    this->list->print();
}

Stack::~Stack () {
    delete this->list;
}