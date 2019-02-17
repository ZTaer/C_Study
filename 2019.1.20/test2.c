#include <stdio.h>

int main(){
	
	int a[][3] = {10,-1,9,8,14,7,2,-5,6},i,j,s=0;
	for( i=0;i<3;i++ ){
		for( j=0;j<3;j++ ){
			if(i==j){
				s=s+a[i][j];
			}
		}
	}

	printf("%d",s);

	return 0;
}
