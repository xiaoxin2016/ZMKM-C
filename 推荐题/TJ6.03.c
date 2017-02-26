
//  main.c
//  tj6.03
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//


#include "stdio.h"

int main()
{
    double s=0.0,h;
    int i;
    scanf("%lf",&h);
    s=h;
    
    for(i=1;i<10;i++)
    {
        s=s+h;
        h=h/2;
    }
    h=h/2;
    
    printf("The total is:%.3lf\n",s);
    printf("The tenth is:%.3lf\n",h);

}
