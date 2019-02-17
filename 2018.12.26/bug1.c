#include <stdio.h>

int main(){
	
	char isRain , isFree;

	printf("是否有空?(Y/N): ");
	scanf("%c",&isFree);

	getchar(); // 因为回车也相当于一个参数,所以要使用getchar()函数回收

	printf("是否下雨?(Y/N): ");
	scanf("%c",&isRain);

	if (isFree == 'Y' || isFree == 'y' ){
		if (isRain == 'Y' || isRain == 'y' ){
			printf("记得带伞┗|｀O′|┛ 嗷~~\n");
		}
		else{
			printf("不用带伞,加油,祝你成功!!\n");
		}
	}
	else{
		printf("天涯何处无芳草!!不要难过啦!!\n");
	}

	return 0;
}
