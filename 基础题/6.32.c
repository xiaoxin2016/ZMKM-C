//
//  main.c
//  6.32
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    while (scanf("%d%d",&a,&b),a&&b)
    {
        int water=a*b;
        int sum=water/(a+b);
        int remain=water-(a+b)*sum;
        sum*=2;
        if (remain>0)
        {
            sum+=1;
            if (remain>b)
                sum++;
        }
        printf("%d\n",sum);
    }
}
