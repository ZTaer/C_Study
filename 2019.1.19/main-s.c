#include <stdio.h>
//传递参数
//C 语言规定 main 函数的参数只能有两个，习惯上把这两个参数写为 argc 和 argv
//argc必须为整数类型变量,argv必须为指向字符的指针( 不是指针数组 )
int main( int argc,char *argv[] ){ // main()函数只能接收
	int i;
	for(i=0;i<argc;i++){
		printf("%s\n",argv[i]);
	}
	return 0;
}
