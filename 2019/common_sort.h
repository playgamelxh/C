#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int input_num(int a[])
{
	int num = 0;
	printf("请输入不等于0的整数,输入0，结束输入：\n");
	
	while(1) {
		int temp = 0;
		printf("请输入整数:");
        	scanf("%d", &temp);
		if (temp == 0) {
			break;
		} else {
			a[num] = temp;
			num++;
		}
	}
	return num;
}

void print_r(int a[], int len)
{
	printf("打印数组：");
	for (int i=0; i<len; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}


