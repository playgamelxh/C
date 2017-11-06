#include <stdio.h>

int main(int argc, char *argv[])
{
	char a[5] = {'A', 'B', 'C', 'D', 'E'};
	char (*p3)[5] = &a;
	//char (*p4)[5] = a;

	printf("%p %s %c\n", p3, *p3, *p3[0]);
	printf("%p\n", p3+1);

	int b[5][5];
	int (*p)[4];
	p = b;
	printf("%p %p\n", &b[4][2], &p[4][2]);
	printf("%p %d\n", &p[4][2]-&b[4][2], &p[4][2]-&b[4][2]);

	return 0;
}
