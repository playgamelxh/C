//
//  pointer.c
//  learn
//
//  Created by lxh on 16/8/4.
//  Copyright © 2016年 lxh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

char * getMemory1(char *p, int num);
void getMemory2(char **p, int num);

int main (int argc, char * argv[])
{
//    printf("This is pointer!\n");
//    printf("%lu\n", sizeof(void *));
//    
//    int i = 10;
//    int *p = &i;
//    *p = 0;
//    printf("%d---%d\n", i, *p);

//    int a[5] = {1, 2, 3, 4, 5};
//    int *ptr = (int *)(&a+1);
//    int *c   = (int *)(&a);
//    printf("%d---%d---%d---%d\n", *(a+1), *(ptr-1), *c, (int)ptr);
//    printf("%d---%d---%d", (int)a, (int)&a, (int)(&a+1));
    
//    char * str = "ABCDEFGHIJKL";
//    int * p = (int *)str;
//    printf("%c---%c---%c\n", *str, *(str+1), *(char *)(p+2));
    
//    char ch = 'a';
//    int a = (int)ch;
//    printf("%d--%c\n", a, ch);
//    
//    int add = 123456;
//    int * p = (int *)add;
//    printf("%d----%d---%d\n", add, (int)p, sizeof(&add));

//    #define PI 3.14
//    int a = PI;
//    printf("%d---%d\n", a, PI);
    
//    char * str = "abcd";
//    printf("%s\d", str);
//    *str = "efgh";
//    printf("%s\n", str);
//    str[2] = "C";
//    printf("%s\n", str);
    
//    char* a = "abcd";
//    char* b = "efgh";
//    a[0] = 'i';
////    printf("%s\n", b);
//    puts(b);
    
//    int i = 1;
//    int *p = &i;
//    int **pp = &p;
//    printf("%d---%d---%d\n", i, *p, **pp);
    
    //ABCDE FGHIJ KLMNO PQRST
//    char a[5] = {'A', 'C', 'B', 'D'};
//    char (*p3)[5] = &a;
//    char (*p4)[5] = a;
//    printf("%c---%c---%c---%c\n", a[0], a[1], a[2], a[3]);
//    printf("%c---%c---%c---%c\n", p3[1], p4, p3+1, p4+1);
    
//    struct Test
//    {
//        int Num;
//        char *pcName;
//        short sDate;
//        char cha[2];
//        short sBa[4];
//    }*p;
//    printf("%x----%x----%x----%x\n", p, p+0x1, p+0x2, (unsigned long)p+0x1);
    
//    int a[4] = {1, 2, 3, 4};
//    int *ptr1 = (int *)(&a+1);
//    int *ptr2 = (int *)((int)a+4);
//    printf("%x----%x----%x\n", ptr1[-1], ptr2, a);
    
//    int a[5][5];
//    int (*p)[4];
//    p = a;
//    printf("%d-----%d------%d\n", &p[4][2]-&a[4][2], &a[4][2], &p[4][2]);
    
//    int a[2];
//    printf("%d---%d---%d----%d\n", &a[0], &a[1], &a[1]-&a[0]);
//    
//    int i = (int)(&a[0]);
//    int j = (int)(&a[1]);
//    printf("%d----%d----%d\n", i, j, j-i);
    
//    int i = 1;
//    int *p = &i+1;
//    printf("%d----%d----%d\n", &i, p, p-&i);
    
//    int a[5];
//    int *p = &a + 1;
//    printf("%d----%d\n", &a, p);
    
    char *str1, *str2 = NULL;
    str1 = getMemory1(str1, 10);
    strcpy(str1, "hello");
    printf("%s\n", str1);
    free(str1);
    printf("%s\n", str1);
    
    printf("%s\n", str2);
    getMemory2(&str2, 10);
    strcpy(str2, "helloworld");
    printf("%s\n", str2);
    free(str2);
    printf("%s\n", str2);
    
    return 0;
}

char * getMemory1(char *p, int num)
{
    p = (char *)malloc(num*sizeof(char));
    return p;
}

void getMemory2(char ** p, int num)
{
    *p = (char *)malloc(num*sizeof(char));
}
