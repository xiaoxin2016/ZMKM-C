//
//  main.c
//  6.31
//
//  Created by Merck Liu on 2016/10/28.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a,b,count,i;
    count=0;
    
    int n;
    scanf("%d",&n);
    
    for (a=2;a<=(n/2);a++)
    {
        for (i=2;i<a;i++)  //对a进行判定，如果不是a素数则跳过
        {
            if (a%i==0)
            {
                break;
            }
        }
        if(a==i)   //a不能被自己以下的数字整除 => a是素数
        {
            b=n-a;   //将剩下的部分单独提取出来
            for(i=2;i<b;i++)
            {
                if (b%i==0)     //b不是质数则直接扔掉
                {
                    break;
                }
            }
            if (b==i)      //b不能被自己以下的数字整除 => b是素数
            {
                count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
