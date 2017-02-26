//
//  main.c
//  tj8.01
//
//  Created by Merck Liu on 2016/11/15.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
   
    int num[100],sorce[100],bak[100],find,i=0,j,k;
    while(1)
    {
        scanf("%d%d",&num[i],&sorce[i]);
        if (num[i]<0||sorce[i]<0)
            break;
        bak[i]=sorce[i];
        i++;
    }
    
    scanf("%d",&find);
    
    //冒泡法排序实现从大到小排序
    int temp= 0; //中间变量
    for(j=0;j<i;j++) //进行10次循环
    {
        for(k=j+1;k<i;k++) //循环比较剩余的变量
        {
            if(bak[j] < bak[k]) //如果前面一个数比后面数大，交换两个数的值
            {
                temp = bak[j];
                bak[j] = bak[k];
                bak[k] = temp;
            }
        }
    }
    
    for(j=0; j<i; j++)
    {
        printf("%d",bak[j]);
        if(j<i-1)
            putchar(' ');
        if(j==i-1)
            putchar('\n');
    }
    
    for (j=0; j<i; j++)
    {
        if (num[j]==find)
        {
            printf("%d %d\n",num[j],sorce[j]);
            exit(0);
        }
    }
    printf("not find!\n");
    
    
    return 0;
}
