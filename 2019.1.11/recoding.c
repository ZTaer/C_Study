#include <stdio.h>
#include <string.h>

// 问题: 实现不重复输入
//	创建noagain字符串组
//	每一次输入都循环检测是否已经在noagain数组中
//	如果没有则加入数组,有则进行下一次循环
// 问题: 统计出出现频率最大的的字符
//	迭代noagain元素于原输入进行对比循环
//		得出相等次数
//			如果次数>maxNum
//				则记录次数,manPos记录元素位置
//			否则:进行下一次循环



int main(){
	char ch,chAll[100]=""; // 字符输入,全部字符数组
	char noAgain[100]=""; // 不重复数组
	int sum=0,i,g,num=0,maxPos,maxNum; // while循环总次数,i,g,num记录重复元素次数,记录最大重复元素位置,记录最大重复元素次数
	_Bool YnoAgain = 1; // 加入不重复数组开关
	
	printf("\ninput: ");
	while( (ch = getchar()) != '\n' ){
		
		// 全部元素数组
		chAll[sum] = ch;

		// 不重复数组	
		for( i=0; i <= strlen(noAgain); i++ ){
			if(ch == noAgain[i]){
				YnoAgain = 0;
				break;
			}
			else{
				YnoAgain = 1;
			}
		}

		if( YnoAgain ){
			noAgain[ strlen(noAgain) ] = ch;
		}

		sum++;
	}

	// 找出重复最多的元素	
	for(i=0;i<strlen(noAgain);i++){
		num = 0;
		for(g=0;g<strlen(chAll);g++){
			if( noAgain[i] == chAll[g] ){
				num++;
			}
		}

		if( num > maxNum ){
			maxNum = num;
			maxPos = i;
		}

	}

	// 输出
	printf("\n你共输入%d个字符串,其中不同的字符个数有%d个.\n",strlen(chAll),strlen(noAgain));
	printf("它们是: %s\n",noAgain);
	printf("出现最多的字符是%c,它总共出现%d次\n",noAgain[maxPos],maxNum);	

	return 0;
}
