#include <stdio.h>
#include <math.h>

// 求素数
int su(int num); // 声明函数养成良好习惯

int su( int num ){
	int i;
	for(i=2; i<= (int)(sqrt(num)); i++){
		if( num%i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int end,i,result;
	printf("input: ");
	scanf("%d",&end);
	for(i=2; i<=end; i++){
		result += su(i);	
	}
	printf("共%d个素数!",result);	

	return 0;
}
