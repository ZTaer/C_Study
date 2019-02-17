#include <stdio.h>

int main(){
	
	char *array[3]={
		"aaaaa",
		"bbbbb",
		"ccccc"
	};

	char *(*p)[3] = &array;

	printf("%s",(*p)[1]  );

	return 0;
}
