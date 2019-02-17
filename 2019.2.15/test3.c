#include <stdio.h>

int main(void){
	
	int num = 520;
	const int *p = &num;
	
	const int **q = &p;

	printf("%d\n",**q);
	

	return 0;
}
