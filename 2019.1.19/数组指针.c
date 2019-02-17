#include <stdio.h>

int main(){
	int i;
	int temp[5]={1,2,3,4,5};
	int (*p2)[5] = &temp;// 先创建一个指针,在将一个数组的地址赋给指针,叫"数组指针"

	for(i=0;i<5;i++){
		printf("%d\n",*( *p2 + i )); // 索引复杂,这东西真的有用?
	}

	return 0;
}
