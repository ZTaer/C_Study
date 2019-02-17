#include <stdio.h>
#include <string.h>
int main(){
	
	char a[]="hello ";
	char b[]="word";
	char c[]="233";
	char d[]="233";
	char e[]="233haha";

	strcat(a,b); // 把b拼接到a里
	printf("%s\n",a);
	
	strncat(a,c,1); // 指定拼接
	printf("%s\n",a);

	printf("%d\n",strcmp( c,d )); // 如果二个相同返回0
	printf("%d\n",strcmp( b,c )); // 如果不相等则返回非0值

	printf("%d",strncmp( d,e,3 )); // 指定比较 


	

	return 0;
}
