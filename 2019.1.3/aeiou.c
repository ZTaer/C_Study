#include <stdio.h>



int main(){
	char ch;
	int a,e,i,o,u,sum;
	a = e = i = o = u = 0;
	printf("input: ");
	while( (ch = getchar()) != '\n' ){
		switch(ch){
			case 'a':
				a += 1;
				break;
			case 'e':
				e += 1;
				break;
			case 'i':
				i += 1;
				break;
			case 'o':
				o += 1;
				break;
			case 'u':
				u += 1;
				break;

			default: break;
		}
	}
	sum = a+e+i+o+u;	
	printf("统计结果(共%d个元音字母): \na(%d) --- e(%d) --- i(%d) --- o(%d) --- u(%d)",sum,a,e,i,o,u);

	return 0;
}
