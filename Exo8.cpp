#include <iostream>
#include "Exo8.h"

int* CopyCopySortArray(int* array, int length) {

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

int* InsertInSortedArray(int* array, int length, int element) {
	int* storage = (int*)malloc(sizeof(int) * (length + 1));
	
	if (storage == nullptr) return NULL;
	
	for (int i = 0; i < length; i++) {
		storage[i] = array[i];
	}

	storage[length] = element;

	return CopyCopySortArray(storage, length+1);
}

void Exercice8() {
	int array[] = { 1, 2, 4, 5 };

	int* newArray = InsertInSortedArray(array, sizeof(array) / sizeof(array[0]), 3);

	for (int i = 0; i < 5; i++) {
		std::cout << newArray[i];
	}

	free(newArray);
}