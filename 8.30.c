//
//  main.c
//  8.30
//
//  Created by Merck Liu on 2016/11/15.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int n,x,y[100],i,sum=0;
    scanf("%d",&n);
    
    for (i=0; i<n; i++)
        scanf("%d%d",&x,&y[i]);
    
        int temp= 0; //中间变量
        
        //冒泡法排序实现从小到大排序
        for(int i=0;i<n;i++) //进行n次循环
        {
            for(int j=i+1;j<n;j++) //循环比较剩余的变量
            {
                if(y[i] > y[j]) //如果前面一个数比后面数大，交换两个数的值
                {
                    temp = y[i];
                    y[i] = y[j];
                    y[j] = temp;
                }
            }
        }
    
    for (i=0; i<n; i++)
        sum+=abs(y[i]-y[n/2]);

    printf("%d\n",sum);
        return 0;
}
