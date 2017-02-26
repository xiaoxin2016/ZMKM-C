//
//  main.c
//  6.5
//
//  Created by Merck Liu on 2016/10/18.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double a;
    scanf("%lf",&a);
    
    double t;
    t=sqrt(a);
    
    printf("The square root of %.2f is %.5f\n",a,t);
}
