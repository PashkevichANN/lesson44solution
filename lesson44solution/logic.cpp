#include "logic.h"

double calculate_avg(int* marks, int size) {
	double sum = 0.0;
	for (int i = 0; i < size; i++) {
		sum += marks[i];
	}

	return sum / size;
}