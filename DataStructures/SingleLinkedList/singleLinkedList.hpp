#ifndef SINGLE_LINKED_LIST_HPP
#define SINGLE_LINKED_LIST_HPP
#include <iostream>

class Node {
    public:
        Node* next;
        int value;

        Node(int value);
        Node()	{
            this->next = NULL;
        }
        ~Node() {
            this->next = NULL;
        }
};

class SingleLinkedList {
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

        SingleLinkedList(SingleLinkedList&);
        SingleLinkedList() {
            length = 0;
            first = NULL;
            last = NULL;
        }
        ~SingleLinkedList ();
};
#endif