#include <stdio.h>
#define Max 100

int main(){
	int wid=100,hig=100;
	char result[wid][hig];
	char ch[Max];
	int i=0,x=0,y=0,yMax=0;

	printf("input: ");
	
	// 字符串处理
	fgets(ch,Max,stdin);
	while( ch[i] != '\0' ){
		if(ch[i] == ' '){
			if( (i>0) && (ch[i-1] != ' ') ){
				result[x][y+1] = '\0';
				x++;
				y=0;
			}
		}
		else if( ch[i] != ' ' ){
			result[x][y] = ch[i];
			y++;
		
			// 记录y的最大值
			yMax = (y>yMax) ? y : yMax;
		}
		i++;
	}

	// 改变数组大小
	hig = (yMax+1);
	wid = (x+1);

	// 输出区
	printf("处理结果放到result[%d][%d]数组中\n依次打印为:\n",wid,hig);
	for(i=0;i<wid;i++){
		printf("%s\n",result[i]);
	}	

	return 0;
}
