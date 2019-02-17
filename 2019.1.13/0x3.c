#include <stdio.h>

int main(){
	int a,b;
	b = 110;
	a = &b;
	printf("%p\n",*a);
	return 0;
}
