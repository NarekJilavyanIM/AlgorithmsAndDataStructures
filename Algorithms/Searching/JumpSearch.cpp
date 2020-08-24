#include <iostream>
#include <math.h>
#include <bits/stdc++.h> 

void printArray(int* array) {
    for (int i = 0; i < 8; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int JumpSearch(int* array, int length, int element) {
    int step = (int)floor(sqrt(length));    
    int prev = 0;
    do {
        prev += step;
    } while(array[prev] < element);
    if(array[prev] == element) {
        return prev;
    }

    int start = prev - step;
    while (array[prev] != element && prev > start) {
        --prev;
    }
    if(array[prev] == element) {
        return prev;
    }
    return -1;
}

int main() {
    int arrayLength = 8;
    int array[] = {12, 1, 126, 78, 5, 4, 39, 94};

    printArray(array);

    std::cout << "sort array" << std::endl;
    std::sort(array, array+arrayLength); 

    printArray(array);
    std::cout << std::endl;
    std::cout << "=======>\tJump Serach result\t<=======" << std::endl;
    std::cout << std::endl;
    std::cout << "index of element ( 5 ) : " << JumpSearch(array, arrayLength, 5) << std::endl;
    std::cout << "index of element ( 7 ) : " << JumpSearch(array, arrayLength, 7) << std::endl;
}