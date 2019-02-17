#include <stdio.h>
int main(){


	char slogans[5][100]={
		"1asdasdasdasdasdsa",
		"2resadasdtsaedasdr",
		"3sadasdasd",
		"4asdasasddasd",
		"5sads",
	};

	int i;
	int g;
	for(i=0;i<5;i++){
		for(g=0;g<100;g++){

			printf("%c",slogans[i][g]);
		}
		putchar('\n');
	}

}
