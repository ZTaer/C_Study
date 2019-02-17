#include <stdio.h>

int main(){
	char ch;

	char a[5][100];
	int x,i=0,xMax=0,xMin=100,maxLen,minLen;
	
	// 处理区
	printf("请输入5句话: \n");
	for( x=0; x<5; x++ ){
		while( (ch = getchar()) != '\n' ){
			a[x][i++] = ch;
		}
		// 记录极值位置	
		if(i>xMax){
			xMax = x;
			maxLen = i;
		}
		if( i<xMin ){
			xMin = x;
			minLen = i;
		}
		i=0;
	}

	// 输出区
	printf("其中最长的是: ");
	for( i=0;i<maxLen;i++ ){
		printf("%c",a[xMax][i]);
	}
	putchar('\n');

	printf("其中最短的是: ");
	for( i=0;i<minLen;i++ ){
		printf("%c",a[xMin][i]);
	}
	return 0;
}
