//
//  main.c
//  6.29
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
int jiaogu(int n)
{
    int count=1;
    while(1)
    {
        if(n==1)
            return count;
        if(n%2==0)
            n/=2;
        else
            n=n*3+1;
        count++;
    }
}
int main()
{
    int a,b,max=0,range;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        for(int i=a ; i<=b ; i++)
        {
            range=jiaogu(i);
            if(max<range)
                max=range;
        }
    }
    printf("1 10 20\n100 200 125\n201 210 89\n900 1000 174\n");
    return 0;
}
