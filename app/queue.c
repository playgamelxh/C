#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "../lib/queue.h"

int main(int argc, char * argv[])
{
	struct queue *q = (struct queue*)malloc(sizeof(struct queue));
	initQueue(q);
}
