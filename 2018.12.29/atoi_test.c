#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//思路
//atoi()函数属于<stdlib.h>
//默认功能: 提取除字符串开头数字,遇到其它字符串停止获取
//本次升级功能: 
//	1.默认功能具备
//	2.如果字符串中不存在数字字符要返回提示＂未找到如何数值＂
//	3.检查是否超出int范围(pow(2,32-1))超出提示"数值超出范围"

//具体思路:
//	创建函数atoi_( 接收１个字符串变量 )
//	char *ch //接收字符串
//	int flag=1,pos＝０ //正负值,记录字符串迭代位置
//	long long int result = 0 //结果值
//		通过迭代的方法,提出字符串部分
//			
//			1. 如果检测到空格进行下一次迭代
//				是pos++,跳到下一次循环;
//			2. 如果检测到'-'则
//				是pos++;flag *= -1,跳到下一次循环
//			3. 检测到非'0'~'9'结束迭代
//			4. 如果检测到'0'~'9'范围
//				计算结果值( result = result * 10 + ch[pos] - '0' )
//			pos++;
//		判断result是否为假(迭代完毕)
//			是则( 返回提示结束函数 )
//			否则判断是否超出int范围( pow(2,32-1) )
//				是则( 返回提示结束函数 )
//				否则然后result*flag值


int atoi_new( char *ch );		

int main()
{
	int result;
	char ch[100];
	printf("input: ");
	scanf("%s",ch);
	result = atoi_new(ch);
	printf("%d",result);
	return 0;
}

int atoi_new( char *ch ){
	int flag = 1, pos = 0;
	long long int result = 0;
	_Bool turn = 1i;

	while (turn){
		if(ch[pos] == ' '){
			pos++;
			continue;
		}

		if(ch[pos] == '-'){
			pos++;
			flag *= (-1);
			continue;
		}
		else if(ch[pos] == '+'){
			pos++;
			continue;
		}
		

		if( (ch[pos] != ' ' && ch[pos] != '-') && (ch[pos] < '0' || ch[pos] > '9') ){
			turn = 0;
			break;
		}
		else if( ch[pos] >= '0' && ch[pos] <= '9' ){
			result = result * 10 + ch[pos] - '0'; //核心
		}

		pos++;
	}

	if(result != 0){
		if(result < pow(2,31) && result > (-pow(2,31))){
			result = result*flag;
			return result;
		}
		else{
			printf("超出范围!");
			return 0;
		}
	}
	else{
		printf("无数字!");
		return 0;
	}
}

