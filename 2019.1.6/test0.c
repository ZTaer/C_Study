#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int b=8848,i;	
	char a[]="123";
	printf("%d\n",atoi(a));

	sprintf(a,"%d",b); // 通过类似于printf格式化的形式转字符串
	printf("%s",a);
	
	srand(time(0)); // 生成随机种子

	for(i=0;i<100;i++){
		printf("%d\n",rand()%101); // rand()%101生成0~100随机值
	}


	return 0;
}
