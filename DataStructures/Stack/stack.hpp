#ifndef STACK_HPP
#define STACK_HPP
#include "../DoubleLinkedList/doubleLinkedList.hpp"
#include <iostream>

class Stack {
    private:
        DoubleLinkedList* list;

    public:
        void push(int value);
        int length();
        int top();
        int pop();
        bool isEmpty();
        void print();

        Stack() {
            this->list = new DoubleLinkedList();
        }
        ~Stack ();
};
#endif