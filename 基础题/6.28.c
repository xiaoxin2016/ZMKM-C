//
//  main.c
//  6.28
//
//  Created by Merck Liu on 2016/10/25.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    while (n!=1)
    {
    if (n%2==0)
    {
        printf("%d/2=%d\n",n,n/2);
        n=n/2;
    }
    else
    {
        printf("%d*3+1=%d\n",n,3*n+1);
                n=3*n+1;
    }
    }
    return 0;
}
