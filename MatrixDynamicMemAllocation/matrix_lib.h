#ifndef MATRIX_LIB_H
#define MATRIX_LIB_H

#include <stdlib.h>

struct _matrix {
	float **data;
	size_t rows;
	size_t cols;
};

typedef struct _matrix Matrix;

void mallocation(Matrix *m, size_t row, size_t col);
void free_matrix(Matrix *m);
void print_matrix(Matrix *m);
#endif // MATRIX_LIB_H
