#include <stdio.h>
int max( int num1,int num2 ){
	
	if( num1 > num2 ){
		return num1;
	}
	else{
		return num2;
	}
}

int main(){
	
	int num1,num2;
	printf("input: ");
	scanf("%d%d",&num1,&num2);
	printf("MAX = %d",max(num1,num2));

	return 0;
}
