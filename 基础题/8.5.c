//
//  main.c
//  8.5
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

    //屏幕打印
    int i,j,n;
    scanf("%d",&n);
    
    for (i=n-1 ; i+1 ; i--)
    {
        for (j=1; j<=2*(n-1-i); j++)  //空格的输出原则我没看懂。
            putchar(' ');
        for (j=0; j<=i; j++)
                printf("%4lld",comb(i, j));
        putchar('\n');
    }
    
    return 0;
}
