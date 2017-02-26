//
//  main.c
//  tj11.5
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

void Fun(int x,int aa[], int *n)
{
    int count=0;
    for (int i=1; i<=x; i+=2)
    {
        if (x%i==0)
        {
            aa[count]=i;
            count++;
        }
    }
    *n=count;
}

int main( )
{
    int  x, aa[1000], n, i ;
    scanf("%d", &x) ;
    Fun(x, aa, &n ) ;
    for( i = 0 ; i < n ; i++ )
        printf(" %d", aa[i]) ;
    printf("\n") ;
    return 0;
}
