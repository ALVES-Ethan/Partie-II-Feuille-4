#include <iostream>
#include "Exo2.h"

int FindMaxIndex(int* array, int length) {
	int highest = 0;
	int index = 0;
	for (int i = 0; i < length; i++) {
		if (array[i] > highest) { highest = array[i]; index = i; }
	}

	return index;
}

void Exercice2() {
	int array[] = { 3, 5, 2, 8, 4 };

	std::cout << FindMaxIndex(array, sizeof(array) / sizeof(array[0]));
}