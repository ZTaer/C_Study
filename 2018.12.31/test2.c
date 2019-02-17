#include <stdio.h>
#include <string.h>

float test(char *ch){
	ch = ch+'\0';
	printf("%s\n",ch);
	printf("%c",ch[strlen(ch)+1]);
	return 0;
}

int main(){
	
	char ch[]="a",b='\0';
	printf("input: ");
	scanf("%s",ch);
	test(ch);
	printf("---%c",b);
	return 0;
}
