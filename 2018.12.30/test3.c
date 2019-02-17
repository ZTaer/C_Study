#include <stdio.h>
int main(){
	char ch;
	while( (ch = getchar()) != '\n'){ // getchar()无限循环单个字符处理
		printf("%c",ch);	
	}
	return 0;
}
