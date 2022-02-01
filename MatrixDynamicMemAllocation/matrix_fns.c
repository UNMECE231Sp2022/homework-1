#include <stdio.h>

#include "matrix_lib.h"

void mallocation(Matrix *m, size_t row, size_t col) {
	int i;
	m->data = (float **)malloc(row * sizeof(float *));
	for (i=0; i<col; i++) {
		m->data[i] = (float *)malloc(col * sizeof(float));
	}
	m->rows = row;
	m->cols = col;
}

void free_matrix(Matrix *m) {
	int i;
	for (i=0; i<m->cols; i++) {
		free(m->data[i]);
	}
	free(m->data);
}

void print_matrix(Matrix *m) {
	int i, j;
	for (i=0; i<m->rows; i++) {
		for (j=0; j<m->cols; j++) {
			printf("%f ", m->data[i][j]);
		}
		printf("\n");
	}
}
