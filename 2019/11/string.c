#include<stdlib.h>
#include<stdio.h>
#include<string.h>

char * reverse_str(char *str, int start, int end);

int main(int argv, char ** argc)
{
	/* //长度 需要预留
	char a[5] = "abcd\0";
	printf("%s %d\n", a, (int)strlen(a));
	char b[] = "abcdef";
	printf("%s %lu\n", b, strlen(b));
	//遍历
	int len = strlen(b);
	int i = 0;
	while(i++<len)
	{
		printf("%c\n", b[i]);
	}	
	//字符串拼接
	//strcat(b, a);
	//printf("拼接后:%s\n", b);
	char c[30] = "ssaaabbb";
	printf("%s\n", c);
	strcat(c, a);
	printf("%s\n", c);
	*/
	char str[100] = "Hello World! I'm is Tom.";
	printf("%s %d\n", str, (int)strlen(str));
	if (str[0] == 'H') {
		printf("is H\n");
	}
	//字符拼接字符串，参数类型为char *
	/*char d[2] = "o\0";
	strcat(str, d);
	printf("%s\n", str);
	*/

	//前后颠倒	
	int i = 0;
	int j = strlen(str)-1;
	while(i < j)
	{
		//字符交换
		/*char t = str[i];
		printf("%d %c\n", i, t);
		str[i] = str[j];
		str[j] = t;*/
		//字符交换异或运算
		str[i] = str[i]^str[j];
		str[j] = str[i]^str[j];
		str[i] = str[i]^str[j];
		i++;
		j--;
	}	
	printf("%s\n", str);

	printf("%s\n", reverse_str(str, 0, strlen(str)-1));	
	printf("%s\n", str);
	reverse_str(str, 0, strlen(str)-1);
	printf("%s\n", str);
	//单词内颠倒
	int m=0,n=0;
	while(n<strlen(str))
	{
		if(str[n] == ' ') 
		{
			//颠倒单词
			reverse_str(str, m, n-1);
			m = n+1;
		}
		n++;	
	}	
	reverse_str(str, m, n-1);
	printf("%s\n", str);
	return 0;
}

char * reverse_str(char *str, int start, int end)
{
	if (start < 0 || end < 0 || start >= end)
	{
		return str;
	}
	while(start < end)
	{
		str[start] = str[start]^str[end];
		str[end] = str[start]^str[end];
		str[start] = str[start]^str[end];

		start++;
		end--;
	}
	return str;
}
