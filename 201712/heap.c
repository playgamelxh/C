#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printfArr(int arr[], int length);

// init int array
void initArr(int arr[], int length)
{
	int i=1;
	arr[0] = 0;
	printf("%d\n", RAND_MAX);
	srand((int)time(0));
	for(i;i<=length;i++) {
		arr[i] = 1+(int)(50.0*rand()/(RAND_MAX+1.0));
	}
	printfArr(arr, length);
}

//print arr
void printfArr(int arr[], int length)
{
	printf("arr is:");
	int i = 1;
	for (i;i<length;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//调整堆
void HeapAdjust(int arr[], int current, int length)
{
	int temp = -1;
	int left = 2 * current;
	int right = left + 1;
	//choose left or right  节点左右子节点先比较，判断小的和节点比较
	if (right<=length && arr[right]<arr[left]) {
		left = right;
	}
	//left
	if (left <= length && arr[current] > arr[left]) {
		temp = arr[current];
		arr[current] = arr[left];
		arr[left] = temp;
		//处理调换后的子节点
		HeapAdjust(arr, left, length);
		//处理调换后节点 上一个父节点
		if (current > 1) {
			int next = (current % 2 == 0) ? (current/2) : (current - 1)/2 ;
			HeapAdjust(arr, next, length);
		}
	}
	//printfArr(arr, length);
}

//堆排序
void HeapSort(int arr[], int length)
{
	int i = 1;
	for (i;2*i<=length;i++) {
			HeapAdjust(arr, i, length);
	}
	//printfArr(arr, length);
}

//堆排序输出
void HeapOut(int arr[], int length)
{
	if (length > 1) {
		int temp = arr[1];
		arr[1] = arr[length];
		printf("%d ", temp);
		HeapSort(arr, length-1);
		HeapOut(arr, length-1);
	} else {
		printf("%d ", arr[1]);
		return;
	}
}

int main(int argc, char * argv[])
{
	int num[20];
	//初始化
	initArr(num, 20);
	//堆排序
	HeapSort(num, 20);	
	//输出堆排序
	HeapOut(num, 20);
	
	return 0;
}
