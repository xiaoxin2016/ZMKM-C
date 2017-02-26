//
//  main.c
//  tj7.02
//
//  Created by Merck Liu on 2016/11/3.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

void fun(int n,int *month,int *day)
{
    int i,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(i = 1;i < 13;i ++)
    {
        n -= a[i];
        if(n < 0)
        {
            *month = i;
            break;
        }
    }
    *day = n + a[i];
}


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
