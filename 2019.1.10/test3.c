#include <stdio.h>
#include <string.h>
int main(){
	
	char a[]="hello ";
	char b[]="word";

	strcpy(a,b);
	a[strlen(a)]='\0';
	printf("%s",a);

	return 0;
}
