#include <iostream>
#include "queue.hpp"
int main() {

    // create single linked list
	Queue stack;

    std::cout << "length : " << stack.length() << std::endl;
    std::cout << "isEmpty : " << stack.isEmpty() << std::endl;
    std::cout << std::endl;


	// add some elements to stack
	stack.enqueue(6);
    std::cout << "enqueue (6)" << " : ";
    stack.print();
	stack.enqueue(5);
    std::cout << "enqueue (5)" << " : ";
    stack.print();
    std::cout << "peek : " << stack.peek() << std::endl;
	stack.enqueue(4);
    std::cout << "enqueue (4)" << " : ";
    stack.print();
	stack.enqueue(3);
    std::cout << "enqueue (3)" << " : ";
    stack.print();
	std::cout << "peek : " << stack.peek() << std::endl;
	std::cout << std::endl;

	std::cout << "dequeue : " << stack.dequeue() << " : ";
    stack.print();
	std::cout << "dequeue : " << stack.dequeue() << " : ";
    stack.print();
	std::cout << "dequeue : " << stack.dequeue() << " : ";
    stack.print();
	std::cout << "dequeue : " << stack.dequeue() << " : ";
    stack.print();
	std::cout << std::endl;
    std::cout << "isEmpty : " << stack.isEmpty() << std::endl;
	return 0;
}