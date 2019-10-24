#include<stdio.h>
#include "common_sort.h"

void insert_sort(int src[], int dest[], int len);

int main(int argc, char *argv[])
{
	int a[100];
	int len = input_num(a);
	print_r(a, len);

	printf("插入排序后：");
	int b[100];
	insert_sort(a, b, len);
	print_r(b, len);

	return 0;
}

void insert_sort(int src[], int desc[], int len)
{
	for(int i=0; i<len; i++) {
		//是否插入末尾
		int insert = 1;
		
		//循环
		for(int j=0;j<=i;j++) {
			if(src[i] < desc[j]) {
				//修改标记
				insert = 0;
				//后移
				for(int m=i+1; m>j; m--) {
					desc[m] = desc[m-1];
				}
				//插入数据
                                desc[j] = src[i];	
				break;
			}	
		}

		//插入最后
		if(insert) {
			desc[i] = src[i];
		}
	}	
}
