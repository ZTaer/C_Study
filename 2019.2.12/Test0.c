#include <stdio.h>
#include <string.h>

int main(){
	
	char a[10],b[10];
	int i,j;
	printf("input1: ");
	gets(a);
	printf("input2: ");
	gets(b);
	for(i=0,j=strlen(b); a[i]!='\0'; i++,j++){
		b[j] = a[i];
		printf("- j=%d - b[%d]=%c - a[%d]=%c \n",j,j,b[j],i,a[i]);
	}
	printf("- - -%d\n",i);

	return 0;
}
