//
//  main.c
//  tj8.02
//
//  Created by Merck Liu on 2016/11/15.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[1000][1000],i,j,s=0;
    scanf("%d",&n);
    for(i=0;i<2;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<n;j++)
    {
        s=s+a[0][j]*a[1][j];
    }
    printf("%d\n",s);
    system("pause");
    return 0;
}
