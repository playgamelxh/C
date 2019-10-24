#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
	char str[100] = "This is malloc";
	char *str1 = NULL;

	printf("%s %s\n", str, str1);
	
	str1 = (char *)malloc(sizeof(char)*100);
	if (str1 == NULL) {
		printf("%s\n", "malloc failed");
	} else {
		printf("%s %s\n", "malloc success", str1);
	}
	free(str1);
	
	char *str2 = (char *)calloc(100, sizeof(char));
	if (str2 == NULL) {
		printf("calloc failed\n");
	} else {
		printf("calloc success %s\n", str2);
	}
	free(str2);
	
	return 0;
}
