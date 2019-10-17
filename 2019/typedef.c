#include<stdio.h>

//定义新的类型名
typedef int bool;

//为自定义数据类型(结构体、共同体和枚举类型)定义简洁的名称
typedef struct Point {
	int x;
} myPoint;

//为数组定义简洁名称
typedef int INT_ARR_100 [100];
typedef char CHAR_ARR_100 [100];

//为指针定义简洁名称
typedef char * PCHAR;

int main(int argc, char *argv[])
{
	bool true=1,false=0;
	printf("%d %d\n", true, false);

	//使用全称
	struct Point p1;
	p1.x = 1;	
	printf("%d\n", p1.x);	

	//使用简称
	myPoint p2;
	p2.x = 2;
	printf("%d\n", p2.x);

	INT_ARR_100 arr = {1, 2, 3, 4};
	printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
	CHAR_ARR_100 str = "abcdefg";
	printf("%s\n", str);
	
	PCHAR a = "test char*";
	printf("%s\n", a);

	return 0;
}
