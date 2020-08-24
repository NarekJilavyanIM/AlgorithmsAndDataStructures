#include <iostream>

void printArray(int* array) {
    for (int i = 0; i < 8; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int sorting(int *array,int l,int h)
{
	int  pivot=array[l];
	int i=l;
	int j=h;
	int tex;
	while(i<j)
	{
		do {
			i++;
		} while(array[i]<=pivot);
		do {
			j--;
		} while(array[j]>pivot);
		if(i<j) {
			tex=array[i];
			array[i]=array[j];
			array[j]=tex;
		}
	}
	tex=array[l];
	array[l]=array[j];
	array[j]=tex;

	return j;

}
void QuickSort(int* array,int l,int h)
{	
	int mid=0;
	if ( l < h ) {
		mid=sorting(array,l,h);
		QuickSort(array,l,mid);
		QuickSort(array,mid+1,h);
	}
}

int main() {
    int arrayLength = 8;
    int array[] = {6, 5, 2, 3, 7, 4, 8, 1};

    printArray(array);
	
    QuickSort(array, 0, arrayLength);
    
    std::cout << std::endl;
    std::cout << "=======>\tQuick Sort result\t<=======" << std::endl;
    std::cout << std::endl;

    printArray(array);
    std::cout << std::endl;

}