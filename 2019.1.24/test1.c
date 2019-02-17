#include <stdio.h>

int main(){
	
	int num = 1025;
	int *pn = &num;
	
	char *ps = "abcd";
	void *pv;
	
	pv = pn;
	printf("%p - %p\n",pv,pn);

	pv = ps;
	printf("%p - %p",pv,ps);	

	return 0;
}
