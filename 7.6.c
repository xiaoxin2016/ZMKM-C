//
//  main.c
//  7.6
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <math.h>

double fun(double d)
{
    d = d*pow(10,2);
    d += 0.5;
    d = (long)d;
    d = d/pow(10,2);
    return d;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
