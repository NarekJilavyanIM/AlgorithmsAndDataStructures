#include <iostream>

void printArray(int* array) {
    for (int i = 0; i < 8; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void InsertionSort(int* array, int length) {
    std::cout << std::endl;
    std::cout << "=======>\tInsertion Sort process\t<=======" << std::endl;
    std::cout << std::endl;
    for (int i = 1; i < length; i++) {
        int newElement = i;
        int j = i - 1;
        for (;array[j] > array[newElement] && j >= 0 && newElement > 0; --newElement && --j) {
            std::swap(array[newElement], array[j]);
        }
        printArray(array);
    }

    std::cout << std::endl;
    std::cout << "=======>\tInsertion Sort result\t<=======" << std::endl;
    std::cout << std::endl;
}

int main() {
    int arrayLength = 8;
    int array[] = {6, 5, 2, 3, 7, 4, 8, 1};

    printArray(array);

    InsertionSort(array, arrayLength);

    printArray(array);
    std::cout << std::endl;

}