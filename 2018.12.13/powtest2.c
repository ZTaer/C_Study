#include <stdio.h>
#include <math.h>

int main(){
	unsigned long long int temp , sum = 0 ;
	int i;
	for (i=0; i<64; i++){
		temp = pow(2,i);
		sum = sum + temp;
	}
	printf("%llu",sum);

	return 0;
}
