#include <stdio.h>

int main(){
	
	int year,test[3];
	printf("year: ");
	scanf("%d",&year);
	getchar();
	
	// 判断闰年: 4年一闰,百年不闰,400年一闰
	if( (year%4 == 0 && year%100 != 0) || (year%400 == 0) ){
		printf("%d是闰年\n",year);
	}
	else{
		printf("%d不是闰年\n");
	}
	test = year1(1);
	printf("%d",test[1]);

	return 0;
}
