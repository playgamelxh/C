#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse_str(char str[], int start, int end);

int main(int argc, char * argv[])
{
	//printf("Hello World!");

	char str[100] = "Hello World, I'm Tom.";
	//char *str = "Hello World, I'm Tom.";
	printf("原串:%s %lu\n", str, strlen(str));

	reverse_str(str, 0, strlen(str)-1);
	printf("整体前后翻转:%s\n", str);
	
	int m=0,n=0;
	int strLen = strlen(str);
	while(n < strLen) {
		if (str[n] == ' ') {
			reverse_str(str, m, n-1);
			m = n+1;
		}
		n++;
	}	
	reverse_str(str, m, n-1);
	printf("单个词前后翻转:%s\n", str);
	return 0;	
}

void reverse_str(char str[], int start, int end)
{
	if (start >= 0 && end < strlen(str)) {
		while(start < end) {
			//printf("%c %c\n", str[start], str[end]);
			//交换
			str[start] = str[start]^str[end];
			str[end] = str[start]^str[end];
			str[start] = str[start]^str[end];
			
			start++;
			end--;
		}
	}	
}
