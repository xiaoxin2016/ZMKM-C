//
//  main.c
//  7.3
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

#include <math.h>
int PrimeJudge (int n)
{
    for (int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
