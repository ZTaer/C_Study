#include <stdio.h>

int main(){
	
	float fraction ;
	
	printf("请输入分数: ");
	scanf("%f",&fraction);

	if (fraction >= 90 && fraction <= 100){
		printf("A");
	}
	else if(fraction >= 80 && fraction < 90){ // 多条件判断
		printf("B");
	}
	else if(fraction >= 60 && fraction <80){
		printf("C");
	}
	else{ 
		printf("D");
	}


	return 0;
}
