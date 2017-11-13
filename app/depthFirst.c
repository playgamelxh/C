#include <stdio.h>
#include <string.h>
#include <malloc.h>

#include "../lib/queue.h"

int const MAX = 100;

void ppush(struct queue *q, int i, int j, struct node * parent)
{
	struct node *n = (struct node*)malloc(sizeof(struct node));
	n->next = (struct node*)malloc(sizeof(struct node));
	n->l = i;
	n->c = j;
	n->next = NULL;
	push(q, n, parent); 
	printf("push:%d %d\n", i, j);
}

int main(int argc, char * argv[])
{
	int num = 0;
	if (argc >=2) {
		num = atoi(argv[1]);
		if (num > MAX){
			num = MAX;
		}

	}
	int form[MAX][MAX];
	memset(form, 0, sizeof(int)*MAX*MAX);

	struct queue *q = (struct queue*)malloc(sizeof(struct queue));
	initQueue(q);

	int i=0,j=0;
	ppush(q, i, j, NULL);

	while(1) {
		struct node *t;
		if(isEmpty(q) == 0) {
			break;
		} else {
			t = pull(q);
			form[t->l][t->c] = 1;
			printf("pull:%d %d\n", t->l, t->c); 
		}
		//struct node *t = pull(q);
		//if (NULL == t) {
		//	break;
		//} else {
		//	form[t->l][t->c] = 1;
		//	printf("%d %d\n", t->l, t->c);
		//}
		//r
		if((t->c+1 < num) && (form[t->l][t->c+1] == 0)) {
			ppush(q, t->l, t->c+1, t);
			form[t->l][t->c+1] = 1;
		}
		//d
		if((t->l-1 > 0) && (form[t->l-1][t->c] == 0)) {
			ppush(q, t->l-1, t->c, t);
			form[t->l-1][t->c] = 1;
		}
		//l
		if ((t->c-1 >= 0) && (form[t->l][t->c-1] == 0)) {
			ppush(q, t->l, t->c-1, t);
			form[t->l][t->c-1] = 1;
		}	
		//u
		if((t->l+1 < num) && (form[t->l+1][t->c] == 0)) {
			ppush(q, t->l+1, t->c, t);
			form[t->l+1][t->c] = 1;
		}
		//
		if ((t->l >= num-1) && (t->c >= num-1))
		{
			form[t->l][t->c] = 0;
			printf("The router is:\n");
			do{
				printf("%d %d\n", t->l, t->c);
			}while(NULL != t->parent && (t = t->parent));
			printf("The router is Over!\n");
			//break;	
		}
	}

	return 0;
}
