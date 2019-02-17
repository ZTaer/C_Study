#include <stdio.h>

int main(){
	
	int array[5] = {1,2,3,4,5};
	int *pi = &array[2];

	void *pv;

	pv = pi;
	printf("%p - %p - %d\n",pv,pi,*pi);

	pv+=4; // void 进行的是内存地址运算
	printf("%p - %p\n",pv,pi);

	pi = pv;

	printf("%d\n",*pi);

	return 0;
}
