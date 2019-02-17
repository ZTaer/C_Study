#include <stdio.h>

int main(){
	
	int a;
	int *p = &a; // 取出a的内存地址,赋值给指针

	scanf("%d",p); // 因为指针p本身保存的内存地址,所以不需要&地址符
	printf("%d",a);

	return 0;
}
