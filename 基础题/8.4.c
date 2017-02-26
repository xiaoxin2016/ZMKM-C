//
//  main.c
//  8.4
//
//  Created by Merck Liu on 2016/11/4.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>


long long fact(int n)
{
    if(n==0)
        return 1;
    return n*fact(n-1);
}


long long comb(int m, int k) {
    unsigned long long p;
    p=fact(m)/(fact(k)*fact(m-k));
    return p;
}

int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        for (int j=i;j+1;j--)
        {
            printf("%6lld",comb(i, j));
        }
        putchar('\n');
    }
    return 0;
}
