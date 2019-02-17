#include <stdio.h>
#include "ssebtr1.h" // 读取当前目录文
#include <unistd.h> // 睡眠函数在这里

int main(){
	int year,top_heart,i,bmp=150;
	printf("请输入年龄: ");
	scanf("%d",&year);
	top_heart = 220 - year;	
	playSound( bmp );
	printf("等待5min...\n");
	sleep(3); // 睡5秒( 暂停使用线程3秒,让给其它程序使用 )
	i = getHeartRate( year );
	printf("当前心率: %d\n",i);
	sleep(1); // 方便查看,不用在意它
	if(i>=top_heart){
		printf("请马上停止跑步,否则会GG...!!!\n");
	}
	else if(i>=(int)(top_heart*0.85) && i < top_heart){
		printf("请漫步走!\n");
		playSound( bmp = bmp - 20 );
	}
	else if(i<=(int)(top_heart*0.75)){
		printf("Come on 请加快节奏!\n");
		playSound( bmp = bmp + 20 );
	}
	else{
		playSound( bmp );
	}
	sleep(1);
	printf("END!!!\n");
	return 0;
}
