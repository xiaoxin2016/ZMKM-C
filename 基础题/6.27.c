//
//  main.c
//  6.27
//
//  Created by Merck Liu on 2016/10/25.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int js(int n)
{
    int count=0;
    while(n/5>0)
    {
        count+=n/5;
        n=n/5;
    }
    return count;
}



int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    printf("The number of 0 in the end of %d! is:%d.\n",n,js(n));
    return 0;
}
