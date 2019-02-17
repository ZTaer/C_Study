#include <stdio.h>

int main(){
	
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	int i,g,m=3,n=10;
	int *p;
	int num;
	p = a;
	
	for( g=0; g<m; g++ ){	
		num = p[0];
		for(i=0;i<(n-1-g);i++){
			p[i] = p[i+1];
		}
		p[n-1-g] = num;
	}

	for(i=0;i<10;i++){
		printf("%d,",p[i]);
	}

	return 0;
}
