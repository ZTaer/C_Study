#include <stdio.h>
int main(){
	
	int result=0,num,end;
	printf("input: ");
	scanf("%d",&end);
	getchar();
	
	printf("属于3或5的倍数有: \n");
	for(num=1;num<end;num++){
		if((num%3 == 0) || (num%5 == 0)){
			printf("%d",num);
			result += num;
			num%21 == 0 ? putchar('\n') :printf(" , ");			
		}
	}
	printf("\n和为: %d",result);

	return 0;
}
