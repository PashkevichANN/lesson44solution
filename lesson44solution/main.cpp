#include "logic.h"
// use static one-dimention array
int main(){
	int marks[DEFAULT_SIZE];
	int size;
	do {
		system("cls");
		cout << "Input number of marks: ";
		cin >> size;
	} while (size <= 0 or size > DEFAULT_SIZE);



	cout << "Input ten students marks: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> marks[i];
	}
	double avr = calculate_avg(marks, size);
	cout << "Result: " << avr;

	//system("pause")
	return 0;
}