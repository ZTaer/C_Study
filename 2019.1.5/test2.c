#include <stdio.h>
int main(){
	
	int a = 8;
	while(1){
		goto A; // 跳越到标签A
	}
A:	printf("OK!");
	printf("HELLOW");
	return 0;

}
