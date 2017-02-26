//
//  main.c
//  6.23
//
//  Created by Merck Liu on 2016/10/25.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    
        //input
        int h,j,k;
        scanf("%d",&h);
    
        for (j=-h+1;j<=h-1;j++) //定义行数
        {
            for (k=1;k<=2*h-1-abs(j);k++)  //定义单行最大字符量
                //2h-1 定义总行数
            {
                printf("%s",k>abs(j)?"*":" ");
            }
            printf("\n");
        }
        
        return 0;
    }

    
