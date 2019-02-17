#include <stdio.h>
int main(){
	int i=10,s=1;
	float a=1.0,b=1.0;
	float result=0;

	while(i){
		result = 4*(result + b);
		
		if(s>0){
			s=-1;
		}
		else{
			s=1;
		}
		a = a+2;
		b = (1/a)*s;
		printf("%f\n",result);	
		i--;
	}
	return 0;
}
