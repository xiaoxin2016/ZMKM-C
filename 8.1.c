//
//  main.c
//  8.1
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
    
    int t[1000],i;
    for (i=1;i<=n;i++)
    {
        scanf("%d",&t[i]);
    }
    
    int high,help,sum;
    scanf("%d %d",&high,&help);
    sum=high+help;
    
    int count=0;
    for (i=1;i<=n;i++)
    {
        if(t[i]<=sum)
            count++;
    }
    
    printf("%d\n",count);
    return 0;
}
