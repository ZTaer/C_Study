#include <stdio.h>
// 创建max函数接收2个值,返回大值

int max(int , int); // 声明函数,就算函数放在主函数后面也不会出错!( 注意接收参数的对应 )
void test();

void test(){ // void 类型函数无返回值,所以无return

	printf("请输入2个值(用空格隔开!): ");
}

int max(int x , int y){
	
	if(x > y){
		return x;
	}
	else{
		return y;
	}
}

int main(){
	
	int num_1 , num_2, result;

	test();
	scanf("%d%d",&num_1,&num_2); 
	
	result = max(num_1,num_2); // 接收max()函数返回值
	printf("最大值为: %d",result);
		
	return 0;
}
