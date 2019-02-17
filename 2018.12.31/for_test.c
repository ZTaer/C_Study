#include <stdio.h>

int main(){
	char ch;
	for(ch = getchar();ch != '\n'; ch=getchar() ){
		printf("%c",ch);
	}

	return 0;
}
