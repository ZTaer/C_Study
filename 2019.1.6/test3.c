#include <stdio.h>

int main(){
	int a,b,c;
	(b=3,4); //结果b=4
	//c = b++ + 5; //结果c=9
	printf("c:%d b:%d",c,b);
}
