#include <linalg.h>

void exchangelines (double *line1, double *line2, int row) {
	double temp;
	int i;

	for (i=0; i<=row; i++) {
		temp = line1[i];
		line1[i] = line2[i];
		line2[i] = temp;
	}
}