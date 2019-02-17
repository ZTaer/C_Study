#include <stdio.h>

int main()
{
        float fah,cel;
        printf("请输入摄氏度：");
        scanf("%f", &cel);
        fah = 9/5.0*cel+32; // 9/5 = 1 而 9/5.0 = 1.8
        printf("转换为华摄度是：%.2f\n",fah);

        return 0;
}
