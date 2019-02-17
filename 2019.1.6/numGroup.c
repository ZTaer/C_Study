#include <stdio.h>

int main(){
	int a[5]={0},i=0; // 数组初始化为0
	int b[5]={ 12,3,213,123 }; // 填充数字,没有填充位置为0
	int c[5]={12}; // 同样,没有填充的位置为0
	int d[]={123,12,3,123}; // 编译器会自动,填入数组大小
	int e[5]={[0]=666,[4]=111}; // 可以指定位置进行赋值操作
	
	for(i=0;i<5;i++){
		printf("a %d\n",a[i]);
		printf("b %d\n",b[i]);
		printf("c %d\n",c[i]);
		printf("d %d\n",d[i]);
		printf("e %d\n",e[i]);
		putchar('\n');
	}
	printf("\n%d",b);

	return 0;
}
