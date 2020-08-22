#ifndef DOUBLE_LINKED_LIST_HPP
#define DOUBLE_LINKED_LIST_HPP
#include <iostream>

class Node {
    public:
        Node* prev;
        Node* next;
        int value;

        Node(int value) {
            this->value = value;
            this->next = NULL;
            this->prev = NULL;
        }
        Node() {
            this->prev = NULL;
            this->next = NULL;
        }
        ~Node() {
            this->prev = NULL;
            this->next = NULL;
        }
};

class DoubleLinkedList {
    private:
        void removeSingleNode();
    public:
        Node* first;
        Node* last;
        size_t length;

        void add(int value);
        void add(int value, int index);
        int getFirst();
        int getLast();
        int get(int index);
        void removeFirst();
        void removeLast();
        void remove(int index);
        bool isEmpty();
        bool contains(int value);
        void print();
        void printr();

        DoubleLinkedList(DoubleLinkedList&);
        DoubleLinkedList() {
            length = 0;
            first = NULL;
            last = NULL;
        }
        ~DoubleLinkedList ();
};
#endif