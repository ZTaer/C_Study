#include <stdio.h>

int main(){

	float left,right,result;
	char air;
	_Bool turn = 1;
	
	printf("请输入: ");
	scanf("%f%c%f",&left,&air,&right);
	switch(air){
		case '+': 
			result = left+right; 
			break;
		case '-': 
			  result = left-right; 
			  break;
		case '*': 
			  result = left*right; 
			  break;
		case '/':
			  if(right == 0){
			  	printf("分母不能为０\n");
				turn = 0;
			  }
			  else {
			  	result = left/right;
			  } break;

		default: 
			  printf("请输入正确值!\n");
			  turn = 0;
			  break;
	}
	if (turn){
		printf("结果: %.2f",result);
	}

	return 0;
}
