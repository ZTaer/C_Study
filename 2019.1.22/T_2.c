#include <stdio.h>

int main(){
	
	float ch[3][12]={
		{0,0,0,0,0,0,0,31.3,35.5,58.7,49.6,55.5},
		{59.8,54.9,33.1,38.2,26.6,20.5,27.8,38.5,41.5,44.7,38.1,41.5},
		{34.9,36.4,47.5,37.9,30.6,23.4,26.6,34.3,0,0,0,0}
	};
	int year,years,mouth;
	_Bool findTurn = 1;	
	// printf("%.2f",ch[1][4]);	
	
	printf("请输入查询(年-月): ");
	scanf("%d-%d",&year,&mouth);
	
	// 格式化参数	
	if( year == 2014 ){
		years = 0;
	}
	else if(year == 2015){
		years = 1;
	}
	else if(year == 2016){
		years = 2;
	}
	else{
		findTurn = 0;
	}
	mouth--;
	
	// 处理区
	if( ( *(*(ch + years) + mouth) ) && (findTurn) ){
		printf("%d年%d月广州的PM2.5值是: %.2f",year,mouth,*(*(ch+years)+mouth));
	}
	else{
		printf("抱歉,没有收录该年份!");
	}
	return 0;
}
