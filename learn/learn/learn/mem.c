//
//  mem.c
//  learn
//
//  Created by lxh on 16/8/6.
//  Copyright © 2016年 lxh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[])
{
    printf("This is mem!\n");
    
    struct student
    {
        char *name;
        int score;
    } *stu;
    
    stu = (struct student *)malloc(sizeof(struct student));
    char *a = "abcdefg";
    stu->name = a;

    char b[10];
    strcpy(b, a);
    printf("%s\n", b);
    
    stu->score = 3;
    printf("%d----%s----%d\n", stu->score, stu->name, sizeof(stu));
    
//    char *p = (char *)malloc(100);
//    strcpy(p, "hellp");
//    printf("%s\n", p);
//    free(p);
//    printf("%s\n", p);
    
    return 0;
}