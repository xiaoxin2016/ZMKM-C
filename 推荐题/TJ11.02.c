//
//  main.c
//  tj11.2
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

void Fun(int *a,int n,int *k)
{
    int max=0;
    for (int i=0; i<n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
            *k=i;
        }
    }
}

int main( )
{
    int a[10], k ,i;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    Fun(a, 10, &k) ;
    printf("%d,%d\n", k, a[k]) ;
    return  0;
}
