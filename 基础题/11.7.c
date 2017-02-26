//
//  main.c
//  11.7
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int prime(int n)
{
    for (int i=2; i<(int)sqrt(n)+1; i++)
    {
        if (n%i==0)
            return 0;
    }
    return 1;
}


int main(int argc, const char * argv[]) {
    int m,k,cnt=0;
    int a[100];
    scanf("%d%d",&m,&k);
    
    for (int i=m+1; cnt<k; i++)
    {
        if (preme(i))
            a[cnt++]=1;
    }
    
    for (int i=0; i<k; i++)
    {
        if (i)
            putchar(' ');
        printf("%d",a[i]);
    }
    
    putchar('\n');
    return 0;
}
