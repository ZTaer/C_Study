#include <stdio.h>
int main(){
	int a=1,b=2,c;
	int turn;
	turn = 12*2-1;
	while(turn){
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
		turn--;
	}
}
