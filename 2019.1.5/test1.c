#include <stdio.h>

int main(){
	
	int a=5,b=1,c;
	a = ++b; // 先计算++b在给a进行赋值
	printf("a=%d --- b=%d\n",a,b);
	
	a=5;
	b=1;

	a = b++;　// 先赋值给a在进行b++计算
	printf("a=%d --- b=%d",a,b);
	
	c = ( b = 2 , (c = b + 4) + 5 ); 
	// 1. b = 2 逗号表达式优先执行,　左边语句
	// 2. c = b+4
	// 3. c + 5 得出结果
	// 4. 输出c+5　因为逗号表达式最终输出右边值
	return 0;	
}
