#include <stdio.h>
#include <string.h>
#define Max 1024


int main(){
	char a[Max],b[Max];
	char *p;
	int i=0,num,end,stop=0,g;
	p = a;

	printf("1_input: ");
	fgets( a,Max,stdin );
	printf("2_input: ");
	fgets( b,Max,stdin );
	printf("保存数: ");
	scanf("%d",&num);
	
	end = strlen(p)-1; // 赋值开始位置
	while( stop<num ){ // 指定循环次数
		if(b[i] >=0 ){
			p[ end+i ] = b[i];
			stop +=1;
			i++;
			continue;
		}
		else if( b[i] < 0 ){ // 中文字体赋值
			for(g=0;g<3;g++){
				p[ end+i ] = b[i];
				i++;
			}
			stop +=1; // 指定长度+1
			continue;
		}
	}
	printf("%d",i);
	p[end+i] = '\0'; // 字符串加入结束符
	
	for(i=0;p[i] != '\0';i++){
		printf("%d---\n",p[i]);
	}

	printf("%s\n",p);	
	return 0;
}
