#include <linalg.h>

double determinant (double **matrix, int dim) {
	int i;
	double det = 1;

	for (i=0; i<dim; i++)
		det *= matrix[i][i];

	if (uppertriangular(matrix,dim,dim) != 0)
		det = -1*det;

	return det;

}