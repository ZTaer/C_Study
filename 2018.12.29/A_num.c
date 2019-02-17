#include <stdio.h>
#include <string.h>
int main(){
	int a,i=0,sum=0;
	char *ch;
	printf("input: ");
	scanf("%s",ch);
	while (1){
		if (ch[i] >= 'A' && ch[i] <= 'Z'){
			sum = sum + 1;
		}
		else if(ch[i] == '\0'){
		break;
		}
		i++;
	}
	printf("%d\n",sum);
	printf("len = %d",strlen(ch));
	return 0;
}
