#include <stdio.h>

int main(){
	
	int x=10,y=10;
	int num[x][y];
	int i=0,j=0;
	char ch;

	printf("input: ");
	scanf("%d*%d",&x,&y);
	getchar();
	putchar('\n');

	for( i=0;i<x;i++ ){
		while( (ch = getchar()) != '\n' ){

			if(j == y){
				break;
			}
			if( ch >='0'&& ch<='9' ){
				num[i][j] = (int)( ch - '0' );
				j++;
			}
		}
		j=0;
	}
	
	
	putchar('\n');
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("%d ",num[i][j]);
		}
		putchar('\n');
	}

	return 0;
}
