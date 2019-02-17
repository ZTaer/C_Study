#include <stdio.h>
int main(){
	
	char a[4][3][2] = {
		{
			{'a', 'b'}, {'c', 'd'}, {'e', 'f'}
		},
		{
			{'g', 'h'}, {'i', 'j'}, {'k', 'l'}
		},
		{
			{'m', 'n'}, {'o', 'p'}, {'q', 'r'}
		},
		{
			{'s', 't'}, {'u', 'v'}, {'w', 'x'}
		}
	};
	char (*pa)[2] = &a[1][0];
	char (*ppa)[3][2] = &a[1];
	

	printf("%p\n",&a[3][2][1]);
	printf("%p\n",&(*((*pa)+17)));
	printf("%p\n",*(*ppa)+17);

	return 0;
}
