#include <stdio.h>
#include <string.h>

int main(){
	_Bool turn=0;
	char ch;
	char result[21];
	int sum=0;
	while( (ch = getchar()) != '\n'  ){
		if( sum<21){
			result[sum] = ch;
			if( sum>15 && ch==' '){ 
				result[sum] = '\0';	
			}
		}
		sum++;
	}
	printf("%s",result);
	return 0;
}
