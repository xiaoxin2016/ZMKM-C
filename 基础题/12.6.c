//
//  main.c
//  12.6
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include  <string.h>
#include <stdio.h>
typedef struct
{
    int num;
    char name[9];
    float score[3];
} STU;
void show(STU tt)
{
    int i;
    printf("%d %s : ", tt.num, tt.name);
    for(i = 0; i < 3; i++)
        printf("%5.1f", tt.score[i]);
    printf("\n");
}
void fun(STU *ss, float a)
{
    int i;
    for(i = 0; i < 3; i++)
    /**********found**********/
        ss->score[i] *= a;
}
int main(   )
{
    STU std = { 1, "Zhanghua", 76.5, 78.0, 82.0 };
    float a;
    scanf("%f", &a);
    /**********found**********/
    fun(&std, a);
    show(std);
    return 0;
}
