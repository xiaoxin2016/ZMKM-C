//
//  main.c
//  tj6.06
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,a,b=0,c=0;
    scanf("%d",&n);
    
    for(a=1; a<n; a++)
    {
        if(n%a==0)   //如果a是n的一个因数
        {
            b=a+b;      //b等于这个因数与其原有因数之和
        }
    }
    
    for(a=1; a<b; a++)
    {
        if(b%a==0)      //如果因数之和还能除尽a
        {
            c=c+a;        //c等于这个因数与其原有因数之和
        }
    }
    
    if(n==c)    //当两边的和相等的时候
    {
        printf("%d-%d\n",c,b);
    }
    else
    {
        printf("No output\n");
    }

    return 0;
}
