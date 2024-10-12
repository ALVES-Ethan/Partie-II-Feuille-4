#include <iostream>
#include "Exo7.h"

int* CopySortArray(int* array, int length) {

	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j += 1) {
			if (j < length - 1) {
				if (array[j] > array[j + 1]) {
					int current = array[j];
					array[j] = array[j + 1];
					array[j + 1] = current;
				}
			}
		}
	}

	return array;
}

int* MergeSortedArrays(int* array1, int length1, int* array2, int length2) {
	int* storage = (int*)malloc(sizeof(int) * (length1 + length2));

	if (storage == nullptr) return NULL;

	for (int i = 0; i < (length1 + length2); i++) {
		if (i >= length1) {
			storage[i] = array2[i-length1];
		}
		else {
			storage[i] = array1[i];
		}
	}

	return CopySortArray(storage, length1+length2);
}

void Exercice7() {
	int array1[] = { 1, 3, 5 };
	int array2[] = { 2, 4, 6 };

	int* newArray = MergeSortedArrays(array1, sizeof(array1) / sizeof(array1[0]), array2, sizeof(array2) / sizeof(array2[0]));

	for (int i = 0; i < 6; i++) {
		std::cout << newArray[i];
	}

	free(newArray);
}