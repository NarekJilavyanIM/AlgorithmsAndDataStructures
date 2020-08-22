#include <iostream>
#include "singleLinkedList.hpp"


Node::Node(int value) {
    this->value = value;
    this->next = NULL;
}


SingleLinkedList::SingleLinkedList(SingleLinkedList& initialList) {
    this->length = 0;
    this->first = NULL;
    this->last = NULL;
    if(!initialList.isEmpty()) {
        Node* nodePointer = initialList.first;
        while (nodePointer != NULL) {
            this->add(nodePointer->value);
            nodePointer = nodePointer->next;
        }
    }
}

SingleLinkedList::~SingleLinkedList() {
	Node* tempNodePointer = this->first;
	while(tempNodePointer != NULL) {
		removeFirst();
    	tempNodePointer = this->first;
	}
}

int SingleLinkedList::getFirst() {
    if(this->first != NULL) {
        return this->first->value;
    }
}


int SingleLinkedList::getLast() {
    if(this->last != NULL) {
        return this->last->value;
    }
}


int SingleLinkedList::get(int index) {
    if(this->first != NULL && index <= length) {
        Node* tempNodePointer = this->first;
        for(int i = 2; i <= index; ++i) {
            tempNodePointer = tempNodePointer->next;
        }
        return tempNodePointer->value;
    }
}


void SingleLinkedList::add(int value) {
	Node* newNodePointer = new Node(value);
	if(length == 0) {
		this->first = newNodePointer;
		this->last = newNodePointer;
	} else {
		this->last->next = newNodePointer;
		this->last = newNodePointer;
	}
	length++;
}


void SingleLinkedList::add(int value, int index) {
	if(index <= this->length+1 && index > 0) {
        Node* newNodePointer = new Node(value);
        if(index == 1) {
            newNodePointer->next = this->first;
            this->first = newNodePointer;
            length++;
        } else if(index == this->length+1) {
            this->add(value);
        } else {
            Node* temproryNodePointer = this->first;
            for(int i = 2; i < index; ++i) {
                temproryNodePointer = temproryNodePointer->next;
            }
            newNodePointer->next = temproryNodePointer->next;
            temproryNodePointer->next = newNodePointer;
            length++;
	    }
	}
}


void SingleLinkedList::removeFirst() {
	if(this->first != NULL) {
	    Node* temp = this->first->next;
	    delete this->first;
        this->first = temp;
        length--;
	}
}


void SingleLinkedList::removeLast() {
	if(this->first != NULL) {
	    Node* temproryNodePointer = this->first;
        while(temproryNodePointer->next != this->last) {
            temproryNodePointer = temproryNodePointer->next;
        }
	    delete this->last;
        this->last = temproryNodePointer;
        this->last->next = NULL;
        length--;
	}
}


void SingleLinkedList::remove(int index) {
	if(this->first != NULL && index <= length) {
	    Node* tempNodePointer = this->first;
        for(int i = 1; i < index-1; ++i) {
            tempNodePointer = tempNodePointer->next;
        }
        Node* removeNodePointer = tempNodePointer->next;
        tempNodePointer->next = removeNodePointer->next;
        delete removeNodePointer;
        length--;
	}
}


bool SingleLinkedList::isEmpty() {
	return this->length<=0;
}


bool SingleLinkedList::contains(int value) {
    Node* temp = this->first;
    while(temp != NULL) {
        if(temp->value == value) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}


void SingleLinkedList::print() {
	Node* temp = first;
	while(temp != NULL) {
		std::cout << temp->value << " ";
		temp = temp->next;
	}
	std::cout<<std::endl;
}
