#include <linalg.h>

double **read(char *archive, int *rows, int *columns) {
	int i, j, R, C;
	double **matrix;
	FILE *arch;

	arch = fopen(archive, "r");

    if(!arch) {
        printf("\nERRO! Arquivo não encontrado!\n\n");
        exit(1);
    }

	fscanf(arch,"%d",&R);
    fscanf(arch,"%d",&C);

	matrix = malloc(R*sizeof(double *));
	for (i=0; i<R; i++)
		matrix[i] = (double *)malloc(C*sizeof(double));

	for(i=0; i<R; i++)	{
		for (j=0; j<C; j++)
			fscanf(arch,"%lf",&matrix[i][j]);
	}
	*rows = R;
    *columns = C;
	return matrix;

}