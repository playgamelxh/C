#include<stdio.h>

//初始化指针
int initB(int **a, int n);
//指针赋值
void initC(int **a, int n);

int main(void) {
    puts("Hello World!");
    
    //整形指针
    int m = 3;
    int *a = (int *)malloc(sizeof(int *)*m);
    for(int i=0; i<m; i++) {
        a[i] = i*i; 
    }
    for(int i=0; i<m; i++) {
        printf("%d\n", a[i]);
    }
    free(a);
    printf("=================\n");
    //参数传递
    int n = 3;
    int *b = (int *)malloc(sizeof(int *)*n);
    int c = initB(&b, n);
    for(int i=0; i<n; i++) {
        printf("%d\n", b[i]);
    }
    printf("=================\n");
    //传递参数
    int t = 3;
    int *p = NULL;
    initC(&p, t);
    for(int i=0; i<n; i++) {
        printf("%d\n", p[i]);
    }
    
    return 0;
}
int initB(int **b, int n)
{
    for(int i=0; i<n; i++) {
        *(*b+i) = i*i;
    }
    return 0;
}
void initC(int **a, int n)
{
    int *t = (int *)malloc(sizeof(int *)*n);
    for(int i=0; i<n; i++){
        t[i] = i*i;
    }
    *a = t;
    for(int i=0; i<n; i++) {
        printf(" %d ", *(*a+i));
        *(*a+i) += 1;
        printf(" %d\n", *(*a+i));
    }
}
