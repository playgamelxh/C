#include <stdio.h>

int main(int argc, char * argv[])
{
	int i;
	i = 3;
	printf("%d\n", (++i)+(++i)+(++i));
	i = 0;
	printf("%d\n", (i++,i++,i++,i++));
	i = 0;
	printf("%d\n", (i++)+(i++)+(i++)+(i++));
	i = 0;
	printf("%d\n", ++i+(++i));
}
