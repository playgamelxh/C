#include <stdio.h>

int main(int argc, char * argv[])
{
	union check
	{
		int i;
		char ch;
	} c;
	c.i = 1;
	printf("%d\n", c.ch == 1);
	
	return 0;
}
