#include <stdio.h>

int main(int argc, char * argv[])
{
	int i = 0;
	printf("%p\n", &i);
	//int *p = (int *)0x12ff7c  //no permissions
	//*p = 0x100;
	int a[5] = {1,2,3,4,5};
	int *ptr = (int *)(&a+1);
	printf("%d %d\n", *(a+1), *(ptr-1));
	printf("%p %p\n", a, &a);
	printf("%p %p\n", a+1, &a+1);

	char *s[10] = {"a6sef", "ewsfe", "werefe"};
	printf("%c\n", *(s[1]+1));

	return 0;
}
