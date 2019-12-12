#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void test(char * str);
void test1(char str[]);

int main (int argc, char *grav[])
{

	char *a = "abcd";
	char b[] = "abcd";
	printf("%s %s\n", a, b);
	
	test(b);
	test1(a);

	//a[0] = a[1]; //错误
	//printf("%s", a);
	b[0] = b[1];
	printf("交换后：%s\n", b);

	a = b;
	printf("%s\n", a);
	//b = a; //错误
	//printf("%s\n", b);

	//gets(a); //错误
	//gets(b); //提示
	
	printf("%s %p\n", "abcd", "abcd");
	printf("%s %p %p\n", a, a, &a);
	printf("%s %p %p\n", b, b, &b);

	char *c = "cccc";
	char d[20] = "dddd";
	strcat(d, c);
	printf("%s\n", d);
	strcat(d, "aaa");
	printf("%s\n", d);
	
	return 0;
}

void test(char * str)
{
	printf("%s\n", str);
}

void test1(char str[])
{
	printf("%s\n", str);
}
