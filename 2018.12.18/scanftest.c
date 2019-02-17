#include <stdio.h>

int main(){
	int a=666;
	char i[5]; // 定义字符串定义变量( 不能超过5个元素 )
	printf("input: ");
	scanf("%s%d",i,&a); // 字符串变量i,不需要加"&"
	printf("%s: %d",i,a);
	return 0;
}
