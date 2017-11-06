#include<stdio.h>

void fun(char a[10])
{
	int i = sizeof(a);
	char c = a[3];
	printf("%d %c\n", i, c);
}

int main(int argc, char * argv[])
{
	char b[10] = "abcdefg";
	fun(b);
	
	return 0;
}
