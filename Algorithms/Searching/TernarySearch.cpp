#include <iostream>
#include <bits/stdc++.h> 

void printArray(int* array) {
    for (int i = 0; i < 8; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int TernarySearch(int* array,int low,int high, int element)
{
    if(low <= high)
    {
        int mid1 = low + (high-low)/3;
        int mid2 = high - (high-low)/3;
        if(array[mid1] == element)
            return mid1;
        if(array[mid2] == element)
            return mid2;
        if(element<array[mid1])
            return TernarySearch(array, low,mid1-1,element);
        else if(element>array[mid2])
            return TernarySearch(array, mid2+1,high,element);
        else
            return TernarySearch(array, mid1+1,mid2-1,element);

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
    std::cout << "=======>\tTernary Serach result\t<=======" << std::endl;
    std::cout << std::endl;
    std::cout << "index of element ( 5 ) : " << TernarySearch(array, 0, arrayLength, 5) << std::endl;
    std::cout << "index of element ( 7 ) : " << TernarySearch(array, 0, arrayLength, 7) << std::endl;
}