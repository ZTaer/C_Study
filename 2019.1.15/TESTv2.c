#include <stdio.h>

int main(){
/*	
	int n=10,m;
	int a[] = {1,2,3,4,5,6,7,8,9,0};
	int i,g,p;
*/
	int *m,n=2;
	*m = 3;
	*m = n;
	printf("%p",*m);
/*	
	scanf("%d",&m);

	for( i=0; i<m; i++ ){
		p = a[0];
		for( g=0; g<(n-1-i); g++ ){
			a[g] = a[g+1];
		}
		a[n-1-i] = p;
	}

	for(i=0;i<10;i++){
		printf("%d,",a[i]);
	}
*/
	return 0;
}
