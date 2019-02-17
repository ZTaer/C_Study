#include <stdio.h>
#define Max 100

int main(){
	int wid=100,hig=100;
	char result[wid][hig];
	char ch[Max]; // 接收字符串
	char idenStr; // 分隔符
	int i=0,x=0,y=0,yMax=0;
	
	printf("输入分隔符: ");
	idenStr = getchar();
	getchar();

	printf("输入字符串: ");	
	fgets(ch,Max,stdin);
	
	// 字符串处理
	while( ch[i] != '\0' ){
		if(ch[i] == idenStr){
			if( (i>0) && (ch[i-1] != idenStr) ){
				result[x][y+1] = '\0';
				x++;
				y=0;
			}
		}
		else if( ch[i] != idenStr ){
			result[x][y] = ch[i];
			y++;
		
			// 记录y的最大值
			if( y > yMax ){
				yMax = y;
			}
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
