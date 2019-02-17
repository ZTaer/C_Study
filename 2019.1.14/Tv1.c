#include <stdio.h>
#include <string.h>
#define Max 1024

char len( char ch[Max] ){
	char *p = ch;
	int i=0;

	while( p[i] != '\n' ){
		i++;
	}
	return i;

}

int main(){
	char ch[Max];
	int num=0;

	printf("input: ");
	fgets( ch,Max,stdin );

	printf("%d",len(ch));
	return 0;
}
