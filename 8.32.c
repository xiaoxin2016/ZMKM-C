//
//  main.c
//  8.32
//
//  Created by Merck Liu on 2016/11/15.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n,t,x,i;
    scanf("%d",&n);
    
    int a[10]={0};
    while(n--)
    {
        scanf("%d",&t);
        while(1)
        {
            x=t%10;
            a[x]++;
            t/=10;
            if(t==0)
                break;
        }
        
    }
    
    int max=a[0];
    for(i=1; i<10; i++)
    {
        if (a[i]>max)
            max=a[i];
    }
    printf("%d\n",max);
    
    for(i=0; i<10; i++)
    {
        if (a[i]==max)
            printf("%2d",i);
    }
    putchar('\n');
    
    return 0;
}
