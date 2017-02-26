//
//  main.c
//  tj6.10
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,i,j,k,m,n;
    scanf("%d",&h);
    
        //第一行输出
        for(i=1; i<=(2*h-1); i++)
        {
            printf("*");
        }
        printf("\n");
    
       //其他行输出
        for(j=1; j<=(h-2); j++)
        {
            //先输出空格
            for(k=1; k<=j; k++)
            {
                printf(" ");
            }
            //输出星号
            printf("*");
            
            //空格继续
            for(m=1; m<=(2*h-3-2*j); m++)
            {
                printf(" ");
            }
            //星号继续
            printf("*");
            printf("\n");  //换行
            
        }
        //最后单个星号的居中输出
        for(n=1;n<=(h-1);n++)
        {
            printf(" ");
        }
        printf("*\n");
        return 0;
    
}
