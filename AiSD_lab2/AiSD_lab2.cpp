#include <iostream>
#include "Searches.h"
#include "Sorts.h"

void generateArray(int* array, size_t size) {
	for (int i = 0; i < size; i++)
		array[i] = rand()%100;
}
void generateArray(char* array, size_t size) {
	for (int i = 0; i < size; i++)
		array[i] = char(rand()%128);
}

template <typename T>
void printArray(T* array, size_t size) {
	for (int i = 0; i < size; i++)
		std::cout << array[i]<<" ";
	std::cout << std::endl;
}

int main(){
	const int SIZE = 10;

	int* array = new int[0];
	Sorts::bogoSort(array, 0);
	printArray(array,0);
	delete[] array;

	//Counting Sort
	char* char_array = new char[SIZE];
	generateArray(char_array, SIZE);
	std::cout << "Counting Sort" << std::endl;
	std::cout << "input array: ";
	printArray(char_array, SIZE);
	Sorts::countingSort(char_array, SIZE);
	std::cout << "output array: ";
	printArray(char_array, SIZE);
	delete[] char_array;
	std::cout << std::endl;

	int* int_array = new int[SIZE];

	//Quick Sort
	generateArray(int_array, SIZE);
	std::cout << "Quick Sort" << std::endl;
	std::cout << "input array: ";
	printArray(int_array, SIZE);
	Sorts::quickSort(int_array, SIZE);
	std::cout << "output array: ";
	printArray(int_array, SIZE);
	std::cout << std::endl;

	//Bubble Sort
	generateArray(int_array, SIZE);
	std::cout << "Bubble Sort" << std::endl;
	std::cout << "input array: ";
	printArray(int_array, SIZE);
	Sorts::bubbleSort(int_array, SIZE);
	std::cout << "output array: ";
	printArray(int_array, SIZE);
	std::cout << std::endl;

	//Bogo Sort
	generateArray(int_array, SIZE);
	std::cout << "Bogo Sort" << std::endl;
	std::cout << "input array: ";
	printArray(int_array, SIZE);
	Sorts::bogoSort(int_array, SIZE);
	std::cout << "output array: ";
	printArray(int_array, SIZE);
	std::cout << std::endl;

	//Binary Search
	std::cout << "Binary Search" << std::endl;
	std::cout << "input array: ";
	printArray(int_array, SIZE);
	int rand_value = int_array[rand() % SIZE];
	std::cout << "input value: " << rand_value << "\n";
	std::cout << "output: " << Searches::binarySearch(int_array, SIZE, rand_value)<<std::endl;;
	std::cout << std::endl;

	delete[] int_array;


	//comparison the running time of Quick Sort and Bubble Sort
	std::cout << "Checking the running time of Quick Sort and Bubble Sort" << std::endl;
	//Quick Sort
	std::cout << "Quick Sort" << std::endl;;
	for (int size = 10; size <= 100000; size*=10) {
		int* quick_array = new int[size];
		generateArray(quick_array, size);
		double timer = 0;
		for (int i = 0; i < 10; i++) {
			clock_t begin = clock();
			Sorts::quickSort(quick_array, size);
			clock_t end = clock();
			timer += end - begin;
		}
		std::cout << size << " elements: " << timer / 10 / CLOCKS_PER_SEC << " seconds"<< std::endl ;
		delete[] quick_array;
	}
	//Bubble Sort
	std::cout << "Bubble Sort" << std::endl;
	for (int size = 10; size <= 100000; size*=10) {
		int* bubble_array = new int[size];
		generateArray(bubble_array, size);
		double timer = 0;
		for (int i = 0; i < 10; i++) {
			clock_t begin = clock();
			Sorts::bubbleSort(bubble_array, size);
			clock_t end = clock();
			timer += end - begin;
		}
		std::cout  << size << " elements: " << timer / 10 / CLOCKS_PER_SEC << " seconds"<< std::endl;
		delete[] bubble_array;
	}

	return 0;
}