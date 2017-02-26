//
//  main.c
//  8.3
//
//  Created by Merck Liu on 2016/11/4.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int i,j;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf(" 1");
        }
        for (j=1;j<=(n-i);j++)
        {
            printf(" %d",j+1);
        }
        putchar('\n');
    }
    return 0;
}
