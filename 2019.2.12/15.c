#include <stdio.h>

int main(){
	struct test{
		int m1;
		char m2;
		float m3;

		union uu{
			char u1[5];
			int u2[2];
		}
		ua;
	}
	myaa;

	printf("%d",sizeof(struct test));
	return 0;
}
