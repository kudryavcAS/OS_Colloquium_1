// OS_Colloquium_1.cpp: определяет точку входа для приложения.
//

#include "factorial.h"

using namespace std;

void inputNatural(int& integer, int max = INT_MAX) {
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

unsigned long long fact(int x) {
	if (x == 0) {
		return 1;
	}
	return fact(x - 1) * x;
}

std::vector<unsigned long long>& factVector(std::vector<unsigned long long>& factorials) {
	for (int i = 0; i < factorials.size(); i++) {
		factorials[i] = fact(i);
	}
	return factorials;
}
int main()
{
	int n;
	const int MAX_POSSIBLE_FACT = 20;
	cout << "Enter natural < n < " << MAX_POSSIBLE_FACT << ":\n";
	inputNatural(n, MAX_POSSIBLE_FACT);
	std::vector<unsigned long long> factorials(n + 1);
	factVector(factorials);

	for (int i = 0; i < n + 1; i++) {
		cout << "Factorial " << i << " " << factorials[i] << "\n";
	}
	return 0;



}
