#include "dupl_erase.h"

int main() {
	int n;

	std::cout << "Enter the size of array:\n";
	inputNatural(n);

	//доделать ввод
	std::vector<int> array(n);
	std::cout << "Enter the array:\n";
	for (int i = 0; i < n; i++) {
		std::cin >> array[i];
	}

	std::vector<int> arrayWithoutDuplicates = removeDuplicates(array);
	std::cout << "Array without duplicates:\n";
	printArray(arrayWithoutDuplicates);
}