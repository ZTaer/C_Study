#include <stdio.h>
#define Max 1024
// 关于中文
// 中文在内存中有3个存储单元,并且为负数

char len( char ch[Max] ){
	char *p = ch;
	int i=0,turn=0,result=0;

	while( (p[i] != '\n') && (p[i] != '\0') ){
		
		if( p[i] >= 0 ){
			i++;
			result++;
			continue;
		}
		else{
			if( turn == 2 ){
				i++;
				turn = 0;
				result -= 1;	
				continue;
			}
			i++;
			turn++;
			result++;
			continue;
			
		}
	}

	return result;

}

int main(){
	char ch[Max];
	int num=0;

	printf("input: ");
	fgets( ch,Max,stdin );
	printf("%d",len( ch ));	
	return 0;
}
