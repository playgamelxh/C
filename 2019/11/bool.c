#include<stdio.h>

typedef int bool;

#if !defined true
#define true 1
#endif

#if !defined false
#define false 0
#endif

#ifndef true
#define true 1
#endif

#ifdef test
#error Test Error
#endif

#define add(a,b) a+b

//#define STR1(s) s
#define STR(s) #s

#define CON(a, b) a##b


int main(int argc, char * argv[])
{
	bool a = true;
	bool b = false;
	printf("%d %d\n", a, b);
	
	printf("%d\n", add(a, b));	

	printf("当前文件：%s\n", __FILE__);	
	printf("当前函数：%s\n", __FUNCTION__);
	printf("当前行号：%d\n", __LINE__);
	printf("当前编译时间：%s %s\n", __DATE__, __TIME__);

	//printf("普通宏定义字符串：%s %s %s\n", STR1(abc), STR1('abc'), STR1("abc"));
	printf("宏定义字符串：%s %s %s\n", STR(abc), STR('abc'), STR("def"));

	printf("宏定义数字连接：%d\n", CON(12, 34));

	char *abcd = "test";
	printf("%s\n", CON(ab, cd));
	
}
