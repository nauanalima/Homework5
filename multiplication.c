#include <linalg.h>

double **multiplication (double **matrix1, double **matrix2, int row1, int rowcol, int col2) {

    double **matrix3, sum;
    int i, j, k;

    matrix3 = malloc(row1*sizeof(double*));
    for (i=0; i<row1; i++)
        matrix3[i] = (double*)malloc(col2*sizeof(double));

    for (k=0; k<col2; k++) {
        for (i=0; i<row1; i++) {
            sum = 0;
            for (j=0; j<col2; j++)
                sum += matrix1[i][j]*matrix2[j][k];
            matrix3[i][k] = sum;
        }
    }
    return matrix3;
}