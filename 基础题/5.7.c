//
//  main.c
//  5.7
//
//  Created by Merck Liu on 2016/10/13.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //input
    double x;
    scanf("%lf",&x);
    
    //cal
    double a,b;
    a=2*(x-3)+10;
    b=3*(x-10)+24;
    
    if(x<=3)
        printf("10\n");
    else if(x<=10)
        printf("%.0f\n",a);
    else
        printf("%.0f\n",b);
    
    return 0;
}
