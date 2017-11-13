#include <stdio.h>
#include <malloc.h>

struct node {
	int i;
	int j;
	struct node* next;
};

struct stack {
	struct node * top;
};

void push(struct stack *stack , struct node * node)
{
	node->next = stack->top;
	stack->top = node;
	//printf("push:%d %d\n", node->i, node->j);
}

struct node * pull(struct stack *stack)
{
	struct node * p;
	if (NULL != stack->top) {
		p = stack->top;
		if (NULL != stack->top->next) {
			stack->top = stack->top->next;
		} else {
			stack->top = NULL;
		}
		return p;
	} else {
		return NULL;
	}
}

int isEmpty(struct stack *stack)
{
	if (NULL == stack->top) {
		return 0;
	} else {
		return 1;
	}
}

void clearStack(struct stack * st)
{
	while(isEmpty(st)) {
		struct node *n = pull(st);
		free(n);
	}
	free(st->top);
}

int main(int argc, char * argv[])
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
	
	struct stack * st = (struct stack *)malloc(sizeof(struct stack));
	st->top = (struct node *)malloc(sizeof(struct node));
	st->top = NULL;

	int i=0;
	for(i;i<=sizeof(a)/sizeof(int)-1;i++) {
		struct node *n = (struct node *)malloc(sizeof(struct node));
		n->next = (struct node *)malloc(sizeof(struct node));
		n->i = a[i];
		n->j = a[i];
		n->next = NULL;
		push(st, n);
	}
	while(isEmpty(st)) {
		struct node *n = pull(st);
		printf("%d %d\n", n->i, n->j);

		free(n);
	}

	clearStack(st);
}






