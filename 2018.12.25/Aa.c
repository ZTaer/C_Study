#include <stdio.h>

int main(){
	
	// A - 65 --- a - 97
	char input_;
	printf("请输入1个大写字母: ");
	scanf("%c",&input_);
	
	if(input_ >= 65 && input_ <= 91){
		input_ = input_ + 32;
		printf("转换成功: %c",input_);
	}
	else if(input_ >= 97 && input_ <= 123){
		input_ = input_ - 32;
		printf("转换成功: %c",input_);
	}
	else{
		printf("请输入单个大写字母!");
	}

	return 0;
}
