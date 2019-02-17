#include <stdio.h>
#include <stdlib.h>
int main(){
	
	char ch[100];
	unsigned  int num;
	int i,max=0,zero=0;

	printf("input: ");
	scanf("%d",&num);
	getchar();

	sprintf(ch,"%d",num);
	for(i=0;ch[i] != '\0';i++){
		if( (ch[i] - '0') > max ){
			max = ( ch[i] -'0' );
		}
		if( ch[i] == '0' ){
			zero++;
		}
	}
	printf("数值最大的为%d\n",max);
	printf("则数字值为零的个数为%d\n",zero);
}
