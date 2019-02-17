#include <stdio.h>

int main(){
	
	int n=2,*p=&n,*q=p;
	q = NULL;
	printf("%p",q);

	return 0;
}
