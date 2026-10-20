#include "logic.h"
int main(){
	int mark1, mark2, mark3;

	cout << "Input student's marks: ";
	cin >> mark1 >> mark2 >> mark3;

	double avg = calculate_avg(mark1, mark2, mark3);
	cout << avg;

	return 0;
}