#include <iostream>

void printArray(int* array) {
    for (int i = 0; i < 8; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void BubbleSort(int* array, int length) {
    std::cout << std::endl;
    std::cout << "=======>\tBubble Sort process\t<=======" << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < length-1; i++) {
        for ( int j = 0; j < length-i-1; j++) {
            if (array[j] > array[j+1])  
                std::swap(array[j], array[j+1]);  
        }
        printArray(array);
    }

    std::cout << std::endl;
    std::cout << "=======>\tBubble Sort result\t<=======" << std::endl;
    std::cout << std::endl;
}

int main() {
    int arrayLength = 8;
    int array[] = {6, 5, 2, 3, 7, 4, 8, 1};

    printArray(array);

    BubbleSort(array, arrayLength);

    printArray(array);

    std::cout << std::endl;
}