#include <stdio.h>
#include <string.h>
int main(){
	
	int len = 3;
	char ch[len][len];
	char (*p)[len] = ch;
	int i,j;

	printf("input: ");
	scanf("%s",(*p));
	
	for(i=0;i<len;i++){
		for(j=0;j<len;j++){
			printf("%c ", *(*(ch + i)+j) );
		}
		putchar('\n');
	}

	return 0;
}
