#include <stdio.h>
#include <string.h>
#define Max 1024

int main(){
	char a[Max],b[Max];
	char *p;
	int i;
	_Bool turn=1;
	p = a;

	printf("input_1: ");
	fgets( p,Max,stdin );
	printf("input_2: ");
	fgets( b,Max,stdin );
	
	while(turn){
		if(p[i] != b[i] ){
			turn = 0;
			break;
		}
		if( (p[i] == '\n') && (b[i] == '\n') ){
			turn = 1;
			break;
		}
		i++;
	}	

	if(turn){
		printf("二者的%d个字符串完全相同",i);
	}
	else{
		printf("二者在第%d处不同",(i+1));
	}

	
	return 0;
}
