#include <iostream>
#include <bits/stdc++.h> 

void printArray(int* array) {
    for (int i = 0; i < 8; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int BinarySearch(int* array, int start, int end, int element) {
    int mid = ((start + end) / 2); 
    if (element == array[mid])  {
        return mid;
    } else if(element > array[mid] && start != end) {
        return BinarySearch(array, mid  + 1, end, element);
    } else if(element < array[mid] && start != end) {
        return BinarySearch(array, start, mid - 1, element);
    } else {
        return -1;
    }
}

int main() {
    int arrayLength = 8;
    int array[] = {12, 1, 126, 78, 5, 4, 39, 94};

    printArray(array);

    std::cout << "sort array" << std::endl;
    std::sort(array, array+arrayLength); 

    printArray(array);
    std::cout << std::endl;
    std::cout << "=======>\tBinary Serach result\t<=======" << std::endl;
    std::cout << std::endl;
    std::cout << "index of element ( 5 ) : " << BinarySearch(array, 0, arrayLength - 1, 5) << std::endl;
    std::cout << "index of element ( 7 ) : " << BinarySearch(array, 0, arrayLength - 1, 7) << std::endl;

}