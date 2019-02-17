#include <stdio.h>

int main(){
	float tick=4000000 ,year=0;
	while(tick > 0){
		tick -= 500000;
		tick *= 1.08;
		year++;
	}
	printf("year=%.2f",year);
	return 0;
}
