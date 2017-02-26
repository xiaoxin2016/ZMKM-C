//
//  main.c
//  8.35
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int L,M,a[1010]= {0};
    int p,q;
    scanf("%d%d",&L,&M);
    for(int i=0 ; i<=L ; i++)
        a[i]=1;
    for(int i=0 ; i<=M ; i++)
    {
        
        scanf("%d%d",&p,&q);
        for(int j=p ; j<=q ; j++)
            a[j]=0;
    }
    int number=0;
    for(int i=0 ; i<=L ; i++)
        if(a[i]==1)
            number++;
    printf("%d\n",number);
}
