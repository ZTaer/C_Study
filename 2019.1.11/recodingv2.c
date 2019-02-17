#include <stdio.h>
#include <string.h>

#define NUM 128

int main()
{
        int ch, i, j = 0, max = 0;
        int input_num = 0;
        int ascii[NUM] = {0};
        char count[NUM] = "";

        printf("请输入英文文本：");
	// 小甲鱼使用的是"电灯泡"算法( 创建128个假灯泡,键盘输入到那个对应的ascii,点亮对应位置的灯泡变为真 ),对应的位置就算重复也只是相同的地方变为真,没有点亮的为假,所以能有效的防止重复发生
        while ((ch = getchar()) != '\n')
        {
                ascii[ch]++; // 字符对应的ASCII码加1
                input_num++;
        }
	
        for (i = 0; i < NUM; i++)
        {
                if (ascii[i])
                {
			printf("%d\n",ascii[i]);
                        count[j++] = i;
                        if (ascii[i] > ascii[max])
                        {
                                max = i;
                        }
                }
        }

        printf("你总共输入了%d个字符，其中不同的字符个数有%d个。\n", input_num, strlen(count));
        printf("它们是：%s\n", count);
        printf("出现次数最多的字符是\'%c\'，它总共出现了%d次。\n", max, ascii[max]);

        return 0;
}
