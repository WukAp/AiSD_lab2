#pragma once
class Searches{
public:
	static int binarySearch(int* array, size_t size, int key) {
		int start = 0; //index at the beginning of the array
		int end = size - 1; //index at the end of the array
		while (start < end) {
			int currIndex = start + (end - start) / 2; //the middle element
			if (array[currIndex] == key) return currIndex; //compare key with the middle element
			else if (array[currIndex] > key) end = currIndex - 1; //the key can only lie in the left half
			else if (array[currIndex] < key) start = currIndex + 1; //the key can only lie in the right half
		}
		if (array[start] == key) return start;
		else return -1; //the key was not found
}
};
