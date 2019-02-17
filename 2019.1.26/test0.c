#include <stdio.h>

int main(){
	
	int array[3][5]={
		{1,2,3,4},
		{6,7,8,9},
		{10,11,22,33}
	};

	int **p = array;
	int i,j;
	printf("%p \n",array);
	printf("%d ",*(&(*p)+1));
	/*
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("%d ",*((*p)+));
		}
	}
	*/


	return 0;
}
