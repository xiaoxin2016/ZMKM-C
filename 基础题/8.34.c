//
//  main.c
//  8.34
//
//  Created by Merck Liu on 2016/11/15.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    int i,j,a[10000]={2},k=1;
    for (i=3; i<=n; i++)
    {
        for (j=2; j<sqrt(i); j++)
        {
            if(i%j==0)
                break;
        }
        if(j>sqrt(i))
            a[k++]=i;
    }
    
    printf("%d\n",k);
    
    for (i=0; i<k; i++)
    {
        if (i)
            putchar(' ');
        printf("%d",a[i]);
    }
    putchar('\n');
    return 0;
}
