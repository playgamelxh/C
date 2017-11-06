#include <stdio.h>
#include <assert.h>

int my_strlen(char * strDest)
{
	assert(NULL != strDest);
	if ('\0' == *strDest)
	{
		return 0;
	} else {
		return (1+my_strlen(++strDest));
	}
}

int my_strlen1(char * strDest)
{
	return *strDest ? 1+my_strlen1(++strDest) : 0;
}


int main(int argc, char * argv[])
{
	char s[] = "abcdefg";
	printf("%d\n", my_strlen(s));
	printf("%d\n", my_strlen1(s));

	return 0;
}

