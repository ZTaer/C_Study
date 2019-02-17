#include <stdio.h>

// 返回数组
int *test(){ // 注意创建指针形式
	static int a[2]={2,5}; //定义为全局变量
	return a; 
}

int main(){
	
	int *p;
	p = test(); // 使用指针接收函数传来的数组

	printf("%d",p[0]); 	

	return 0;
}
