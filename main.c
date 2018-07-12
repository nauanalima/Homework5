#include <stdio.h>
#include <stdlib.h>
#include <linalg.h>

int main(int argc, char **argv)
{
    double **m1, **m2;
    double *raiz;
    int r1, c1, r2, c2;
    
    m1 = read(argv[1],&r1,&c1);
    print(m1,r1,c1);

}