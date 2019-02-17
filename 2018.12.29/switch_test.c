#include <stdio.h>
int main(){
	
	int i ;
	printf("input: ");
	scanf("%d",&i);

	switch(i){
		
		case 1+2: printf("22222");break;
		case 5%3: printf("3333"); break;
		case 1: printf("------"); break;
		default: printf("END!"); break;
	}

	return 0;
}
