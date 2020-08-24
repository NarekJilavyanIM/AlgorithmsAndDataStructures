#include <iostream>
#include <bits/stdc++.h> 

void printArray(int* array) {
    for (int i = 0; i < 8; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int InterpolationSearch(int* array, int length, int element) {
    int mid;
    int low = 0;
    int high = length - 1;

    while (array[low] < element && array[high] > element) {
        if (array[high] == array[low]) {
            break;
        }
        mid = low + ((element - array[low]) * (high - low)) / (array[high] - array[low]);

        if (array[mid] < element)
            low = mid + 1;
        else if (array[mid] > element)
            high = mid - 1;
        else
            return mid;
    }

    if (array[low] == element)
        return low;
    if (array[high] == element)
        return high;

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
    std::cout << "=======>\tInterpolation Serach result\t<=======" << std::endl;
    std::cout << std::endl;
    std::cout << "index of element ( 5 ) : " << InterpolationSearch(array, arrayLength, 5) << std::endl;
    std::cout << "index of element ( 7 ) : " << InterpolationSearch(array, arrayLength, 7) << std::endl;
}