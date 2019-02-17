#include <stdio.h>

int main(){
	
	int test[10] = {1,2,3,4,5,6,7,8,9,0};
	int (*p)[2] = (int (*)[2])&test; // 强制转换为2x2的正方形矩阵( 注意前后值必须相等否则会报错 )

	printf("%d\n",p[1][0]);

	return 0;
}
