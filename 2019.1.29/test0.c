#include <stdio.h>

int main(){
	
	char *pArray[4] = {
		"hellow",
		"how are you",
		"fine, thanks you. And you?",
		"i'm fine too."
	};
	char *(*p)[4] = &pArray; 
	int i;
	for(i=0;i<4;i++){
		printf("%s\n",(*p)[i]);
	}

	return 0;
}
