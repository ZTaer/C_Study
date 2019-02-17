#include <stdio.h>

int main(){
	
	char a[10] = {1,2,3,4,5,6};
	char *p;
	p = a;

	printf("1[a] = %d, p[1] = %d, *(p+1) = %d, "[1]a,*p,p[1],*(p+1));

	return 0;
}
