#include "common_sort.h"

void shell_sort(int arr[], int len);

int main(int argc, char *argv[])
{
	int arr[100];
	int len = input_num(arr);
	
	printf("希尔排序后：\n");
	shell_sort(arr, len);
	print_r(arr, len);

	return 0;
}

void shell_sort(int arr[], int len)
{
	for(int step = len>>1; step>0; step = step>>1) {
		for(int i=step; i<len; i++) {
			for(int j = i-step; j>=0; j -= step) {
				if (arr[i] < arr[j]) {
					arr[i] = arr[i]^arr[j];
					arr[j] = arr[i]^arr[j];
					arr[i] = arr[i]^arr[j];
				}
			}
		}
	}
}
