//
//  main.c
//  tj8.04
//
//  Created by Merck Liu on 2016/11/15.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100][100],b[100][100];
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        {
            for(j=0;j<n;j++)
            {
                if(j==0)
                    printf("%d",a[i][j]+b[i][j]);
                else
                    printf(" %d",a[i][j]+b[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
