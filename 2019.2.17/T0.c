#include <stdio.h>


void print_F();
void print_I();
void print_S();
void print_H();
void print_C();



int main(){
	print_F();
	print_I();
	print_S();
	print_H();
	print_C();
	return 0;
}

void print_F(){
	printf("########\n##\n##\n######\n##\n##\n##\n\n");
}
void print_I(){
	printf("########\n   ##\n   ##\n   ##\n   ##\n   ##\n########\n\n" );
}
void print_S(){
	printf(" ###### \n##    ##\n##\n ######\n      ##\n##    ##\n ######\n\n");
}
void print_H(){
	printf("##    ##\n##    ##\n##    ##\n########\n##    ##\n##    ##\n##    ##\n\n");
}
void print_C(){
	printf(" ###### \n##\n##\n##\n##\n##\n ######\n\n");
}
