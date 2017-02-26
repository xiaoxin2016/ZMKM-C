//
//  main.c
//  8.12
//
//  Created by Merck Liu on 2016/11/8.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x,y;
    scanf("%d%d",&y,&x);
    
    int a[10][10];
    int i,j,sum;
    
    //记录原始数据
    for (i=0; i<y; i++)
    {
        for (j=0; j<x; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    //开始计算
    sum=0;
    for (i=0; i<y; i++)
    {
        for (j=0; j<x; j++)
        {
            if (i==0||j==0||i==y-1||j==x-1)
                sum+=a[i][j];
        }
    }
    
    printf("%d\n",sum);
    
    return 0;
}
