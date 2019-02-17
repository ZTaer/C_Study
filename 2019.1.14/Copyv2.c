#include <stdio.h>
#define Max 1024

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
	
	char str1[Max];
	char str2[Max];
	char *ch;
	int i=0,stop,g;

	ch = str1;
	
	printf("input: ");
	fgets( str1,Max,stdin );
	printf("拷贝字数: ");
	scanf("%d",&stop);
	

	while( ch[i] != '\n'){
		if( stop <= len(str2) ){
			break;
		}

		if( ch[i]>=0 ){
			str2[i] = ch[i];
		}
		else{ // 遇见中文,直接连续赋值3次
			for(g=0;g<3;g++,i++){
				str2[i] = ch[i];
			}
			continue;

		}
		i++;
	}
	str2[(i+1)] = '\0';
	

	printf("拷贝完毕(str2): %s",str2);
	return 0;
}
