//
//  main.c
//  6.6
//
//  Created by Merck Liu on 2016/10/18.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    //input
    double x1;
    scanf("%lf",&x1);
    
    double x0;
    
    do {
    x0=x1;
    x1=cos(x0);
    }while(fabs(x0-x1)>=0.000001);
    
    printf("x=%lf\n",x1);
    
        
    
    return 0;
}
