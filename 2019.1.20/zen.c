#include <stdio.h>

int main(){
	
	char *array[5] = {"FishC","Five","Star","Good","WoW"};
	char *p=array[0];
	int i,j;
	
	for( i=0; i<5; i++ ){
		for(j=0; ( p=array[i] ),*(p+j) != '\0';j++  ){
			printf("%c ",*(p+j));
		}
		printf("\n");
	}

	return 0;
}
