
#include "factorial.h"

void inputNatural(int& integer, int max) {
	while (true) {
		std::cin >> integer;

		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "Invalid input. Enter an integer 0 < " << max << "\n";
			continue;
		}
		if (integer <= 0 || integer > max) {
			std::cout << "Invalid input. Enter an integer 0 < " << max << "\n";
			continue;
		}
		break;
	}
}

uint64_t fact(int x) {
	if (x == 0) {
		return 1;
	}
	return fact(x - 1) * x;
}

std::vector<uint64_t> factVector(int n) {
	std::vector<uint64_t> factorials(n + 1);
	for (int i = 0; i < factorials.size(); i++) {
		factorials[i] = fact(i);
	}
	return factorials;
}