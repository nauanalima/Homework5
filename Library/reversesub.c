#include <linalg.h>

double *reversesub (double **matrix, const int dim) {
	int j, k, n;
	double sum, *roots = (double*)malloc(dim*sizeof(double));
	roots[dim-1] = matrix[dim-1][dim]/matrix[dim-1][dim-1];
	k = dim-2;
	while (k>=0) {
		sum = matrix[k][dim];
		for (j=k+1; j<dim; j++) 
			sum = sum - matrix[k][j]*roots[j];
		roots[k] = sum/matrix[k][k];
		k--;
	}
	return roots;
}