#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char * reverse_str(char * str);

int main(int argc, char ** argv)
{
	//printf("Hello World!");

	char * str = "Hello World, I'm Tom.";
	printf("原串:%s\n", str);

	char * dStr = reverse_str(str);
	printf("处理后:%s\n", dStr);
	
	return 0;	
}

char * reverse_str(char * str)
{
	int len = strlen(str);
	printf("字符串长度:%d\n", len);
	char c = '\0';
	char *temp = (char *)malloc(sizeof(char)*20);
	
	printf("初始化前:%s\n", temp);
	while (*temp != '\0')
	{
		*temp++ = '\0';
	}
	//temp = "";
	printf("初始化后:%s\n", temp);

	int i = 0;
	int j = 0;
	char space = ' ';
	while (i<len)
	{
		//printf("字符:%c\n", str[i]);
		if (str[len-1-j] == ' ')
		{
			sprintf(temp, "%s%c", temp, space);
			j++;
			//后面的需要后移
			int k = len;
			while (k > len-i-1)
			{
				str[k-1] = str[k-1-j];
				k--;
			}
			//前面增加字符
			k = 0;
			while(k < j)
			{
				str[i+k] = temp[k];
				k++; 
			}
			j = 0;
			sprintf(temp, "");
		} else {
			//printf("%c\n", str[len-1-j]);
			sprintf(temp, "%c%s", str[len-1-j], temp);
			printf("字符串连接:%s\n", temp);
			j++;
		}
		i++;
	}

	return str;
}
