#include <iostream>
#include "Exo1.h"

int* InverseArray(int* array, int length) {
	int* storage = (int*)malloc(sizeof(int) * length);

	if (storage == nullptr) return NULL;

	for (int i = 0; i < length; i++) {
		*(storage + i) = *(array + ((length-1) - i));
	}

	return storage;
}

void Exercice1() {
	// Base Array
	int array[] = { 1, 2, 3, 4 };

	// Reversed Array
	int* newArray = InverseArray(array, sizeof(array) / sizeof(array[0]));

	// Debug Numbers of Reversed Array
	for (int i = 0; i < 4; i++) {
		std::cout << newArray[i];
	}

	// Free memory to avoid leaks
	free(newArray);
}