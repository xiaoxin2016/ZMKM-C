//
//  main.c
//  6.15
//
//  Created by Merck Liu on 2016/10/19.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    //确定输入数字的位数
    int ws=1;
    while (pow(10,ws)<=n)
    {
        ws++;
    }
    
    //取平方后ws位数字
    int t,temp;
    t=pow(n, 2);
    temp=t%(int)(pow(10,ws));
    
    //output
    printf((temp==n)?"Yes\n":"No\n");
    
    return 0;
}
