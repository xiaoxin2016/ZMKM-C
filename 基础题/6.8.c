//
//  main.c
//  6.8
//
//  Created by Merck Liu on 2016/10/18.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int i;
    for (i=0;i<n;i++)
    {
        double jl;
        scanf("%lf",&jl);
        double t1,t2;
        t1=jl/1.2;
        t2=27+23+jl/3;
        if (fabs(t1-t2)<1e-5)
            printf("All\n");
        else if(t1>t2)
            printf("Bike\n");
        else
            printf("Walk\n");
    }
    
    return 0;
}
