#include <stdio.h>
int sum( int num );

int sum( int num ){
	int result=0;

	do{
		result+=num;
		num--;

	}while(num>0);
	return result;
}

int main(){
	int num;	
	printf("input: ");
	scanf("%d",&num);
	printf("%d\n",sum(num));

	return 0;
}
