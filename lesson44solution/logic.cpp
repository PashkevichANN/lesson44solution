#include "logic.h"

double calculate_avg(int marks[NUMBER_OF_MARK]) {
	double sum = 0.0;
	for (int i = 0; i < NUMBER_OF_MARK; i++) {
		sum += marks[i];
	}

	return sum / NUMBER_OF_MARK;
}