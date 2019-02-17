#include <stdio.h>

int main(){
	float cm,kg,in,lb;
	char name[5];
	
	printf("姓名: ");
	scanf("%s",name);
	
	printf("身高(cm): ");
	scanf("%f",&cm);
	
	printf("体重(kg): ");
	scanf("%f",&kg);

	in = cm * 0.3937008;
	lb = kg * 2.2046226;
	printf("%s的身高是%.2f(in),体重是%.2f(lb)",name,in,lb);
	
	return 0;
}
