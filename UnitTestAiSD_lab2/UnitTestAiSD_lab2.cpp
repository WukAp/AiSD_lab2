#include "pch.h"
#include "CppUnitTest.h"
#include "../AiSD_lab2/Searches.h"
#include "../AiSD_lab2/Sorts.h"

const int SIZE1 = 0;
const int SIZE2 = 1;
const int SIZE3 = 5;
const int SIZE4 = 10;
const int SIZE5 = 13;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestAiSDlab2
{
	TEST_CLASS(UnitTestAiSDlab2)
	{
	public:
		TEST_METHOD(TestBogoSort) {
			int* array = new int[SIZE1];
			Sorts::bogoSort(array, SIZE1);
			delete[] array;

			array = new int[SIZE2] {2};
			Sorts::bogoSort(array, SIZE2);
			Assert::IsTrue(array[0] == 2);
			delete[] array;

			array = new int[SIZE3] {1, 3, 2, 0, 4};
			Sorts::bogoSort(array, SIZE3);
			Assert::IsTrue(array[0] == 0 && array[1] == 1 && array[2] == 2 && array[3] == 3 && array[4] == 4);
			delete[] array;

			array = new int[SIZE4] { 3, 1, 0, 4, 4, 2, 2, 0, 3, 3};
			Sorts::bogoSort(array, SIZE4);
			Assert::IsTrue(array[0] == 0 && array[1] == 0 && array[2] == 1 && array[3] == 2 && array[4] == 2 && array[5] == 3 && array[6] == 3 &&
				array[7] == 3 && array[8] == 4 && array[9] == 4);
			delete[] array;

			array = new int[SIZE5] { 4, 3, 1, 4, 0, 4, 4, 4, 2, 2, 0, 3, 3};
			Sorts::bogoSort(array, SIZE5);
			Assert::IsTrue(array[0] == 0 && array[1] == 0 && array[2] == 1 && array[3] == 2 && array[4] == 2 && array[5] == 3 && array[6] == 3 &&
				array[7] == 3 && array[8] == 4 && array[9] == 4 && array[10] == 4 && array[11] == 4 && array[12] == 4);
			delete[] array;
		}

		TEST_METHOD(TestBubbleSort) {
			int* array = new int[SIZE1];
			Sorts::bubbleSort(array, SIZE1);
			delete[] array;

			array = new int[SIZE2] {2};
			Sorts::bubbleSort(array, SIZE2);
			Assert::IsTrue(array[0] == 2);
			delete[] array;

			array = new int[SIZE3] {1, 3, 2, 0, 4};
			Sorts::bubbleSort(array, SIZE3);
			Assert::IsTrue(array[0] == 0 && array[1] == 1 && array[2] == 2 && array[3] == 3 && array[4] == 4);
			delete[] array;

			array = new int[SIZE4] { 3, 1, 0, 4, 4, 2, 2, 0, 3, 3};
			Sorts::bubbleSort(array, SIZE4);
			Assert::IsTrue(array[0] == 0 && array[1] == 0 && array[2] == 1 && array[3] == 2 && array[4] == 2 && array[5] == 3 && array[6] == 3 &&
				array[7] == 3 && array[8] == 4 && array[9] == 4);
			delete[] array;

			array = new int[SIZE5] { 4, 3, 1, 4, 0, 4, 4, 4, 2, 2, 0, 3, 3};
			Sorts::bubbleSort(array, SIZE5);
			Assert::IsTrue(array[0] == 0 && array[1] == 0 && array[2] == 1 && array[3] == 2 && array[4] == 2 && array[5] == 3 && array[6] == 3 &&
				array[7] == 3 && array[8] == 4 && array[9] == 4 && array[10] == 4 && array[11] == 4 && array[12] == 4);
			delete[] array;
		}

		TEST_METHOD(TestQuickSort) {
			int* array = new int[SIZE1];
			Sorts::quickSort(array, SIZE1);
			delete[] array;

			array = new int[SIZE2] {2};
			Sorts::quickSort(array, SIZE2);
			Assert::IsTrue(array[0] == 2);
			delete[] array;

			array = new int[SIZE3] {1, 3, 2, 0, 4};
			Sorts::quickSort(array, SIZE3);
			Assert::IsTrue(array[0] == 0 && array[1] == 1 && array[2] == 2 && array[3] == 3 && array[4] == 4);
			delete[] array;

			array = new int[SIZE4] { 3, 1, 0, 4, 4, 2, 2, 0, 3, 3};
			Sorts::quickSort(array, SIZE4);
			Assert::IsTrue(array[0] == 0 && array[1] == 0 && array[2] == 1 && array[3] == 2 && array[4] == 2 && array[5] == 3 && array[6] == 3 &&
				array[7] == 3 && array[8] == 4 && array[9] == 4);
			delete[] array;

			array = new int[SIZE5] { 4, 3, 1, 4, 0, 4, 4, 4, 2, 2, 0, 3, 3};
			Sorts::quickSort(array, SIZE5);
			Assert::IsTrue(array[0] == 0 && array[1] == 0 && array[2] == 1 && array[3] == 2 && array[4] == 2 && array[5] == 3 && array[6] == 3 &&
				array[7] == 3 && array[8] == 4 && array[9] == 4 && array[10] == 4 && array[11] == 4 && array[12] == 4);
			delete[] array;
		}

		TEST_METHOD(TestCountingSort) {			
			char* array = new char[SIZE1];
			Sorts::countingSort(array, SIZE1);
			delete[] array;

			array = new char[SIZE2] {'s'};
			Sorts::countingSort(array, SIZE2);
			Assert::IsTrue(array[0]=='s');
			delete[] array;

			array = new char[SIZE3] { '7', '3', 'c', 'a', 'z' };
			Sorts::countingSort(array, SIZE3);
			Assert::IsTrue(array[0] == '3' && array[1] == '7' && array[2] == 'a' && array[3] == 'c' && array[4] == 'z');
			delete[] array;	
		
			array = new char[SIZE4] {'9', '2', '5', '6', '8', '3', '1', '4', '7' , '3'};
			Sorts::countingSort(array, SIZE4);
			Assert::IsTrue(array[0] == '1' && array[1] == '2' && array[2] == '3' && array[3] == '3' && array[4] == '4' && array[5] == '5' && array[6] == '6' &&
				array[7] == '7' && array[8] == '8' && array[9] == '9');
			delete[] array;

			array = new char[SIZE5] { '7' , '3', 'c', 'a', '3', '1',  '5', '6', '4', '9', '2','8', 'b'};
			Sorts::countingSort(array, SIZE5);
			Assert::IsTrue(array[0] == '1' && array[1] == '2' && array[2] == '3' && array[3] == '3' && array[4] == '4' && array[5] == '5' && array[6] == '6' &&
				array[7] == '7' && array[8] == '8' && array[9] == '9' && array[10] == 'a' && array[11] == 'b' && array[12] == 'c');
			delete[] array;	
		}

		TEST_METHOD(TestBinarySearch) {
			int* array = new int[SIZE1];
			Searches::binarySearch(array, SIZE1, 1);
			delete[] array;

			array = new int[SIZE2] {2};
			Assert::IsTrue(Searches::binarySearch(array, SIZE2, 1) == -1);
			Assert::IsTrue(Searches::binarySearch(array, SIZE2, 2) == 0);
			delete[] array;

			array = new int[SIZE3] {0, 1, 2, 3, 4};
			Sorts::quickSort(array, SIZE3);
			Assert::IsTrue(Searches::binarySearch(array, SIZE3, 0) == 0);
			Assert::IsTrue(Searches::binarySearch(array, SIZE3, 1) == 1);
			Assert::IsTrue(Searches::binarySearch(array, SIZE3, 2) == 2);
			Assert::IsTrue(Searches::binarySearch(array, SIZE3, 3) == 3);
			Assert::IsTrue(Searches::binarySearch(array, SIZE3, 4) == 4);
			Assert::IsTrue(Searches::binarySearch(array, SIZE3, 5) == -1);
			delete[] array;

			array = new int[SIZE3] {0, 2, 2, 2, 3};
			Sorts::quickSort(array, SIZE3);
			Assert::IsTrue(Searches::binarySearch(array, SIZE3, 0) == 0);
			Assert::IsTrue(Searches::binarySearch(array, SIZE3, 2) == 1 || 
				Searches::binarySearch(array, SIZE3, 2) == 2 || Searches::binarySearch(array, SIZE3, 2) == 3);
			Assert::IsTrue(Searches::binarySearch(array, SIZE3, 3) == 4);
			delete[] array;

			array = new int[SIZE4] { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
			Sorts::quickSort(array, SIZE4);
			Assert::IsTrue(Searches::binarySearch(array, SIZE4, 0) == 0);
			Assert::IsTrue(Searches::binarySearch(array, SIZE4, 1) == 1);
			Assert::IsTrue(Searches::binarySearch(array, SIZE4, 2) == 2);
			Assert::IsTrue(Searches::binarySearch(array, SIZE4, 3) == 3);
			Assert::IsTrue(Searches::binarySearch(array, SIZE4, 4) == 4);
			Assert::IsTrue(Searches::binarySearch(array, SIZE4, 5) == 5);
			Assert::IsTrue(Searches::binarySearch(array, SIZE4, 6) == 6);
			Assert::IsTrue(Searches::binarySearch(array, SIZE4, 7) == 7);
			Assert::IsTrue(Searches::binarySearch(array, SIZE4, 8) == 8);
			Assert::IsTrue(Searches::binarySearch(array, SIZE4, 9) == 9);
			Assert::IsTrue(Searches::binarySearch(array, SIZE4, 10) == -1);
			delete[] array;

			array = new int[SIZE5] { 0, 1, 2, 3, 4, 4, 4, 4, 8, 9, 10, 10, 10};
			Sorts::quickSort(array, SIZE5);
			Assert::IsTrue(Searches::binarySearch(array, SIZE5, 0) == 0);
			Assert::IsTrue(Searches::binarySearch(array, SIZE5, 1) == 1);
			Assert::IsTrue(Searches::binarySearch(array, SIZE5, 2) == 2);
			Assert::IsTrue(Searches::binarySearch(array, SIZE5, 3) == 3);
			Assert::IsTrue(Searches::binarySearch(array, SIZE5, 4) == 4 || Searches::binarySearch(array, SIZE5, 4) == 5 ||
				Searches::binarySearch(array, SIZE5, 4) == 6 || Searches::binarySearch(array, SIZE5, 4) == 7);
			Assert::IsTrue(Searches::binarySearch(array, SIZE5, 5) == -1);
			Assert::IsTrue(Searches::binarySearch(array, SIZE5, 8) == 8);
			Assert::IsTrue(Searches::binarySearch(array, SIZE5, 9) == 9);
			Assert::IsTrue(Searches::binarySearch(array, SIZE5, 10) == 10 
				|| Searches::binarySearch(array, SIZE5, 10) == 11 || Searches::binarySearch(array, SIZE5, 10) == 12);
			delete[] array;
		}			
	};
}
