#include <iostream>
#include "doubleLinkedList.hpp"
#include <string>
#include <stdexcept>

DoubleLinkedList::DoubleLinkedList(DoubleLinkedList& initialList) {
    this->length = 0;
    this->first = NULL;
    this->last = NULL;
    if(!initialList.isEmpty()) {
        Node* temproryNodePointer = initialList.first;
        while (NULL != temproryNodePointer) {
            this->add(temproryNodePointer->value);
            temproryNodePointer = temproryNodePointer->next;
        }
    }
}

DoubleLinkedList::~DoubleLinkedList() {
	Node* temproryNodePointer = this->first;
	while(temproryNodePointer != NULL) {
		removeFirst();
        temproryNodePointer = first;
	}
}

int DoubleLinkedList::getFirst() {
    if(this->first != NULL) {
        return this->first->value;
    } else  {
        throw std::out_of_range("Called getFirst() in empty list");
    }
}

int DoubleLinkedList::getLast() {
    if(this->last != NULL) {
        return this->last->value;
    } else  {
        throw std::out_of_range("Called getLast() in empty list");
    }
}

int DoubleLinkedList::get(int index) {
    if(this->first != NULL && index <= length) {
        Node* temproryNodePointer = this->first;
        for(int i = 1; i < index; ++i) {
            temproryNodePointer = temproryNodePointer->next;
        }
        return temproryNodePointer->value;
    } else  {
        throw std::out_of_range("Called get(int index) in empty list");
    }
}

void DoubleLinkedList::add(int value) {
	Node* newNodePointer = new Node(value);
	if(first == NULL) {
		this->first = newNodePointer;
		this->last = newNodePointer;
	} else {
		this->last->next = newNodePointer;
		newNodePointer->prev = this->last;
		this->last = newNodePointer;
	}
	length++;
}

void DoubleLinkedList::add(int value, int index) {
	if(index <= this->length+1 && index > 0) {
        Node* newNodePointer = new Node(value);
        if(index == 1) {
            newNodePointer->next = this->first;
            this->first->prev = newNodePointer;
            this->first = newNodePointer;
            length++;
        } else if(index == this->length+1) {
            this->add(value);
        } else if (index > 1) {
            Node* temproryNodePointer = this->first;
            for(int i = 2; i < index; ++i) {
                temproryNodePointer = temproryNodePointer->next;
            }
            newNodePointer->next = temproryNodePointer->next;
            newNodePointer->prev = temproryNodePointer;
            temproryNodePointer->next->prev = newNodePointer;
            temproryNodePointer->next = newNodePointer;
            length++;
	    }
	}
}

void DoubleLinkedList::removeFirst() {
	if(this->length > 1) {
	    Node* temprory = this->first->next;
	    delete this->first;
	    temprory->prev = NULL;
        this->first = temprory;
        length--;
	} else if (this->length == 1) {
      	    this->removeSingleNode();
    } else  {
        throw std::out_of_range("Called removeFirst() in empty list");
    }
}

void DoubleLinkedList::removeLast() {
	if(this->length > 1) {
	    Node* temp = this->last->prev;
	    delete this->last;
        this->last = temp;
        this->last->next = NULL;
        length--;
	} else if (this->length == 1) {
	    this->removeSingleNode();
	} else  {
        throw std::out_of_range("Called removeLast() in empty list");
    }
}

void DoubleLinkedList::remove(int index) {
	if(this->first != NULL && index <= length) {
	    Node* temproryNodePointer = this->first;
        for(int i = 2; i < index; ++i) {
            temproryNodePointer = temproryNodePointer->next;
        }
        Node* removeNodePointer = temproryNodePointer->next;
        temproryNodePointer->next = removeNodePointer->next;
        temproryNodePointer->next->prev = temproryNodePointer;
        delete removeNodePointer;
        length--;
	} else  {
        throw std::out_of_range("Called remove(int index) in empty list");
    }
}

bool DoubleLinkedList::isEmpty() {
	return this->length<=0;
}

bool DoubleLinkedList::contains(int value) {
    Node* temp = this->first;
    while(temp != NULL) {
        if(temp->value == value) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void DoubleLinkedList::print() {
	Node* temp = first;
	while(temp != NULL) {
		std::cout << temp->value << " ";
		temp = temp->next;
	}
	std::cout<<std::endl;
}

void DoubleLinkedList::printr() {
	Node* temp = last;
	while(temp != NULL) {
		std::cout << temp->value << " ";
		temp = temp->prev;
	}
	std::cout<<std::endl;
}

void DoubleLinkedList::removeSingleNode() {
    delete this->first;
    this->first = NULL;
    this->last = NULL;
    length--;
}