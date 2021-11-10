#include <iostream>
#include "Searches.h"
#include "Sorts.h"

int main(){

    int* a = new int[] {   100, 90, 90, 90, 89, 70, 30, 8,0 ,-200 };
    //char* a = new char[] {'0','2','7','3','8', '5','6','8','9','7'};
    //std::cout << 
    int size = 10;
  // Sorts::bogoSort(a, size);
  //Sorts::bubbleSort(a, size);


    //int* b = new int[0];
  Sorts::quickSort(a, size);
  //Sorts::countingSort(a, size);


   for (int i = 0; i < size; i++)
       std::cout << a[i] << " ";


   delete[]a;
   return 0;
}