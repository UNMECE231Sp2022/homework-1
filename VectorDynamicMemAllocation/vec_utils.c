#include <stdio.h>

#include "vect.h"

void mallocate(Vector *v, size_t len) {
	v->data = (int *)malloc(len * sizeof(int));
	v->len = len;
}

void free_vector(Vector *v) {
	free(v->data);
}

void print_vector(Vector *v) {
	int i;
	for (i=0; i<v->len; i++) {
		printf("%d ", v->data[i]);
	}
	printf("\n");
}
