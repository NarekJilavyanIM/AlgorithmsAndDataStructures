#include <iostream>
#include "../DoubleLinkedList/doubleLinkedList.hpp"
#include "stack.hpp"

void Stack::push(int value) {
    this->list->add(value);
}

int Stack::top() {
    int value;
    if(this->list->last) {
        value = this->list->last->value;
    } else {
        throw std::out_of_range("Called top() in empty stack");
    }
    return value;
}

int Stack::length() {
    return this->list->length;
}

int Stack::pop() {
    int value;
    if(this->list->last) {
        value = this->list->last->value;
    } else {
        throw std::out_of_range("Called pop() in empty stack");
    }
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