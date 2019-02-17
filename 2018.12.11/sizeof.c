#include <stdio.h>
int main(){
	int a;
	short int b,c=-5; // signed默认有符号
	unsigned short  d=-5; // unsigned无符号 
	printf("%d,%d\n", sizeof(a),sizeof(b));
	printf("%d,%d",c,d);
	return 0;
}
