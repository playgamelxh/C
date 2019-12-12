#include<stdio.h>
#include "common_sort.h"

void insert_sort(int src[], int dest[], int len);

void insert_sort1(int arr[], int len);

int main(int argc, char *argv[])
{
	int a[100];
	int len = input_num(a);
	print_r(a, len);

	printf("O(n)空间申请的插入排序后：");
	int b[100];
	insert_sort(a, b, len);
	print_r(b, len);

	printf("O(1)空间申请的插入排序");	
	insert_sort1(a, len);
	print_r(a, len);	

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

void insert_sort1(int arr[], int len)
{
	for(int i=1; i<len; i++) {
		for(int j=i-1; j>=0; j--) {
			if (arr[j+1] < arr[j]) {
				arr[j+1] = arr[j+1]^arr[j];
				arr[j] = arr[j+1]^arr[j];
				arr[j+1] = arr[j+1]^arr[j];
			} else {
				break;
			}
		}	
	}
}



