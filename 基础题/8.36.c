//
//  main.c
//  8.36
//
//  Created by Merck Liu on 2016/11/15.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    int l[120],i,j,count=0;
    
    for (i=0; i<=n; i++)
    {
        l[i]=1;
    }
    
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            if(i%j==0)
                l[i]*=-1;
        }
        if(l[i]==-1)
            count++;
    }
    
    printf("%d\n",count);
    
    for (i=1; i<=n; i++)
    {
        if(l[i]==-1)
            printf("%4d",i);
    }
    
    putchar('\n');

    return 0;
}
