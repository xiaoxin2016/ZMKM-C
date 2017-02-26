//
//  main.c
//  6.14
//
//  Created by Merck Liu on 2016/10/19.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,p=0,j,k=0;
    scanf("%d",&n);
    
    p=n;
    
    while (p>0)
    {
        j=p%10; //获取个位数字
        p=p/10; //右移一个数字
        k=j+10*k;
    }
    
    if(k==n)
        printf("Yes\n");
    else
        printf("No\n");
    
    return 0;
}
