#include <stdio.h>

int main(){
	
	char *array[5] = {
		"FishC",
		"Five",
		"Star",
		"Good",
		"Wow"
	};
	char *(*p)[5] = &array;
	int i,j;
	for(i=0;i<5;i++){
		for(j=0; (*p)[j][i] != '\0';j++ ){
			printf("%c ",(*p)[j][i]);
		}
		putchar('\n');
	}

	return 0;
}
