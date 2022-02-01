#include <stdio.h>

#include "math_vect.h"

int dot_product(Vector *a, Vector *b) {
	if (a->len != b->len) {
		printf("Lengths are not equal!\n");
		return -1;
	}
	int i, result=0;
	for (i=0; i<a->len; i++) {
		result += (a->data[i] * b->data[i]);
	}
	return result;
}

void scale_vector(Vector *v, int scale_value) {
	int i;
	for (i=0; i<v->len; i++) {
		v->data[i] *= scale_value;
	}
}

int vector_sum(Vector *v) {
	int i, sum=0;
	for (i=0; i<v->len; i++) {
		sum += v->data[i];
	}
	return sum;
}
