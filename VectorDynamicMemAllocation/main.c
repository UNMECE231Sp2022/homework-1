#include <stdio.h>
#include <stdlib.h>

#include "vect.h"
#include "math_vect.h"


int main() {
	Vector x;
	Vector y;
	mallocate(&x, 10);
	mallocate(&y, 10);

	int i;
	for (i=0; i<x.len; i++) {
		x.data[i] = (i+1) * (i+1);
		y.data[i] = i+1;
	}

	printf("Vector x:\n");
	print_vector(&x);

	printf("Vector y:\n");
	print_vector(&y);

	int y_sum = vector_sum(&y);
	printf("Sum of vector y: %d\n", y_sum);

	int dot_result = dot_product(&x, &y);
	printf("Dot product between x and y: %d\n", dot_result);

	printf("Scaling x by 2\n");
	scale_vector(&x, 2);
	print_vector(&x);

	free_vector(&x);
	free_vector(&y);
	return 0;
}
