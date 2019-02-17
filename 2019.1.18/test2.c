#include <stdio.h>
#include <string.h>
int main(){
	
	char a[100]="abc";
	char b[100];
	char *p;
	p = a;
	int i=0;
	
	while( (*p++) != '\0' ){
		i++;
	}
	printf("%d",i);

	return 0;
}
