#include <stdio.h>
#define MAX 1024
int main(){
	
	char a[MAX];
	printf("input: ");
	// fgets(数组,数量,输入流) 只支持字符输入
	fgets(a,MAX,stdin); // stdin从键盘中获得输入流( 默认保存换行符 )
	printf("%s,%d",a,strlen(a));

	return 0;
}
