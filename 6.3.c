//
//  main.c
//  6.3
//
//  Created by Merck Liu on 2016/10/18.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //input
    double  z=2,m=1;
    int i,n;
    scanf("%d",&n);
    
    //cal
    double sum,t;
    sum=0;
    for (i=1;i<=n;i++)
    {
        sum+=(z/m);
        t=m;   //定义中间变量记录初始分母，保证通过
        m=z;
        z=t+m;
    }
    
    //output
    printf("sum=%16.10f\n",sum);
    
    return 0;
}
