#include <stdio.h>
#include <string.h>
int main(){
	
	int len = 3;
	char ch[len][len];
	char (*p)[len] = ch;
	int i,j,g=1;

	printf("input: ");
	scanf("%s",(*p));

	while( g*g < strlen( (*p) ) ){
		g++;
	}
	len = g;
	
	for(i=0;i<len;i++){
		for(j=0;j<len;j++){
			printf("%c ", *(*(ch + i)+j) ); // ch[i][j]也是可以的
		}
		putchar('\n');
	}

	return 0;
}
