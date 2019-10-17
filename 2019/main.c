#include<stdio.h>
#include<string.h>

int main(int argc, char * argv[])
{
	printf("%d\n", argc);
	for(int i=0;i<argc;i++) {
		printf("%s\n", argv[i]);
		for(int j=0;j<strlen(argv[i]);j++) {
			printf("%c ", argv[i][j]);
		}
		printf("\n");
	}

}
