#include<stdio.h>
#include<string.h>

void reverse(char *str)
{
	int i = 0;
	for(i;i<strlen(str);i++) {
		if(*(str+i) == '\0') {
			break;
		}
	}
	//get length
	i = strlen(str);

	printf("%d\n", i);
	int j = 0;
	char c = 'c';
	for(j;j<(i-1-j);j++) {
		c = *(str+j);
		*(str+j) = *(str+i-1-j);
		*(str+i-1-j) = c;	
	}
	printf("%s\n", str);
}

int main(int argc, char *argv[])
{
	char str[100];
	scanf("%s", str);
	printf("%s\n", str);
	reverse(str);

	return 0;
}
