#include <linalg.h>

int uppertriangular (double **matrix, int row, int col) {
	int i, j, k, k1, test, pivot;
	double m, temp;

	int steps = 0; 

	for (k=0; k<row; k++) {
		for (j=k; j<row; j++) {
			test = -1;
			if (fabs(matrix[j][k]) > matrix[k][k]) {
				test = j;
			}
			if (test!=-1) {
				exchangelines(matrix[k], matrix[test], row);
				steps++;
				printf("\nSteps: %d", steps);
			}
		}
		for (i=k+1; i<row; i++) {
			m = matrix[i][k]/matrix[k][k];
			for (j=k; j<=col; j++)
				matrix[i][j] = matrix[i][j] - m*matrix[k][j];
		}
		printf("\nEstágio da matriz:");
		print(matrix,row,col);
	}
	printf("\n\n ---------------- fim do pivoteamento ------------------\n\n");
	return steps;		
}