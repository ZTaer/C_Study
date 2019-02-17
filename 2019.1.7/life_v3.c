#include <stdio.h>
#include <time.h>

int years(int num); // 判断是否为闰年
int year_num( _Bool turn, int year, int mouth ,int day ); // 计算年初或年末天数
int year_day( int begin,int end); // 计算年的总天数
int *input_time(); // 格式化输入,以数组的形式返回输入的年月日


int main(){

	int *time_begin,*time_now,die;
	int year,mouth,day;
	int liveDay,sumDay,dieYear,haveDay; //已经活多少天,从出生到死共多少天,生命结束的那一天,生命剩余多少天
	float schedule; // 已经活着的进度

	// 交互区
	printf("( 例: 1998-02-10 )\n");
	printf("请输入你的生日: ");
	time_begin = input_time();
	
	// 不知道什么原因,time_begin赋值以后也会被后面的input_time函数调用影响,所以才出此下策	
	year = time_begin[0];
	mouth = time_begin[1];
	day = time_begin[2];
	
	printf("请输入今年日期: ");
	time_now = input_time();
	printf("假如你能活到(岁): ");
	scanf("%d",&die);
	getchar();
	
	// 计算区
	dieYear = year + die;
	liveDay = year_day(year,time_now[0]) - year_num(0,year,mouth,day) - year_num(1,time_now[0],time_now[1],time_now[2]);
	sumDay = year_day( year,dieYear ) - year_num(0,year,mouth,day);
       	haveDay = sumDay - liveDay;
	schedule = (liveDay/(sumDay*1.0))*100;

	//显示区
	putchar('\n');
	printf("你已经在这个世界上生存了%d天\n",liveDay);
	sleep(1);
	printf("如果你能活到%d岁,你还剩下%d天\n",die,haveDay);
	sleep(1);
	printf("你已经使用了%.2f\%的生命,请好好珍惜剩下的时间!\n",schedule);
	sleep(1);
		
	return 0;
}



//判断闰年
int years(int num){
	if( (num%4 == 0 && num%100 != 0) || ( num%400 == 0 ) ){
		return 1;
	}
	return 0;
}



//计算今年剩余天数v1.0( 当turn为1时,现在天-计算到年末天数,当turn为0时,现在天-计算到年初天数 )
int year_num( _Bool turn, int year, int mouth, int day){

	int year_rNum = 366,year_r[12]={ 31,29,31,30,31,30,31,31,30,31,30,31 };
	int year_nNum= 365,year_n[12]={ 31,28,31,30,31,30,31,31,30,31,30,31 };
	int result = 0,i;

	if(turn == 1){ // 年尾计算
		if(years(year)){ // 闰年年尾计算
			for(i=(mouth-1); i<12; i++ ){
				result = result + year_r[i];
			}
			result = result - day;
		}
		else{
			for(i=(mouth-1); i<12; i++){
				result = result + year_n[i];
			}
			result = result - day;
		}
	}
	else if(turn == 0){ // 年初计算
		if(years(year)){ // 闰年年初计算
			for(i=(mouth-1); i >= 0; i--){
				result = result + year_r[i];
			}
			result = result - (year_r[(mouth-1)] - day);
		}
		else{
			for(i=(mouth-1); i>=0; i--){
				result = result + year_n[i];
			}
			result = result - (year_n[(mouth-1)] - day);
		}
	}
	else{
		printf("请输入正确格式year_num(turn,year,mouth,day)");
	}
	return result;
}



// 通过年计算天数
int year_day( int begin , int end){
	int year_r=366,year_n=365;
	int i,result=0;
	for(i=begin;i<=end;i++){
		if(years(i)){
			result += year_r;
		}
		else{
			result += year_n;
		}
	}
	return result;
}



// 格式化输入内容
int *input_time(){
	_Bool turn=1;
	char ch;
	int sum=0,tir=0;
	int year,mouth,day;

	static int result_3[3]={0};

	while((ch=getchar()) != '\n'){
		if( ch == '-' ){
			if(sum==0){
				year = tir;
			}
			else if(sum==1){
				mouth = tir;
			}
			tir = 0;
			sum++;
			continue;
		}
		else if(ch>='0'&&ch<='9'){
			tir = tir*10 + ch -'0';
		}
	}
	day = tir;
	tir = 0;
	result_3[0] = year;
	result_3[1] = mouth;
	result_3[2] = day;
	return result_3;
}





