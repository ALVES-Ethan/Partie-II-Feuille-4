#include <iostream>
#include "Exo9.h"


int FindClosestElement(int* array, int length, int reference) {
	unsigned int comparatorReference = 4294967295;
	int bestMatch = NULL;
	for (int i = 0; i < length; i++) {
		unsigned int comparator = std::abs(reference - array[i]);
		if (comparator < comparatorReference) {
			comparatorReference = comparator;
			bestMatch = array[i];
		}
	}
	return bestMatch;
}

void Exercice9() {
	int array[] = { 1, 5, 9, 15 };

	int closest = FindClosestElement(array, sizeof(array) / sizeof(array[0]), 8);

	std::cout << closest;
}