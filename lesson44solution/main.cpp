#include "logic.h"
int main(){
	int marks[NUMBER_OF_MARK];

	cout << "Input ten students marks: " << endl;

	for (int i = 0; i < NUMBER_OF_MARK; i++) {
		cin >> marks[i];
	}
	double avr = calculate_avg(marks);
	cout << "Result: " << avr;

	//system("pause")
	return 0;
}