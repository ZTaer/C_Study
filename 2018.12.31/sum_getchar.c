#include <stdio.h>
int main(){
	_Bool turn=1;
	char ch;
	int  result = 0;
	while(turn){
		printf("请输入合法的数字: ");
		ch = getchar();
		getchar();
		if(ch >= '0' && ch <= '9'){
			result = result + (ch - '0');
		}
		else{
			printf("结果是: %d",result);
			turn = 0;
			break;
		}	
	}

	return 0;
}
