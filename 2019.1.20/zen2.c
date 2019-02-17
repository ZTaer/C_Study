#include <stdio.h>

int main(){
	
	char *array[5] = {"FishC","Five","Star","Good","Wow"};
	char *p=array[0];
	int i,j;
	
	for( i=0; i<5; i++ ){
		for(j=0; array[i][j] != '\0';j++  ){
			printf("%c ",array[j][i]);
		}
		printf("\n");
	}

	return 0;
}
