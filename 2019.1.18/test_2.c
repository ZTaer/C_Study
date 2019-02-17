#include <stdio.h>
#define Max 100
int main(){

	char a[Max];
	char b[Max];
	char *p;
	char ch;
	int n=0,i,alen = 0;
	_Bool turnDel=0;

	p = a;
	printf("input: ");
	fgets( a,Max,stdin );
	while( *p++ != '\n' ){
		alen++;
	}
	
	printf("%d",alen);

	for( alen=alen-1,i=0; alen>=0; alen--,i++ ){
		
		if( (a[alen]>='a'&& a[alen]<='z') || (a[alen]>= 'A'&& a[alen] <='Z') ){
			turnDel =1;
		}
		if( turnDel && a[alen] == '*' ){
			i = i-1;
			continue;
		}
		b[i] = a[alen];
	}

	b[i+1] = '\0';
	printf("%s\n",b);
	
	// 反转字符串算法;n为开头位置,i为结尾位置
	while( n<i ){
		ch = b[n];
		b[n] = b[i];
		b[i] = ch;
		n++;
		i--;
	}
	printf("%s",b);
	
	return 0;
}
