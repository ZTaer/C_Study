#include <stdio.h>
#define N 2
#define M (N+1)
#define NUM 2*M+1

int main(){
	
	int i;
	printf("%d,%d\n",NUM,M);
	for( i=1;i<=NUM;i++ ){
		printf("%d\n",i);
	}	
	return 0;
}
