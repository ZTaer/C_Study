#include <stdio.h>
int main(){
	
	char ch[6] = "FishC";
	int num;
	printf("0~5: ");
	scanf("%d",&num);

	// 防止访问数组以外的内容
	if (num >= 5){
		num = 5;
	}
	else if (num <= 0){
		num = 0;
	}
	printf("%c\n",ch[(int)(num)]);

	return 0;
}
