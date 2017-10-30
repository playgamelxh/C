#include<stdio.h>
#include<string.h>

int main(int argc, char*argv[])
{
	char str[20]="Hello world";
	printf("%s %d %p %p %p\n", str, strlen(str), str, &str[0], str[0]);

	int i=0,len=strlen(str);
	for(i;i<len;i++){
		printf("%c\n", str[i]);
	}

	char * s;
	s = "China";
	printf("%p %s\n", s, s);

	char a[] = "hello";
	char *ss = a;
	printf("%s\n", ss);
	for(i=0;i<strlen(a);i++) {
		//only one
		//printf("%c\n", ss[i]);
		printf("%c\n", *(ss+i));
	}
	
	char *aa [] = {"China", "French", "America", "German"};
	printf("%p, %p, %p, %p\n", aa[0], aa[1], aa[2], aa[3]);
	printf("%s %s %s %s\n", aa[0], aa[1], aa[2], aa[3]);

	char ** st = aa;
	printf("st: %s %s %c\n", *st, aa[0], *(*st++));
	printf("st: %s %s %c\n", *st, aa[0], *(*st++));

	int j = 0;len = strlen(aa[0]);
	printf("%d %d %c %c\n", strlen(aa[0]), strlen(aa[1]), *aa[0], *aa[0]++);
	//int j = 0;len = strlen(aa[0]);
	while(*aa[0] != '\0') {
		printf("%s %c\n", aa[0], *(aa[0]++));
	}
	for(j=0;j<len+1;j++) {
		printf("%d %c\n", len, *aa[0]--);
	}
	
	char *abc = aa[0];
	printf("%s\n", abc);

//	while (argc-->0) {
//		printf("%s\n", *argv++);
//	}
	for(i=1;i<argc;i++) {
		printf("%s %c %c\n", argv[i], *argv[i]++, *argv[i]++);
	}



	//unsigned long tmp;
	//tmp = 0x12345678;
	//printf("tmp address:0x%081X\n", &tmp);



	return 0;
}
