#include <iostream>
#include "../DoubleLinkedList/doubleLinkedList.hpp"
#include "queue.hpp"

void Queue::push(int value) {
    this->list->add(value);
}

int Queue::top() {
    return this->list->first->value;
}

int Queue::length() {
    return this->list->length;
}

int Queue::pop() {
    int value = this->list->first->value;
    this->list->removeFirst();
    return value;
}

bool Queue::isEmpty() {
    return this->list->isEmpty();
}

void Queue::print() {
    this->list->print();
}

Queue::~Queue () {
    delete this->list;
}