#include <iostream>
#include "Exo6.h"

int* RemoveDuplicates(int* array, int length) {
	int newLength = length;
	for (int i = 0; i < length; i++) {
		if (array[i] == array[i + 1]) newLength--;
	}

	for (int j = 0; j < length; j++) {
		if (array[j] == array[j + 1]) {
			if (j < length - 2) {
				array[j + 1] = array[j + 2];
			}
		}
	}

	int* storage = (int*)malloc(sizeof(int) * 6);

	if (storage == nullptr) return NULL;

	for (int k = 0; k < newLength; k++)	{
		*(storage + k) = *(array + k);
	}	

	return storage;
}

void Exercice6() {
	int array[] = { 1, 2, 2, 3, 4, 4 };

	int* newArray = RemoveDuplicates(array, sizeof(array) / sizeof(array[0]));

	for (int i = 0; i < 4; i++) {
		std::cout << newArray[i];
	}

	free(newArray);
}