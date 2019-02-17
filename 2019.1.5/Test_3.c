#include <stdio.h>
#include <math.h>
#include <string.h>

// 这个算法可以适应各种长度单位不同的int类型转为颠倒数
int dao(int num){

	int len,result=0,i;
	char strNum[10]; // 字符串形式数字

	sprintf(strNum,"%d",num); // 为获取接受值长度,提供下一步计算
	len = strlen(strNum);
	
	for(i=(len-1);i>=0;i--){ // 字符串转数字(倒着来)
		result = result*10 + strNum[i] - '0';
	}

	return result;

}

int main(){
	
	int a,b,result;
	for(a=999; a>=100; a--){
		for(b=999; b>=100; b--){
			result = a*b;
			if(result == dao(result)){
				printf("\n最大回文数为: %d*%d=%d",a,b,result);
				goto A;
			}
		}
	}
A:	printf("\nEND!\n");

	return 0;
}
