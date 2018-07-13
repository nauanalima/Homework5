#include <linalg.h>
#include <string.h>

double jacobi(double **matrix, int row, int col, int prec) {

	int i,j;
	double *x0, *x, *b, error, sum;

    x0 = malloc(row*sizeof(double));
    x = malloc(row*sizeof(double));
    b = malloc(row*sizeof(double));

	for (i=0; i<row; i++) {
		x[i] = 0;
        b[i] = matrix[i][col];
	}

	do {
		error = 0;
		memcpy(x0,x,4*sizeof(double));
		for (i=0; i<row; i++) {
            sum = 0;
            for (j=0; j<col; j++) {
                if (j!=i)
                    sum = sum+matrix[i][j]*x0[j];
            }
            x[i]=(1/matrix[i][i])*(b[i]-sum);
            error=error+(fabs(x0[i]-x[i])/fabs(x[i]));
        }
	} while(error>prec);
    return *x;
}