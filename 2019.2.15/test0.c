#include <stdio.h>

int main(){
	// 此句有语法错误
	int const num=520;
	int *p = &num;
	
	
	/*
	int num = 520;
	const int *p = &num;
	*/
	/*
	const int num = 520;
	const int *p = &num;
	*/
	/*	
	const int num = 520;
	const int * const p = &num;
	*/
	printf("%d",*p);

}
