#include <stdio.h>

int main(){

	
	int a[4][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20}
	};

	int i,j,s=3;
	for (i=0; i<4; i++){
		for (j=0; j<5; j++){
			printf("%3d",a[i][j]);
			if( j==s ){
				putchar('\n');
				s--;
			}		
		}
	}

	return 0;
}
