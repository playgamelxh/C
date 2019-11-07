#include "common_sort.h"

void merge_sort(int arr[], int len, int start, int end);

int main(int argc, char *argv[])
{

	int arr[100];
	int len = input_num(arr);
	merge_sort(arr, len);
	printf("归并排序后：");
	print_r(arr, len, 0, len-1);
	
	return 0;
}

void merge_sort(int arr[], int len, int start, int end)
{
	if (end - start > 1) {
		merge_sort(arr, len, start, start+(int)(end-start)/2);
		merge_sort(arr, len, start+(int)(end-start)/2+1, end);
	} else if(end - start == 1) {
		if (arr[start] > arr[end]) {
			arr[start] = arr[start]^arr[end];
			arr[end] = arr[start]^arr[end];
			arr[start] = arr[start]^arr[end];
		}
	} else {
		
	}
}
