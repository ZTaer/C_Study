#include <stdio.h>
int main(){
	
	//char *name = "FishC", test1[]={'F','i','s','h','C'};
	//printf("%s%s\n",*name,test1);
	
	unsigned char a,b,c;
	b=c=200;
	a = b + c;
	printf("%u - - b=%u - - c=%u",a,sizeof(b),sizeof(c));


	return 0;
}
