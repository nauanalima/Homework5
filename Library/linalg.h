#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef linalg_h__
#define linalg_h__

extern void print(double **matrix, int row, int col);

extern double **read(char *archive, int *rows, int *columns);

extern void exchangelines (double *line1, double *line2, int row);

extern int uppertriangular (double **matrix, int row, int col);

extern double determinant (double **matrix, int dim);

extern double *reversesub (double **matrix, const int dim);

extern double **multiplication (double **matrix1, double **matrix2, int row1, int rowcol, int col2);

#endif //linalg_h__