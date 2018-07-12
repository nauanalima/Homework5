#include <linalg.h>

void print(double **matrix, int row, int col){
	int i, j;
	printf("\nMatriz: \n");
	for(i=0;i<row;i++) {
		for(j=0;j<col;j++) { 
			printf("%5.2lf\t",matrix[i][j]);
		}	  
		printf("\n");
	}
	printf("\n");
}