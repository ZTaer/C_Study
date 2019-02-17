#include <stdio.h>
#include <math.h>
int main(){
	
	int i,result,a,b,c;
	for(i=100;i<=999;i++){
		a = i%10;
		b = i/10%10;
		c = i/100;
		if(pow(a,3)+pow(b,3)+pow(c,3) == i){
			printf("%d,",i);
		}
	}
	return 0;
}
