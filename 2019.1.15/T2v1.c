#include <stdio.h>
#define Max 1024

// 借用下上一次题写的,嘻嘻
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
	char a[Max],b[Max];
	char *p;
	int a_len,b_len;
	int i=0;
	p = a;

	printf("1_input: ");
	fgets( a,Max,stdin );
	printf("2_input: ");
	fgets( b,Max,stdin );

	a_len = len( a );
	while( b[i] != '\n' ){
		p[ a_len++ ] = b[i];
		i++;
	}
	p[ a_len+1 ] = '\0';
	
	printf("%s",p);
	return 0;
}
