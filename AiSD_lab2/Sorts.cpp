#include <iostream>

class Sorts{
private:
    static void swap(int& a, int& b) {
        int t = a;
        a = b;
        b = t;
    }
public:
    static void bogoSort(int* array, size_t size) {
        bool is_sorted = false;
        while (!is_sorted) {//while the array is not sorted
            for (int i = 0; i < size; i++) // picking the array up at random
                swap(array[i],  array[rand() % size]);
            is_sorted = true;
            for (int i = 0; i+1 < size && is_sorted; i++) //checking whether the array is sorted
                is_sorted = array[i] <= array[i + 1];
        }
    }

    static void bubbleSort(int* array, size_t size) {
        for (int i = 0; i < size; i++)
            for (int j = 0; j+1 < size - i; j++)
                if (array[j] > array[j + 1]) swap(array[j], array[j + 1]);
    }

    static  void quickSort(int* array, size_t size) {
        if (size > 0) {
            int begin = 0; //index at the beginning of the array
            int end = size - 1; //index at the end of the array
            int pivot_value = array[rand()%size]; //choose the pivot value
            do { //sorting an array relative to the pivot value
                while (array[begin] < pivot_value)
                    begin++;
                while (array[end] > pivot_value)
                    end--;
                if (begin <= end) {
                    swap(array[begin], array[end]);
                    begin++;
                    end--;
                }
            } while (begin <= end);

            if (begin < size) //sorting values that are greater than or equal to the pivot value
                quickSort(array + begin, size - begin);
            if (end > 0) //sorting values that areless than or equal to the pivot value
                quickSort(array, ++end);
        }
    }

    static void countingSort(char* array, size_t size) {
        const int NUMBER_OF_CHAR = 128;
        int* counting_array = new int [NUMBER_OF_CHAR] {}; //array of all char values from zeros
        for (int i = 0; i < size; i++) //counting values in the passed array
            counting_array[array[i]]++;
        for (int i = 0, j = 0; j< NUMBER_OF_CHAR; j++) // forming a sorted array
            for (int k = 0; k < counting_array[j]; k++)
                array[i++] = (char)j;

        delete[] counting_array;
    }
};