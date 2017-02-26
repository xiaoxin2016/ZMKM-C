//
//  main.c
//  7.9
//
//  Created by Merck Liu on 2016/11/3.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>


double GetSum (int n)
{
    double t=1;
    double sum=1;
    for (int i=1; i<=n; i++)
    {
        t/=i;
        sum+=t;
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
