#include "logic.h"
int main() {

	int marks[SIZE];
	cout << "Input your ten mark: ";

	for (int index = 0; index < SIZE; index++) {
		cin >> marks[index];
	}

	print(marks);

	return 0;
}