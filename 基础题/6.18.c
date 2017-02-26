//
//  main.c
//  6.18
//
//  Created by Merck Liu on 2016/10/20.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    //input
    int m,n,min,max;
    scanf("%d %d",&m,&n);
    
    min=(m>n)?n:m;
    max=(m>n)?m:n;
    
    int temp;
    
    while (min!=0)               //辗转相除 求n和m的最大公约数
    {temp=max%min;
        max=min;
        min=temp;
    }
    
    printf("the greatest common divisor is %d\n",max);
    
    int gbs;
    gbs=n/max*m;
    printf("the least common multiple is %d\n",gbs);
    
    
    
    /*
    
    int c;
    c=(m/min)*n;
    printf("the least common multiple is %d",c);
    
     
     */
    
    
    return 0;
}
