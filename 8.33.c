//
//  main.c
//  8.33
//
//  Created by Merck Liu on 2016/11/15.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    int i,a[10000],b[10000],t;
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        t=a[i];
        b[t]++;
        printf("%d",b[t]);
        if(i<n-1)
            putchar(' ');
        if(i==n-1)
            putchar('\n');
    }
    
    return 0;
}
