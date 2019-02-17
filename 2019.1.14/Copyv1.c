#include <stdio.h>
#define Max 1024
int main(){
	
	char str1[Max];
	char str2[Max];
	char *ch;
	int i=0;

	ch = str1;
	
	printf("input: ");
	fgets( str1,Max,stdin );
	while( ch[i] != '\n'){
		str2[i] = ch[i];
		i++;
	}
	str2[i+1] = '\0';
	printf("拷贝完毕(str2): %s",str2);

	return 0;
}
