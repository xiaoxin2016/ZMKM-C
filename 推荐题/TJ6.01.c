//
//  main.c
//  tj6.01
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

long long jc(int n)
{
    if(n==0)
        return 1;
    return n*jc(n-1);
}


int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    printf("%d!=%lld\n",n,jc(n));
    return 0;
}
