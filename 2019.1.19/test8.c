#include <stdio.h>

int main(){
	
	char *array[2] = {"abc","wdw"};
	char *(*p)[2] = &array;

	printf("%d\n",sizeof(array[0])); // 加上2个'\0'确实为8
	printf("%d\n",sizeof(*p)); // 相当于8*2 = 16

	return 0;
}
