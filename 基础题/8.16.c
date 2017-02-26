//
//  main.c
//  8.16
//
//  Created by Merck Liu on 2016/11/11.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,t,a[100];
    scanf("%d%d",&n,&t);
    
    int i;
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=t+1; i<n; i++)
    {
        printf("%d",a[i]);
        putchar(' ');
    }
    
    for(i=0; i<t+1; i++)
    {
        printf("%d",a[i]);
        if(i<t)
        putchar(' ');
    }
    putchar('\n');
    
    return 0;
}
