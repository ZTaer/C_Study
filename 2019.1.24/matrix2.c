#include <stdio.h>

int main(){
	
	int m=10,p=10,n=10;
	int num[m][p],num_[p][n],result[m][n];
	int i=0,j=0,s=0;
	int endResult=0,x,y;
	_Bool choice = 0,turn = 1;
	char ch;
	
	//输入区
	printf("请输入第一个矩阵尺寸(x*y): ");
	scanf("%d*%d",&m,&p);
	getchar();
	printf("请输入第二个矩阵尺寸(p*n): ");
	scanf("%d*%d",&p,&n);
	getchar();
	
	// 创建矩阵区
	while( turn ){
		if( choice == 0 ){
			printf("请输入第一个矩阵值: \n");
			x = m;
			y = p;
		}
		else{
			printf("请输入第二个矩阵值: \n");
			x = p;
			y = n;
		}
		
		for( i=0;i<x;i++ ){
			while( (ch = getchar()) != '\n' ){

				if(j == y){
					break;
				}
				if( ch >='0'&& ch<='9' ){
					if(choice == 0){
						num[i][j] = (int)( ch - '0' );
					}
					else{
						num_[i][j] = (int)( ch - '0');
					}
					j++;
				}
			}
			j=0;
		}

		if( choice == 1 ){
			turn = 0;
		}
		choice = 1;
	}
	
	// 矩阵计算区
	// m = 4,n = 8,p = 5
	// m,p(b)*p(b),n
	for( i=0;i<m;i++ ){
		for(j=0;j<n;j++){
			for(s=0;s<p;s++){
				endResult += num[i][s]*num_[s][j];	
			}
			result[i][j] = endResult;
			endResult = 0;
		}
	}


	// 输出区
	putchar('\n');
	printf("计算结果: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",result[i][j]);
		}
		putchar('\n');
	}




	
	return 0;
}
