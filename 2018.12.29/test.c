#include <stdio.h>
#include <string.h>
int main(){
	
	_Bool turn=1;
	int i=0;
	char az[100];
	printf("请输入: ");
	scanf("%s",az);

	while(turn){
	
		if (az[i] >= 'A' && az[i] <='Z'){
			az[i] = az[i] + 32;
		}
		else if(az[i] >= 'a'&& az[i] <= 'z'){
			az[i] = az[i] - 32;
		}
		else if(az[i] == '\0'){
			turn = 0;
			break;
		}
		i++;
	}
	printf("%s",az);

	return 0;
}
