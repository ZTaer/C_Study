#include <stdio.h>
int main(){
	
	const char ch[100] = "aaaaaa"; // const防止修改变量,会将变量转为" 只读模式 ".
	ch[3] = '1';　//　如果变量有const,会出现错误.
	printf("%s",ch);

	return 0;
}
