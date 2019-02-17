#include <stdio.h>
#define Max 10

int main(){
	
	char ch[Max][Max] = {
		"asdasd",
		"sadasd"
	};
	char (*p)[Max] = ch;

	printf("%s",(*p + 0));
	


	return 0;
}
