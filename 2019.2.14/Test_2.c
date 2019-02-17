#include <stdio.h>

int main(){
	
	int pos,fnum,result;
	_Bool turn = 0;
	int numList[10] = {0,1,2,3,4,5,6,7,8,9};

	pos = 10/2;
	printf("input: ");
	scanf("%d",&fnum);
	
	while( (pos>=0)&&(numList[pos] != '\0') ){
		if(numList[pos] == fnum){
			turn = 1;
			result = pos;
			break;
		}
		else if(numList[pos] > fnum){
			pos--;
		}
		else if(numList[pos] < fnum){
			pos++;
		}
	}

	if(turn){
		printf("%d",result);
	}
	else{
		printf("无次数");
	}

	return 0;
}
