#ifndef CUSTOM_VECTOR_H
#define CUSTOM_VECTOR_H

#include <stdlib.h>

struct _vect {
	int *data;
	size_t len;
};

typedef struct _vect Vector;

void mallocate(Vector *v, size_t len);
void free_vector(Vector *v);
void print_vector(Vector *v);

#endif // CUSTOM_VECTOR_H
