#include <stdio.h>

// A[m][p] , B[p][n] , C[m][n];
// 条件: 当A的m == B的n
// A[0][0]*B[0][0] + A[1][0]*B[0][1] ....

int main(){
	int i,g,j;
	int result = 0;
	int a[2][3] = { {1,2,3},{4,5,6} };
	int b[3][2] = { {1,4},{2,5},{3,6} };
	int c[2][2];

	for(j=0;j<2;j++){
		for(g=0;g<2;g++){
			result = 0;
			for(i=0;i<3;i++){
				result +=  a[j][i] * b[i][g];
			}
			c[j][g] = result;
		}
	}
	
	j=0;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",c[i][j]);
		}
		putchar('\n');
			
	}
	
	
	printf("| %d %d %d |	| %d %d |          | %d %d| \n",a[0][0],a[0][1],a[0][2],b[0][0],b[0][1],c[0][0],c[0][1]);
	printf("| %d %d %d |  *	| %d %d |    =	 | %d %d| \n",a[1][0],a[1][1],a[1][2],b[1][0],b[1][1],c[1][0],c[1][1]);
	printf("		| %d %d |",b[2][0],b[2][1]);

	return 0;
}
