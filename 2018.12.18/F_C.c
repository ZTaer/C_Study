#include <stdio.h>

int main(){
	
	float c_tpr,f_tpr;
	printf("请输入华氏度: ");
	scanf("%f",&f_tpr);
	c_tpr = (f_tpr - 32) * 5/9;
	printf("转换为摄氏度是: %.2f\n",f_tpr,c_tpr);
	
	return 0;
}

