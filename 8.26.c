//
//  main.c
//  8.26
//
//  Created by Merck Liu on 2016/11/14.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    long long int n;
    int a[10],i,j,t;
    scanf("%lld",&n);
    
    int count=0;
    for (i=0; n>0; i++)
    {
        a[i]=n%10;
        n/=10;
        count++;
    }
    
    
    for(i=1; i<count; i++)
    {
        for (j=0; j<count-i; j++)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    
    for(i=0; i<count; i++)
        printf("%d",a[i]);
    
    putchar('\n');
    
    return 0;
}
