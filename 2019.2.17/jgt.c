#include <stdio.h>

int main(){
	// 第一种,创建结构体与初始化值
	struct Book{
		char title[128];
		char name[128];
		float money;
		unsigned int time;
		char publisher[128];
	} book = { // 注意对齐
		"<__OO7__>",
		"oo7",
		7.00,
		20190707,
		"未知出版社",
	};

	// 第二种
	struct Car{
		char name[128];
		float money;
	};

	struct Car car={
		.name = "oo8", // 指定初始化( 不需对齐 )
	};

	printf("%s",book.name); // 结构体内容索引( 利用,号运算符 )

	return 0;
}
