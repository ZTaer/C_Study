#include <stdio.h>
#include <math.h>
int main(){
	
	int num , i=2;
	_Bool result = 1;
	printf("input: ");	
	scanf("%d",&num);
	
	/***第一种方法
	while (i<=(int)sqrt(num)){
		if (num%i == 0){
			result = 0;
			break;
		}
		i++;
	}
	***/

	// 第二种
	for(i=2;i<=(int)sqrt(num);i++){
		if(num%i==0){
			result = 0;
			break;
		}
	}	

	if (result){
		printf("%d -是素数-\n",num);
	}
	else{
		printf("%d -非素数-\n",num);
	}


	return 0;
}
