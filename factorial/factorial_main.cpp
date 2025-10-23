// factmain.cpp: определяет точку входа для приложения.
//
#include "factorial.h"

int main()
{
	int n;
	const int MAX_POSSIBLE_FACT = 20;
	std::cout << "Enter natural < n < " << MAX_POSSIBLE_FACT << ":\n";
	inputNatural(n, MAX_POSSIBLE_FACT);
	std::vector<uint64_t> factorials = factVector(n);

	for (int i = 0; i < n + 1; i++) {
		std::cout << "Factorial " << i << " " << factorials[i] << "\n";
	}
	return 0;

}
