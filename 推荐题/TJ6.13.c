//
//  main.c
//  tj6.13
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a,c,sum=0,sum_b=0;
    scanf("%lf %lf",&a,&c);
    for(int k=1,b=1; k>0 ; k+=2)
    {
        double s1=1,s2=1;
        for(int i=1 ; i<=k ; i++)
        {
            s1*=a;
            s2*=i;
        }
        sum+=b*s1/s2;
        if(fabs(sum-sum_b)<c)
        {
            printf("%.6f\n",sum);
            return 0;
        }
        sum_b=sum;
        b=-b;
    }
    return 0;
}
