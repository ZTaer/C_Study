#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getHeartRate(int year){
	int top,bottom,space;
	top = 220 -year;
	bottom = (int)(top*0.75);
	space = top - bottom + 50;
	srand((unsigned int) (time(NULL))); // 以时间为随机种子的变换srand值,从而达到随机数字的目的
	return rand()%space+130; // rand()函数生成随机数,%11代表0-10,( rand()函数受srand()函数影响 )
}

int playSound(int bmp){
	if(bmp>=170){
		printf("切换为'带劲'的音乐!\n");
		return 1;
	}
	else if(bmp<=130){
		printf("切换为'舒缓'的音乐!\n");
		return 1;
	}
	else{
		printf("播放默认音乐!\n");
	}
}
