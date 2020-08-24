#include <iostream>

void printArray(int* array) {
    for (int i = 0; i < 8; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

#include <iostream>

int* merge (int* first_array, int* second_array, int f, int s) {
        int general_size = f + s;
        int* combined = new int[general_size];
        int k = 0,j = 0;
        for (int i = 0; i < general_size; ++i) {
                if (k >= f){
                        combined[i] = second_array[j];
                        j++;
                        continue;
                }
                if (j >= s){

                        combined[i] = first_array[k];
                        k++;
                        continue;
                }
                else{

                        if (first_array[k] > second_array[j]) {
                                combined[i] = second_array[j];
                                j++;
                        } else {
                                combined[i] = first_array[k];
                                k++;
                        }
                }
        }
        return combined;
}

int* split (int* array, int size) {
        int i = size / 2;
        int j = size - i;
        int* u = new int[i];
        int* uu = new int[j];
        for (int bn = 0; bn < i; ++bn) {
            u[bn] = array[bn];
        }

        for (int bn = i; bn < size; ++bn) {
            uu[bn - i] = array[bn];
        }

        if (size > 1) {
                u = split(u, i);
                uu = split(uu, j);

        }
        array = merge(u, uu, i, j);

        delete [] u;
        delete [] uu;
        return array;
}

int main() {
    int arrayLength = 8;
    int array[] = {6, 5, 2, 3, 7, 4, 8, 1};

    printArray(array);
	
    int* sortedArray = new int [arrayLength];
	sortedArray = split(array, arrayLength);    
    
    std::cout << std::endl;
    std::cout << "=======>\tMerge Sort result\t<=======" << std::endl;
    std::cout << std::endl;

    printArray(sortedArray);
    std::cout << std::endl;

}