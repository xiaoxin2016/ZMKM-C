//
//  main.c
//  8.41
//
//  Created by Merck Liu on 2016/11/15.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int w,n,a[100],i,j,count;
    scanf("%d%d",&w,&n);
    
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    //冒泡法排序实现从小到大排序
    int temp= 0; //中间变量
    for(i=0;i<n;i++) //进行n次循环
    {
        for(j=i+1;j<n;j++) //循环比较剩余的变量
        {
            if(a[i] > a[j]) //如果前面一个数比后面数大，交换两个数的值
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    //下方核心算法来自《程序设计与问题求解》
    for (count=0,i=0,j=n-1;i<j;)
    {
        if(a[i]+a[j]<=w)
        {
            i++;
            j--;
        }
        else
            j--;
        count++;
    }
    
    if(i==j)
        count++;
    
    printf("%d\n",count);
    
    
    return 0;
}
