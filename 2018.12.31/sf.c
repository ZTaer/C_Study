#include <stdio.h>

int main(){
	
	int kg , money;
	printf("公斤 ---花费(元)");
	for(kg=1;kg<=20;kg++){
		if(kg == 1){
			money = 23;
		}
		else{
			money += 14;
		}
		printf("  %d --- %d\n",kg,money);
	}

	return 0;
}
