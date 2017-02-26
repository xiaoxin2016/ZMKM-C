//
//  main.c
//  7.13
//
//  Created by Merck Liu on 2016/11/3.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

long long int Deposit (int day)
{
    long long int sum=0,t=1;
    for(int i=1; i<=day; i++)
    {
        sum+=t;
        t*=2;
    }
    return sum;
}

int Withdraw (int a, int b)
{
    return a*b;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
