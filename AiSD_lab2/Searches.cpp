#pragma once
#include <iostream>
class Searches{
public:
	static int binarySearch(int* array, size_t size, int key) {
		int begin = 0; //index at the beginning of the array
		int end = size - 1; //index at the end of the array
		while (begin < end) {
			int curr_index = begin + (end - begin) / 2; //the middle element
			if (array[curr_index] == key) return curr_index; //compare key with the middle element
			else if (array[curr_index] > key) end = curr_index - 1; //the key can only lie in the left half
			else if (array[curr_index] < key) begin = curr_index + 1; //the key can only lie in the right half
		}
		if (array[begin] == key) return begin;
		else return -1; //the key was not found
}
};
