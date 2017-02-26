//
//  main.c
//  tj8.03
//
//  Created by Merck Liu on 2016/11/15.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s[4][4];
    int i,j,n;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&s[i][j]);
        }
    }
    scanf("%d",&n);
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i>=j)
            {
                s[i][j]=s[i][j]*n;
            }
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%4d",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
