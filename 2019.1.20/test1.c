#include <stdio.h>

int main(){

	char array[5][5];
	int i,j,s=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			array[i][j]=s++;
		}
	}
	// 核心: *( array + i ) == array[i]
	printf("%p\n",*(array+1));
	printf("%p\n",array[1]);

	// 核心2: *(*(array+i) + j) == array[i][j]
	printf("%p\n",&*(*(array+1)+1));
	printf("%p",&array[1][1]);
	return 0;
}
