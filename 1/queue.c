#include <stdio.h>
#include <string.h>
#include <malloc.h>

//定义队列的节点
struct node
{
	int l;
	int c;
	struct node * next;
};

//定义队列
struct queue
{
	struct node * head;	//队列头
	struct node * end;	//队列尾
};

//初始化队列
void initQueue(struct queue * queue)
{
	queue->head = NULL;
	queue->end = NULL;
}

//入队列
void push(struct queue * queue, struct node * node)
{
	//如果队列为空
	if (NULL == queue->head) {
		queue->head = node;
		queue->end = node;
	} else {
		queue->end->next = node;
		queue->end = node;
	}
}

//出队列
struct node *  pull(struct queue * queue)
{
	if (NULL != queue->head->next) {
		queue->head = queue->head->next;
	}
	return queue->head;
}

int main(int argc, char * argv[])
{
	struct queue q;
	initQueue(&q);

	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 , 10};
	int i = 0;
	for (i;i<=sizeof(a)/sizeof(int)-1;i++) {
		struct node *n = (struct node *)malloc(sizeof(struct node));
		n->next = (struct node*)malloc(sizeof(struct node));
		n->l = a[i];
		n->c = a[i];
		n->next = NULL;
		push(&q, n);
	}
	while(NULL != q.head->next) {
		printf("%d %d\n", q.head->l, q.head->c);
		q.head = q.head->next;
	}
}
