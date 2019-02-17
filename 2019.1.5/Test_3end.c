#include <stdio.h>
int main(){
	
	int target = 1234,invert=0;

	 while (target)
                {
                        invert = invert * 10 + target % 10;
                        target = target / 10;
                }

	 printf("%d",invert);
	 return 0;
}v
