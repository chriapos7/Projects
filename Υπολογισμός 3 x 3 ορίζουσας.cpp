#include <stdio.h>
#define SIZE 3



int main() {
	
	
	float A[SIZE][SIZE], det;
	int i, j;
	
	for (i = 0; i < SIZE; i++) {
		for(j = 0; j < SIZE; j++) {
			printf("Give number for the element A[%d][%d] \n",i + 1,j + 1);
			scanf("%f", &A[i][j]);
		}
	}
	det =   A[0][0] * ( A[1][1] * A[2][2] - A[1][2]*A[2][1] )
		  - A[0][1] * ( A[1][0] * A[2][2] - A[1][2]*A[2][0] )
		  + A[0][2] * ( A[1][0] * A[2][1] - A[1][1]*A[2][0] );
	printf("The horizon = %2.f \n", det);
	return 0;
}
