#include <stdio.h>

int main()
{
        int a = 0x12345678;
        char *b = (char *)&a;

	printf("%p\n",a);
	printf("%p\n",*(b+1));
	/*
        if (*b == 0x12)
        {
                printf("大端!\n");
        }
        else
        {
                printf("小端!\n");
        }
	*/
        return 0;
}
