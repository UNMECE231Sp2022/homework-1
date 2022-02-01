#include <stdio.h>
#include <stdlib.h>

#include "matrix_lib.h"

int main() {
	Matrix x;
	mallocation(&x, 2, 3);

	int i, j;
	for (i=0; i<x.rows; i++) {
		for (j=0; j<x.cols; j++) {
			x.data[i][j] = (j + 1) / (float) (i + 1);
		}
	}

	print_matrix(&x);

	free_matrix(&x);
	return 0;
}
