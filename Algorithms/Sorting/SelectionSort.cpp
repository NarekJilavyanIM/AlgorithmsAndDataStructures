#include <iostream>

void printArray(int* array) {
    for (int i = 0; i < 8; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void SelectionSort(int* array, int length) {
    std::cout << std::endl;
    std::cout << "=======>\tSelection Sort process\t<=======" << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < length-1; i++) {
        int min = i;
        for (int j = i+1; j < length; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        if (min != i) {
            std::swap(array[i], array[min]);
        }
        printArray(array);
    }
    std::cout << std::endl;
    std::cout << "=======>\tSelection Sort result\t<=======" << std::endl;
    std::cout << std::endl;
}

int main() {
    int arrayLength = 8;
    int array[] = {6, 5, 2, 3, 7, 4, 8, 1};

    printArray(array);

    SelectionSort(array, arrayLength);

    printArray(array);
    std::cout << std::endl;

}