#include <stdio.h>

char stars( int num );

char stars( int num ){
	int i;
	_Bool turn = 0;

	if(num > 0){
		for(i=0;i<num;i++){
			printf("*");
		}
		turn = 1;
	}

	return turn;
}

int main(){
	float ch[3][12]={
		{0,0,0,0,0,0,0,31.3,35.5,58.7,49.6,55.5},
		{59.8,54.9,33.1,38.2,26.6,20.5,27.8,38.5,41.5,44.7,38.1,41.5},
		{34.9,36.4,47.5,37.9,30.6,23.4,26.6,34.3,0,0,0,0}
	};
	int year=2014,years=0,mouth=1,mouths=0;
	_Bool turn = 1;	
	
	for( years = 0; years<3; years++ ){
		for( mouths = 0; mouths <12; mouths++ ){
			if( *(*(ch + years) + mouths) ){
				printf("%d年 %2d月: ",year,mouth);
				stars( (int)( *(*(ch + years) + mouths) - 19 ) );
				putchar('\n');
			}
			mouth++;
		}
		year++;
		mouth = 1;
		
	}
	return 0;
}
