#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct node {
	int i;
	struct * node parent;
	struct * node left;
	struct * node right;
};

//create binary tree
void createBinaryTree(struct *node parent, int depth, int maxDepth);
//get rand number
int getRand(int min, int max);

int main(int argc, char * argv[])
{
	printf("%d %s\r\n", argc, argv[1]);
	int num = atoi(argv[1]);
	int i = 0;
	for (; i<num; i++) {
		printf("%d\r\n", getRand(0, i));		
	}

	//create binary tree
	int depth = 3;
	struct *node head = (node *)malloc(sizeof(struct node));
	createBinaryTree(head, 1, depth);
}


//get rand number
int getRand(int min, int max)
{
	int num = max-min > 0 ? max-min : 1;
	srand((unsigned)time(NULL));
	return rand()%num + min;
}
//create binary tree
void createBinaryTree(struct *node parent, int depth, int maxDepth)
{
	parent->i = getRand(1, 4);
	if (depth < maxDepth) {
		//left
		struct *node left = (node *)malloc(sizeof(struct node));
		parent->left = left;
		createBinary(left, depth+1, maxDepth);
		//right
		struct *node right = (node *)malloc(sizeof(struct node));
		parent->right = right;
		createBinary(left, depth+1, maxDepth);
	}
}




