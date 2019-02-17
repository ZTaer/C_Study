#include <stdio.h>
#include <string.h>

int main()
{
        char str1[] = "love";
        char str2[] = "FishC";
	int a;
	//a = strlen(str1)-strlen(str2);
        if ((a = strlen(str1) - strlen(str2) ) < 0)
        {
                printf("字符串%s比字符串%s短！\n", str1, str2);
        }
        else
        {
                printf("字符串%s比字符串%s长！\n", str1, str2);
        }

        return 0;
}
