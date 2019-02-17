#include <stdio.h>
#include <math.h>
#include <string.h>
// 思路
// 输入字符串循环检测
//
// 具体思路
// 	输入字符串"12abc2.56ww20"
// 	目的: 相当于12+25.56+20计算出结果
// 	创建str_sum(　接收一个字符串　)函数
// 	v2.0支持浮点数计算
//
// 	char *ch; 接受待处理的字符串
// 	_Bool turn = 1,poit_turn = 0,sum_turn = 0; 循环开关,小数点转换开关,控制tir与result结合的开关( 检测到多非0~9多个字符串时避免无意义的加减 )
//	int pos = 0,poit = 0;　记录位置, 记录小数点位置
//	float result ,tir ;结果 , 计算收集元素
//      
//      循环
// 	　如果到字符串'0'~'9'或者'.'范围
// 		  如果ch[pos] == '.'
// 		  	是: result = result + tir; 提交当前计算结果
// 		  	tir = 0; 清零重新开始
// 		  	poit = pos;　记录小说点位置
// 		  	poit_turn = 1;
// 		  	sum_turn = 1; 
// 		  	pos++;
// 		  	调到下一次循环
//
//
// 		　如果范围0~9: tir = tir*10 + ch[pos] - '0';
// 		　pos++;
// 		  sum_turn = 1;
// 		  跳到下一次循环
//
// 	  如果检测到其它范围( 不包括小数点 )
// 	  	  是( sum_turn = 1 ; poit_turn = 1 ): result = result + tir*pow( 10,-(pos - poit -1) ) ;tir = 0 ;poit =0;poit_turn = 0;sum_turn = 0;pos++;跳到下一次循环
// 	  	　是( sum_turn = 1 ; poit_turn = 0 ): result = result + tir;tir=0;sum_turn = 0;pos++;跳到下一次循环
// 	  	  
// 	  	  否: 
// 	  	  如果检测到'\0'停止循环
// 	          	结果result = result + tir;
// 	  	  pos++;跳到下一次循环
float str_sum(char *ch);
float str_sum(char *ch){
	_Bool turn = 1,poit_turn = 0,sum_turn =0;
	int pos =0,poit = 0;
	float result = 0,tir = 0;
	
	while (turn){
		if ((ch[pos] >= '0' && ch[pos] <= '9') || ch[pos] == '.'){
			if (ch[pos] == '.'){
				result = result + tir;
				tir = 0;
				poit = pos;
				poit_turn = 1;
				sum_turn = 1;
			}
			else if(ch[pos] >= '0' && ch[pos] <= '9'){
				tir = tir*10 + ch[pos] - '0';
				sum_turn = 1;
			}
			pos++;
			continue;

		}
		else{
			if( sum_turn && poit_turn ){ // tir值转换为小数
				result = result + tir*pow(10, (poit + 1 - pos));
				poit = 0;
				poit_turn = 0;
				sum_turn = 0;
				tir = 0;
				pos++;
				continue;
			}
			else if( sum_turn && !poit_turn ){
				result = result + tir;
				sum_turn = 0;
				tir = 0;
				pos++;
				continue;
			}

			if(ch[pos] == '\0'){
				turn = 0;
				break;

			}
			else{
				pos++;
				continue;
			}

		}
	}
	return result;

}

int main(){
	float result;
	char ch[]="";
	printf("input: ");
	scanf("%s",ch);
	result = str_sum(ch);
	printf("%.2f",result);
	
	return 0;

}
