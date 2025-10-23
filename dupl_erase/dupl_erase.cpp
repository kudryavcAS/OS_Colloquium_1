#include "dupl_erase.h"

std::vector<int> removeDuplicates(const std::vector<int>& input) {
	std::vector<int> result;
	std::unordered_set<int> seen;

	for (int num : input) {
		if (seen.find(num) == seen.end()) {
			seen.insert(num);
			result.push_back(num);
		}
	}
	return result;
}

void printArray(const std::vector<int>& array) {
	int size = array.size();

	for (int i = 0; i < size; i++) {
		std::cout << array[i] << "\t";
	}
	std::cout << "\n";
}
