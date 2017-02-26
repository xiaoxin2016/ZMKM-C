//
//  main.c
//  7.5
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>



#include <math.h>

long long jc(int n)
{
    if(n==0)
        return 1;
    return n*jc(n-1);
}


double fun(double x, int n)
{
    double sum=0;
    for (int i=0;i<=n;i++)
    {
        sum+=(pow(x,i)/jc(i));
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
