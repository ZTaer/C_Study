#include <stdio.h>

//判断闰年
int year(int num){
	if( (num%4 == 0 && num%100 != 0) || ( num%400 == 0 ) ){
		return 1;
	}
	return 0;
}

int main(){
	
	int year_r[12]={ 31,29,31,30,31,30,31,31,30,31,30,31 };
	int year_n[12]={ 31,28,31,30,31,30,31,31,30,31,30,31 };
	int num,i;

	// v1.0

	printf("input: ");
	scanf("%d",&num);
	getchar();
	if(year(num)){
		for(i=0;i<12;i++){
			printf("%d月: %d天\n",(i+1),year_r[i]);
		}
	}
	else{
		for(i=0;i<12;i++){
			printf("%d月: %d天\n",(i+1),year_n[i]);
		}
	}
	

	
	return 0;
}
