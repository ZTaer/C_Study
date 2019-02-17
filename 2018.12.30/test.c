#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int i=0,n,result=0;
	printf("input: ");
	scanf("%d",&n);

	while (i<n){
		result = result + i;
		i++;
	}
	printf("%d",result);

	return 0;
}
