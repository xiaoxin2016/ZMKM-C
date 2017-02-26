//
//  main.c
//  tj8.08
//
//  Created by Merck Liu on 2016/11/15.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50][50],b[50];
    int t,n,i,j;
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        for(j=1;j<n-1;j++)
        {
            if(a[i][j]>a[i][j-1]&&a[i][j]>a[i][j+1])  //定义最大值
            {
                b[i]++;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}
