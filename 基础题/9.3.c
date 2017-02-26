//
//  main.c
//  9.3
//
//  Created by Merck Liu on 2016/11/21.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

void Fun(double a,double *p)
{
    *p=(int)(a*100+0.5)/100.0;
}

int main(int argc, const char * argv[]) {
    double a;
    double h;
    scanf("%lf",&a);
    Fun(a, &h);
    printf("The result:%lf\n",h);
    return 0;
}
