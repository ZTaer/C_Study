#include <stdio.h>

int main(){
	
	int offset=0;
	char ch,hc;

	printf("偏移量(整数): ");
	scanf("%d",&offset);
	getchar();
	if(offset > 26){ 
		offset = 26;
	}
	else if (offset < (-26)){
		offset = -26;
	}
	
	printf("请输入明文(字母数字): ");
	while((ch=getchar()) != '\n'){
		if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ){
			hc = ch + offset;
			if( ( hc > 'z' ) && (ch >= 'a' && ch <= 'z')){ 
				hc =  'a' + (hc - 'z' -1);
			}
			else if( ( hc < 'a') && (ch >= 'a' && ch <= 'z')){
				hc = 'z' - ('a' - hc -1);
			}
			else if( ( hc > 'Z' ) && (ch >= 'A' && ch <= 'Z')){
				hc =  'A' + (hc - 'Z' -1);
			}
			else if( ( hc < 'A') && (ch >= 'A' && ch <= 'Z')){ 
				hc = 'Z' - ('A' - hc -1);
			}

		}
		else{
			hc = ch; //注意,非字母数字保持不变
		}

		printf("%c",hc);
	
	}

	return 0;
}
