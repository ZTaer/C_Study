#include <stdio.h>

int main(){
	
	int num=233;
	int num2 = 222;
	const int *p = &num; // 可修改指向,但不能修改指向的值( 如果没有const默认是可以通过解引用修改指向常量值 )
	int * const s = &num; // 不可以改变指向,但是可以通过解引用改变指向的值( 与上方相反,此方法叫"指针常量" )
	const int * const p = &num; // 二者都不可修改

	printf("%d\n",*p);
	p = &num2;
	printf("%d\n",*p);

	printf("%d\n",*s);
	*s = 333;
	printf("%d",*s);
	s = &num2;


	return 0;
}
