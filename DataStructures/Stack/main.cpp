#include <iostream>
#include "stack.hpp"
int main() {

    // create single linked list
	Stack stack;

    std::cout << "length : " << stack.length() << std::endl;
    std::cout << "isEmpty : " << stack.isEmpty() << std::endl;
    std::cout << std::endl;


	// add some elements to stack
	stack.push(6);
    std::cout << "push (6) : ";
    stack.print();
	stack.push(5);
    std::cout << "push (5) : ";
    stack.print();
    std::cout << "top : " << stack.top() << std::endl;
	stack.push(4);
    std::cout << "push (4) : ";
    stack.print();
	stack.push(3);
    std::cout << "push (3) : ";
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