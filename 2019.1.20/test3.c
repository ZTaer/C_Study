#include <stdio.h>

int main(){
	
	int array[2][3] = { {1,2,3},{4,5,6} };
	int (*p)[3] = array;

	// (*p)表示开头, (*p) + 1内存位置后移1位, (*p + 1)内存位置前往末尾
	printf("%d\n",**(p+1));
	printf("%d\n",array[1][0]);


	printf("%d\n", *((*p +1 ) +2 ) );
	printf("%d\n", array[1][2]);

	return 0;
}
