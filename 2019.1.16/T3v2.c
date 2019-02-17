#include <stdio.h>
#include <string.h>
#define Max 1024

int main(){
	char a[Max],b[Max];
	char *p;
	int i,g; // g在中文进行循环比较时计数
	int num,stop=0; // num限制比较次数限制,stop统计比较次数
	_Bool turn=0; // 由turn决定是否完全相同
	p = a;

	printf("input_1: ");
	fgets( p,Max,stdin );
	printf("input_2: ");
	fgets( b,Max,stdin );
	printf("停止数: ");
	scanf("%d",&num);	

	while( stop < num ){
		if( (p[i] == '\n') && (b[i] == '\n') ){
			break;
		}

		if( (p[i] >= 0 && b[i] >= 0) && (p[i] == b[i]) ){
			turn = 1;
			i++;
			stop++;
			continue;
		}
		else if( (p[i] < 0) && (b[i] < 0) ){ // 中文比较
			for( g=0;g<3;g++,i++){
				if( p[i] == b[i] ){
					turn = 1;
				}
				else{
					turn = 0;
					break;
				}
			}
			stop++;
			if(turn == 0){ // 中文不同直接结束循环
				break;
			}
			continue;
		}
		else{
			stop++;
			turn = 0;
			break;
		}

	}
	
	printf("turn = %d, i = %d, stop = %d\n",turn,i,stop); // 重要参数观察	
	if(turn){
		printf("两者前 %d 个字符完全相同!\n",num);
	}
	else{
		printf("两者不完全相同,第 %d 个字符不同!\n",stop); 
	}
	
	return 0;
}
