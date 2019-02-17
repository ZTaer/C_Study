#include <stdio.h>

int main()
{
        int i, j;

        for (i = 0; i != 10, j != 10; i++) // 内循环完毕后,j不符合条件
        {
		printf("i=%d,j=%d\n",i,j);
                for (j = 0; j < 10; j++)
                {

			printf("i=%d,j=%d\n",i,j);
                        putchar('A');
			putchar('\n');
                }
        }

        putchar('\n');

        return 0;
}
