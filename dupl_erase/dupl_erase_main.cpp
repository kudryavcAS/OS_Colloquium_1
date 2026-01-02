#include "dupl_erase.h"
#include <iostream>
#include <vector>

int main() {
	int n;

	std::cout << "Enter the size of array: ";
	if (!(std::cin >> n)) return 1;

	std::vector<int> array(n);
	std::cout << "Enter the array:\n";
	for (int i = 0; i < n; i++) {
		std::cin >> array[i];
	}

	std::vector<int> arrayWithoutDuplicates = removeDuplicates(array);
	std::cout << "Array without duplicates:\n";
	printArray(arrayWithoutDuplicates);

	return 0;
}