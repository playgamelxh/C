#include "common_sort.h"

void merge_sort(int arr[], int len, int start, int end);

int main(int argc, char *argv[])
{

	int arr[100];
	int len = input_num(arr);
	merge_sort(arr, len, 0, len-1);
	printf("归并排序后：");
	print_r(arr, len);
	
	return 0;
}

void merge_sort(int arr[], int len, int start, int end)
{
	if (end - start > 1) {
		int mid = start+(int)(end-start)/2;
		merge_sort(arr, len, start, mid);
		merge_sort(arr, len, mid+1, end);

		int i = start;
		int m = mid > end ? end : mid ;
		int j = mid+1 > end  ? end : mid+1;
		while(1) {
			if ((i <= m) && (j <= end)) {
				if (arr[i] > arr[j]) {
					int temp = arr[j];
					for(int t=j; t>i; t--) {
						arr[t] = arr[t-1];
					}
					arr[i] = temp;
					i++;
					m++;
					j++;
				} else {
					i++;
				}
			}else{
				break;
			}
		}
	} else if(end - start == 1) {
		if (arr[start] > arr[end]) {
			arr[start] = arr[start]^arr[end];
			arr[end] = arr[start]^arr[end];
			arr[start] = arr[start]^arr[end];
		}
	} else {
		
	}
}
