#include <stdio.h>

int main(){
	
	char *p[5]={ // 数组每一个元素为一个内存地址( []括号比*优先级高 )
		"1234",
		"22222",
		"adsad"
	};
	int i;
	for(i=0;i<3;i++){
		printf("%s\n",p[i]);
	}

	return 0;
}
