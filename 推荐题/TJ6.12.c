//
//  main.c
//  tj6.12
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i=1,j,k;
    scanf("%d",&n);
    while(i<=n)
    {
        j=1;
        while(j<=n-i)
        {
            printf(" ");
            j++;
        }
        printf("*");
        if(i==1)
        {
            for(k=1; k<=n-2; k++)
                printf("*");
        }
        else if(i==n)
        {
            for(k=1; k<=3*n-4; k++)
                printf("*");
        }
        else
        {
            for(k=1; k<=n+2*i-4; k++)
                printf(" ");
        }
        printf("*");
        j=1;
        while(j<=n-i)
        {
            printf(" ");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
