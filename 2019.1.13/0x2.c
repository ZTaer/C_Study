#include <stdio.h>

int main(){
	
	char a='c';
	char *ch = &a;
	// 查看指针保存的地址
	printf("%p",ch); // %p 显示地址类型数据

	return 0;
}
