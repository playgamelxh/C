#include<stdio.h>
#include<string.h>
#include<malloc.h>

struct student {
	char *name;
	int score;
} stu, *pstu;

int main(int argc, int * argv[])
{
	printf("%d\n", sizeof(stu));

	struct student student1;
	student1.name = (char *)malloc(20*sizeof(char));
	strcpy(student1.name, "lvxh");
	student1.score = 100;
	free(student1.name);

	struct student *student2 = (struct student*)malloc(sizeof(struct student));
	student2->name = (char *)malloc(20*sizeof(char));
	strcpy(student2->name, "lvxh");
	student2->score = 100;
	free(student2->name);
	free(student2);

	return 0;
}
