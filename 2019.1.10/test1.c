#include <stdio.h>
#include <string.h>
int main(){
	
	char str[]="hello";
	char str2[]="how are you";
	char str3[] = "welcometo";
	char str4[] = "OK";
	// 普通复制好事strcpy()函数
	strcpy( str2,str ); // str内容复制到str2里( 注意str2长度>str才可以,否则会出现溢出错误 )
	printf("%s\n",str2);

	// 防溢出复制方法strncpy()函数;
	strncpy( str4,str3,strlen(str3) ); // strncpy( a,b,c )将b的内容复制到a,在由c决定复制几个字符.
	str4[ strlen(str3) ] = '\0'; // 因为strncpy函数不主动加入'\0'所以要手动在末尾加入.
	printf("%s\n",str4);
	printf("%s",str3);
	
	


	return 0;
}
