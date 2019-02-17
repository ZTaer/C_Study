#include <stdio.h>

// 尼克彻斯定理
// 任何一个大于 2 的整数的立方都可以表示成一串连续奇数的和，这些奇数一定是要连续的
//
// 首项: first = num*num-num+1
// 第n项: An = first + n*2
// 多项和: Sn = n*first + n*(n-1)*2/2


int main(){

	int num,end;
	_Bool turn = 1;

	int an,sn=0;
	int i=0,g;

	int anlist[100];

	printf("input: ");
	scanf("%d",&num);
	end = num*num*num;

	while( turn ){
		an = (num*num-num+1) + i*2;
		sn += an;
		anlist[i++] = an;

		if( end == sn ){
			break;
		}
	}

	if(i<=3){
		printf("%d = %d + %d + %d",end,anlist[0],anlist[1],anlist[2]);
	}
	else if(i>3){
		printf("%d = %d + %d ... + %d",end,anlist[0],anlist[1],anlist[i-1]);
	}

	return 0;
}
