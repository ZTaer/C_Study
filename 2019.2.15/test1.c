#include <stdio.h>

int main()
{
        int num = 520;
	void *p; // 空类型不能解引用
	int *s;
	
	p = &num; // 空类型只能存储内存地址,不能别解引用
	s = p; // 传递内存地址

        printf("%d\n",*s);

        return 0;
}

