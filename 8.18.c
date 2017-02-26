//
//  main.c
//  8.17   (8.18题目和8.17描述不同，但算法相同)
//
//  Created by Merck Liu on 2016/11/11.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    int n,a[100],i;
    scanf("%d",&n);
    
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (i=n-1; i+1; i--)
    {
        printf("%d",a[i]);
        if(i>0)
            putchar(' ');
    }
    putchar('\n');
    
    return 0;
}
