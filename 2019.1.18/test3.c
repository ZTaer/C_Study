#include <stdio.h>

int main(){

	char ch[100]="abc";
	char *p;
	p = ch;

	printf("%c",*(p+1));

	return 0;
}
