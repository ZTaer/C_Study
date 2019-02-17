#include <stdio.h>

int main(){
	
	int a = 0x12345678;
	char *b = (char *)&a; // 将索引的地址转换为char类型,方便char类型指针进行指向

	if( *b == 0x78 ){

		printf("你的机器采用小端字节序.\n");
		printf("%p 在内存中以此存放为: %p %p %p %p\n",a,*b,*(b+1),*(b+2),*(b+3)); // 注意显示逻辑地址

	}
	else{
		printf("你的机器采用大端");
	}

	return 0;
}
