#include "list_reverse.h"

int main() {
	int value;
	std::cout << "Enter the elements of list:\n";

	//добавить обработку ввода
	LinkedList<int> list;
	while (std::cin >> value) {
		list.pushBack(value);
	}

	std::cout << "List before reverse:\n" << list;
	list.reverseRecursive();
	std::cout << "List after reverse:\n" << list;

}