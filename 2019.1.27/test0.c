#include <stdio.h>

int main(){
	
	int num = 520;
	int *p1 = &num,*p2 = &num;
	int **pp1 = &p1;
	int *p3 = *pp1;

}
