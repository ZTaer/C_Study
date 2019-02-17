#include <stdio.h>

int main(){

	
	int a,b,c;
	int *d,*e,*f,*g;

	printf("请输入三个数: ");
	scanf("%d%d%d",&a,&b,&c);

	d = &a;
	e = &b;
	f = &c;

	if(a > b){
		g = e;
		e = d;
		d = g;
	}
	if(a > c){
		g = f;
		f = d;
		d = g;
	}
	if(b > c){
		g = f;
		f = e;
		e = g;
	}


	printf("%d <= %d <= %d\n", *d,*e,*f);

	return 0;
}
