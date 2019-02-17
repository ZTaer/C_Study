#include <stdio.h>
#define HIG 7
#define WID 9

void led( int space ){

  	char F[HIG][WID] = {
		"########",
		"##      ",
		"##      ",
		"######  ",
		"##      ",
		"##      ",
		"##      "
	};
	char I[HIG][WID] = {
		"########",
		"   ##   ",
		"   ##   ",
		"   ##   ",
		"   ##   ",
		"   ##   ",
		"########"
	};
	char S[HIG][WID] = {
		" ###### ",
		"##    ##",
		"##      ",
		" ###### ",
		"      ##",
		"##    ##",
		" ###### "
	};
	char H[HIG][WID] = {
		"##    ##",
		"##    ##",
		"##    ##",
		"########",
		"##    ##",
		"##    ##",
		"##    ##"
	};

	char C[HIG][WID] = {
		" ###### ",
		"##    ##",
		"##      ",
		"##      ",
		"##      ",
		"##    ##",
		" ###### "
	};

	char spaceList[space+1];
	int j,i=0;
	_Bool turn = 1;

	for(j=0;j<space;j++){
		spaceList[j]=' ';
	}
	spaceList[space] = '\0';

	for(i=0;i<HIG;i++){
		printf("%s",F[i]);
		printf("%s",spaceList);
		printf("%s",I[i]);
		printf("%s",spaceList);
		printf("%s",S[i]);
		printf("%s",spaceList);
		printf("%s",H[i]);
		printf("%s",spaceList);
		printf("%s",C[i]);
		printf("%s",spaceList);
		putchar('\n');
	}	
}

int main(){
	int spaceNum;
	printf("空格数: ");
	scanf("%d",&spaceNum);
	led(spaceNum);
	return 0;
}



