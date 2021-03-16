#ifndef STACK_HPP
#define STACK_HPP
#include "../DoubleLinkedList/doubleLinkedList.hpp"
#include <iostream>

class Queue {
    private:
        DoubleLinkedList* list;
    public:
        void enqueue(int value);     
        int dequeue();
        int peek();
        int length();
        bool isEmpty();
        void print();

        Queue() {
            this->list = new DoubleLinkedList();
        }
        ~Queue ();
};
#endif