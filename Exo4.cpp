#include <iostream>
#include "Exo4.h"

int* SortArray(int* array, int length) {

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

void Exercice4() {
	int array[] = { 4, 2, 3, 1 };

	int* newArray = SortArray(array, sizeof(array) / sizeof(array[0]));

	for (int i = 0; i < 4; i++) {
		std::cout << newArray[i];
	}
}