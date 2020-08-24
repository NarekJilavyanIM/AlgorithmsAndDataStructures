#include <iostream>

void printArray(int* array) {
    for (int i = 0; i < 8; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int LinearSerach(int* array, int length, int element) {
    for (int i = 0; i < length; i++) {
        if (array[i] == element) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arrayLength = 8;
    int array[] = {12, 1, 126, 78, 5, 4, 39, 94};

    printArray(array);

    std::cout << std::endl;
    std::cout << "=======>\tLinear Serach result\t<=======" << std::endl;
    std::cout << std::endl;
    std::cout << "index of element ( 5 ) : " << LinearSerach(array, arrayLength, 5) << std::endl;
    std::cout << "index of element ( 7 ) : " << LinearSerach(array, arrayLength, 7) << std::endl;
}