#include <stdio.h>

int main(){

	int size=13,flag,cost=1,bill,test=0;	
	if (size > 12)
	{
		goto a;
	}
	goto b;
a:      cost = cost * 1.05;
        flag = 2;
	test++;
b:      bill = cost*flag;
	printf("cost=%d,flag=%d,bill=%d,test=%d",cost,flag,bill,test);

	return 0;
}
