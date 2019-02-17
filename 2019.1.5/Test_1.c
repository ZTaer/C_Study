#include <stdio.h>

int main(){
	long int i,end;
	long int a=1,b=2,n=0,result=0; 
	
	for (i=0; a<4000000; i++){ 
		
		printf("%ld, ",a);
		a%2 == 0 ? result += a : 0 ; // 验证是否为偶数
			
		// 斐波那契数列生成
		n = a + b;
		a = b;
		b = n;
	}
	printf("\n偶数和: %ld",result);



	return 0;
}
