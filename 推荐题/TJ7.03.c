//
//  main.c
//  tj7.03
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int Func(int n)
{
    int a[30],b[30],i;
    a[0]=1;
    a[1] =2;
    for( i =2;i<n;i++)
    {
        a[i] =a[i-1] +a[i-2];
    }
    return a[n-1];
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
