#include <Servo.h>

// 为了方便调用，我们为控制左右电机
// // 前进后退的数字引脚进行了宏定义
#define LEFT_MOTO_GO    8 
#define LEFT_MOTO_BACK    9
#define RIGHT_MOTO_GO    10
#define RIGHT_MOTO_BACK    11
// ...省略部分代码...
void loop(){
	char ch; // 用于接受命令
	printf('g' 表示前进；'b' 表示后退；'r' 表示右转；'l' 表示左转);
	scanf("%c",&ch);

    	switch(ch){
		case 'g':
			digitalWrite(LEFT_MOTO_GO,HIGH);
			digitalWrite(RIGHT_MOTO_GO,HIGH);
			digitalWrite(LEFT_MOTO_BACK,LOW);
			digitalWrite(RIGHT_MOTO_BACK,LOW);
			break;
		case 'b':
			digitalWrite(LEFT_MOTO_GO,LOW);
			digitalWrite(RIGHT_MOTO_GO,LOW);
			digitalWrite(LEFT_MOTO_BACK,HIGH);
			digitalWrite(RIGHT_MOTO_BACK,HIGH);
			break;
		case 'r':
			digitalWrite(LEFT_MOTO_GO,HIGH);
			digitalWrite(RIGHT_MOTO_GO,LOW);
			digitalWrite(RIGHT_MOTO_BACK,LOW);
			digitalWrite(LEFT_MOTO_BACK,LOW);
			break;
		case 'l':
			digitalWrite(RIGHT_MOTO_GO,HIGH);
			digitalWrite(RIGHT_MOTO_BACK,LOW);
			digitalWrite(LEFT_MOTO_GO,LOW);
			digitalWrite(LEFT_MOTO_BACK,LOW);
			break;
		default:
			digitalWrite(LEFT_MOTO_GO,LOW);
			digitalWrite(LEFT_MOTO_BACK,LOW);
			digitalWrite(RIGHT_MOTO_GO,LOW);
			digitalWrite(RIGHT_MOTO_BACK,LOW);
			break;
	}
     }
