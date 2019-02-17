#include <stdio.h>

void fun(){
	static int a=0;
	a+=2;
	printf("%d",a);
}

int main(){
	
	int cc;
	for( cc=1; cc<3; cc++ ){
		fun();
	}
	printf("\n");

	return 0;
}
