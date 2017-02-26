//
//  main.c
//  6.22
//
//  Created by Merck Liu on 2016/10/21.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    //input
    int h,j,k;
    scanf("%d",&h);
    
    int t;    //定义正方形区域
    t=2*h-2;
    
    for (j=0;j<=t;j++) //定义行数
    {
        for (k=0;k<=t;k++)  //定义单行最大字符量
        {
            printf(((k==j)||(k==t-j))?"*":" ");
            
            /* 
             k==j   左上角定义
             k==t-j   右上角定义：总行数-缩进格数 
             确实是定义的2h-2 6个数字，但是从0开始，所以总共7个格子。
             最终定义的时候根据6来减缩进，就避免了好多问题和尴尬。  
            */
        }
        printf("\n");
    }
    
    return 0;
}
