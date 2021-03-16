#include <iostream>
#include "../DoubleLinkedList/doubleLinkedList.hpp"
#include "queue.hpp"

void Queue::enqueue(int value) {
    this->list->add(value);
}

int Queue::peek() {
    int value;
    if(this->list->first) {
        value = this->list->first->value;
    } else {
        throw std::out_of_range("Called peek() in empty queue");
    }
    return value;
}

int Queue::length() {
    return this->list->length;
}

int Queue::dequeue() {
    int value;
    if(this->list->first) {
        value = this->list->first->value;
    } else {
        throw std::out_of_range("Called dequeue() in empty queue");
    }
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