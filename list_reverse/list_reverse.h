#pragma once
#include <iostream>

template<typename T>
class LinkedList {
private:
	struct Node {
		T data;
		Node* next;
		Node(const T& val) : data(val), next(nullptr) {}
	};

	Node* head;

public:

	LinkedList() : head(nullptr) {}

	~LinkedList() {
		clear();
	}

	void pushBack(const T& value) {
		Node* newNode = new Node(value);

		if (!head) {
			head = newNode;
		}
		else {
			Node* current = head;
			while (current->next) {
				current = current->next;
			}
			current->next = newNode;
		}
	}

	void reverseRecursive() {
		head = reverseRecursiveHelper(head);
	}

	friend std::ostream& operator<<(std::ostream& out, const LinkedList& list) {
		Node* current = list.head;

		while (current) {
			out << current->data;
			if (current->next) {
				out << " -> ";
			}
			current = current->next;
		}
		out << " -> NULL\n";

		return out;
	}

	void clear() {
		while (head) {
			Node* temp = head;
			head = head->next;
			delete temp;
		}
	}

private:
	Node* reverseRecursiveHelper(Node* current) {
		if (!current || !current->next) {
			return current;
		}

		Node* newHead = reverseRecursiveHelper(current->next);
		current->next->next = current;
		current->next = nullptr;

		return newHead;
	}
};