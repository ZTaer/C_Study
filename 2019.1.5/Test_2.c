#include <stdio.h>
#include <math.h>
int su(long int num);

int su(long int num){
	long int i;
	for(i=2; i<= (int)(sqrt(num)); i++){
		if(num%i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	long int num,result;

	num = 600851475143;
	while(1){
		if(su(num)){
			printf("最大质数---%ld",num);
			break;
		}
		num = num - 1;
	}
	return 0;
}
