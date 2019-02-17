#include <stdio.h>

int fun( int num );

int main(){
	
	int num;
	printf("input: ");
	scanf("%d",&num);
	printf("%d",fun(num));

	return 0;
}

int fun( int num ){
	int posNum,result = 0;
	while( num != 0 ){
		posNum = num % 10;
		num = num/10;
		if( (posNum%2) != 0 ){
			result = (result*10) + posNum;
		}
	}
	return result;
}


