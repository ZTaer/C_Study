#include <stdio.h>

// 思路
// 输入字符串循环检测
//
// 具体思路
// 	输入字符串"12abc25ww20"
// 	目的: 相当于12+25+20计算出结果
// 	创建str_sum(　接收一个字符串　)函数
//
// 	char *ch; 接受待处理的字符串
// 	_Bool turn = 1, sum_turn = 0; 循环开关 , 控制tir于result结合的开关
//	int pos;　记录位置
//	float result ,tir ;结果 , 计算收集元素
//      
//      循环
// 	　如果到字符串'0'~'9'范围
// 		　是: tir = tir*10 + ch[pos] - '0';
// 		　pos++;
// 	　　　　　sum_turn = 1
// 		  跳到下一次循环
// 	  如果检测到其它范围
// 	  	　是: result = result + tir; sum_turn=0;tir=0;pos++;跳到下一次循环
// 	  	  否: pos++;跳到下一次循环
// 	  如果检测到'\0'停止循环
// 	结果result = result + tir;
/*
int str_sum0( char *ch );
int str_sum0( char *ch ){



	while(turn){
		
	}
}
*/
int main(){
	char ch[]="";
	printf("input: ");
	scanf("%s",ch);
	getchar();
	printf("%s --- %d",ch,ch[3]);


	return 0;

}
