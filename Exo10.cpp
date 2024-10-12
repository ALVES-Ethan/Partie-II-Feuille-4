#include <iostream>
#include "Exo10.h"

int* ShuffleArray(int* array, int length) {
	srand(time(0));

	for (int i = 0; i < length; i++)
	{
		int choice = rand() / 10000;
		if (i < length - 1) {
			if (choice>0) {
				int save = array[i];
				array[i] = array[i + 1];
				array[i + 1] = save;
			}
		}
	}

	return array;
}

void Exercice10() {
	int array[] = { 1, 2, 3, 4, 5 };

	int* newArray = ShuffleArray(array, sizeof(array) / sizeof(array[0]));

	for (size_t i = 0; i < 5; i++) {
		std::cout << newArray[i];
	}
}