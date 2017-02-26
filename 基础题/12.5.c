//
//  main.c
//  12.5
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//


#include <stdio.h>
#include <string.h>
struct student
{
    long  sno;
    char  name[10];
    float  score[3];
};
void fun( struct student  *b)
{
    b->sno= 10004;
    strcpy(b->name, "LiJie");
}
int main()
{
    struct student  t = {10002, "ZhangQi", {93, 85, 87}};
    int  i;
    fun(&t);
    printf("No: %ld  Name: %s\nScores:", t.sno, t.name);
    for (i = 0; i < 3; i++)  printf("%6.2f", t.score[i]);
    printf("\n");
    return 0;
}
