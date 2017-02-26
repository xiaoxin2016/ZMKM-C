//
//  main.c
//  8.29
//
//  Created by Merck Liu on 2016/11/15.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,i,j,a[100];
    scanf("%d",&n);
    
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    int temp= 0; //中间变量
    
    //冒泡法排序实现从小到大排序
    for(i=0;i<n;i++) //进行10次循环
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
    
    int b[100],c[100],k=0;
    j=0;
    for(i=0;i<n;i++) //循环输出排序以后的结果
    {
        if(i%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
    }
    
    for(i=0; i<j; i++)
        printf("%d ",b[i]);
    for(i=k-1; i>=0; i--)
    {
        printf("%d",c[i]);
        if(i!=0)
            putchar(' ');
        if(i==0)
            putchar('\n');
        }
    
    return 0;
}
