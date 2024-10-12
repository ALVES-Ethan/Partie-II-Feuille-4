#include <iostream>
#include "Exo3.h"

int* RotateArrayRight(int* array, int length) {
	int* storage = (int*)malloc(sizeof(int) * length);

	if (storage == nullptr) return NULL;

	for (int i = 0; i < length; i++) {
		if (i == 0) { *(storage + i) = array[length - 1]; }
		else { *(storage + i) = array[i - 1]; }
	}

	return storage;
}

void Exercice3() {
	int array[] = { 1, 2, 3, 4, 5 };

	int* newArray = RotateArrayRight(array, sizeof(array) / sizeof(array[0]));

	for (int i = 0; i < 5; i++) {
		std::cout << newArray[i];
	}

	free(newArray);
}