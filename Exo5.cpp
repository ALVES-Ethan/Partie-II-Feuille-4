#include <iostream>
#include "Exo5.h"

int* MoveZerosToEnd(int* array, int length) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (j < length - 1) {
				if (array[j] == 0) {
					array[j] = array[j + 1];
					array[j + 1] = 0;
				}
			}
		}
	}

	return array;
}

void Exercice5() {
	int array[] = { 0, 1, 0, 3, 12 };

	int* newArray = MoveZerosToEnd(array, sizeof(array) / sizeof(array[0]));

	for (int i = 0; i < 5; i++) {
		std::cout << newArray[i];
	}
}