#include <stdio.h>
#include <string.h>
int strncmpT( char str1[], char str2[], int num ){
	
	int i=0,result;
	for(i=0; i<=num; i++){
		if(str1[i] == str2[i]){
			result = 0;
		}
		else if(str1[i] != str2[i]){
			result = str1[i] - str2[i];
			return result;
		}
	}
	return result;
		
}

int main(){
	
	char str1[100];
	char str2[100];
	int num;

	printf("str1= ");
	scanf("%s",str1);
	getchar();

	printf("str2= ");
	scanf("%s",str2);
	getchar();

	printf("num= ");
	scanf("%d",&num);
	getchar();

	printf("%d",strncmpT( str1,str2,num ));


	return 0;
}
