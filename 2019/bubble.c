#include<stdio.h>

//输入整形数组
void print_r(int a[], int len);
//选择排序
void chose_sort(int a[], int len);

//冒泡排序
void bubble_sort(int a[], int len);

int main(int argc, char * argv[])
{
	printf("请输入数字，回车结束单个数字输入，输入0结束全部输入:\n");
	int a[20];
	int i = 0;
	int d = 0;
	while(1){
		scanf("%d", &d);
		if (d == 0) {
			printf("结束输入\n");
			break;
		} else {
			printf("输入为:%d\n", d);
			a[i] = d;
			i++;
		}
	}
	
	printf("输入数据为：");
	for(int j=0;j<i;j++) {
		printf("%d ", a[j]);
	}
	printf("\n");
	printf("长度为:%lu %lu\n", sizeof(a), sizeof(int));

	/*
	//选择排序
	chose_sort(a, i);
	printf("选择排序后:\n");
	print_r(a, i);
	*/
	
	//冒泡排序
	bubble_sort(a, i);
	printf("冒泡排序后:\n");
	print_r(a, i);	

	return 0;
}

//冒泡排序
void bubble_sort(int a[], int len)
{
	for(int i=0; i<len; i++) {
		//标记，如果一轮下来没有任何交换，代表已经不需要排序了
		int flag = 0;
		for(int j=0; j<len-i-1; j++) {
			if(a[j] > a[j+1]) {
				a[j] = a[j]^a[j+1];
				a[j+1] = a[j]^a[j+1];
				a[j] = a[j]^a[j+1];
				flag = 1;
			} 
		}
		if (flag == 0) {
			break;
		}
	}
}

//选择排序
void chose_sort(int a[], int len)
{
	/*
	for(int j=0;j<len;j++) {
		printf("%d ", a[j]);
	}
	printf("\n");
	*/
	for(int j=0; j<len; j++) {
		for (int i=j+1; i<len; i++) {
			if (a[i] < a[j]) {
				a[i] = a[i]^a[j];
				a[j] = a[i]^a[j];
				a[i] = a[i]^a[j];
			}	
		}
	}
}

//打印数组
void print_r(int a[], int len)
{
	for(int i=0; i<len; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}
