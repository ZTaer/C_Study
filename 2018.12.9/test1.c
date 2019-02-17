#include <stdio.h>

int main(){
	int a,b;
	b = 3;
	a = b;
	b = b * 2;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("%d -- %d",a,b);
	return 0;
}
