//
//  main.c
//  12.1
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <math.h>

typedef struct
{
    double x,y;
}point2d;

double fun(point2d p1,point2d p2)
{
    double a,b;
    a=(p1.x-p2.x)*(p1.x-p2.x);
    b=(p1.y-p2.y)*(p1.y-p2.y);
    return sqrt(a+b);
}

int main()
{
    point2d p1,p2;
    double e;
    scanf("%lf%lf",&p1.x,&p1.y);
    scanf("%lf%lf",&p2.x,&p2.y);
    e=fun(p1, p2);
    printf("%lf\n",e);
    return 0;
}
