//
//  main.c
//  learn
//
//  Created by lxh on 16/7/29.
//  Copyright © 2016年 lxh. All rights reserved.
//

#include <stdio.h>
//#include "pointer.c"
#include "mem.c"

static int j;
void fun1 (void)
{
    static int i = 0;
    i++;
    printf("i:%d\n", i);
}
void fun2 (void)
{
    j = 0;
    j++;
    printf("j:%d\n", j);
}

int mainb(int argc, const char * argv[])
{
    
    //static
    for(int k=0; k<10; k++) {
//        fun1();
//        fun2();
    }
    //sizeof
    int *p = NULL;
    printf("%d---%d\n", sizeof(p), sizeof(*p));
    int a[100];
    printf("%d--%d--%d--%d\n", sizeof(a), sizeof(a[100]), sizeof(&a), sizeof(&a[0]));
    
    union
    {
        int i;
        char a[2];
    }*b,u;
    b = &u;
    b->a[0] = 0x39;
    b->a[1] = 0x38;
    printf("%d---%d\n", b->i, 0x3839);
    
    union check
    {
        int i;
        char ch;
    } c;
    c.i = 1;
    printf("%d\n", c.ch);
    
    typedef struct student
    {
    } Stu_st,*Stu_pst;
    char*s="abc//dfd www";
    
    int *pp = 10;
    
    int y = 20/(*pp);
    
    int i = 3;
    //printf("%d\n" (++i)+(++i)+(++i));
    
    return 0;

}


