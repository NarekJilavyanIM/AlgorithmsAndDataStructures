#include <iostream>
#include "queue.hpp"
int main() {

    // create single linked list
	Queue stack;

    std::cout << "length : " << stack.length() << std::endl;
    std::cout << "isEmpty : " << stack.isEmpty() << std::endl;
    std::cout << std::endl;


	// add some elements to stack
	stack.push(6);
    std::cout << "push (6)" << " : ";
    stack.print();
	stack.push(5);
    std::cout << "push (5)" << " : ";
    stack.print();
    std::cout << "top : " << stack.top() << std::endl;
	stack.push(4);
    std::cout << "push (4)" << " : ";
    stack.print();
	stack.push(3);
    std::cout << "push (3)" << " : ";
    stack.print();
	std::cout << "top : " << stack.top() << std::endl;
	std::cout << std::endl;

	std::cout << "pop : " << stack.pop() << " : ";
    stack.print();
	std::cout << "pop : " << stack.pop() << " : ";
    stack.print();
	std::cout << "pop : " << stack.pop() << " : ";
    stack.print();
	std::cout << "pop : " << stack.pop() << " : ";
    stack.print();
	std::cout << std::endl;
    std::cout << "isEmpty : " << stack.isEmpty() << std::endl;
	return 0;
}



/*
#include "doubleLinkedList.hpp"

int main()
{

    //     the index starts from 1
    DoubleLinkedList list;

    // add some elements to list
    list.add(1);
    list.add(2);
    list.add(3);

    std::cout << "list : ";
    list.print();
    std::cout << "list ( reverse print ) : ";
    list.printr();
    std::cout << "length : " << list.length << std::endl;
    std::cout << "isEmpty : " << list.isEmpty() << std::endl;

    // print results of 
    //     print()
    //     getFirst()
    //     get(index)
    //     getLast()
    std::cout << std::endl;
    std::cout << "getFirst() : " << list.getFirst() << std::endl;
    std::cout << "get(index) : (2) : " << list.get(2) << " ( the index starts from 1 )"
        << std::endl;
    std::cout << "getLast() : " << list.getLast() << std::endl;
    std::cout << "length : " << list.length << std::endl;
    std::cout << std::endl;

    // add element to list with index
    //     add with index 1 ( first )
    //     add with index length + 1
    //     add with random index ( 0 < index <= length+1 ) 

    std::cout << "list : ";
    list.print();
    list.add(4, 1);
    std::cout << "add with index 1 ( first ) : ";
    list.print();
    list.add(5, 5);
    std::cout << "add with index length + 1 : ";
    list.print();
    list.add(6, 3);
    std::cout << "add with index ( 0 < index <= length+1 ) : ";
    list.print();
    std::cout << "length : " << list.length << std::endl;
    std::cout << std::endl;

    // remove elements
    //     remove first element
    //     remove last element
    //     remove element with index ( 0 < index <= length )
    std::cout << "list : ";
    list.print();
    list.removeFirst();
    std::cout << "remove first element : ";
    list.print();
    list.removeLast();
    std::cout << "remove last element : ";
    list.print();
    list.remove(2);
    std::cout << "remove element with index ( 0 < index <= length ) : ";
    list.print();
    std::cout << "list ( reverse print ) : ";
    list.printr();
    std::cout << "length : " << list.length << std::endl;
    std::cout << std::endl;

    // validate function Contains()
    // positive
    std::cout << "list : ";
    list.print();
    std::cout << "validate function Contains()" << std::endl;
    std::cout << "positive ( 1 ) : " << list.contains(1) << std::endl;
    // negative
    std::cout << "negative ( 9 ) : " << list.contains(9) << std::endl;
    std::cout << "length : " << list.length << std::endl;
    std::cout << std::endl;

    std::cout << "list : ";
    list.print();
    // validate copy canstructor
    DoubleLinkedList copiedList(list);
    std::cout << "copied list : ";
    copiedList.print();
    std::cout << "length : " << list.length << std::endl;

    return 0;
}



*/