#include <stdio.h>
#include <string.h>
int main(){
	char arr[2][4];
	strcpy( arr[0],"you" );
	strcpy( arr[1],"me");
	arr[0][3] = '&';
	printf("%s\n",arr[0]); // 其实arr变量名字内存地址就为arr[0]的内存地址 
	

	return 0;
}
