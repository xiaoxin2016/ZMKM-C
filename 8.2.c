//
//  main.c
//  8.2
//
//  Created by Merck Liu on 2016/11/11.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#define N 7

int main(int argc, const char * argv[]) {
    int a,b,sum;
    scanf("%d%d",&a,&b);
    
    sum=a+b;
    
    if(sum>0&&sum<1000)
        printf("%d",sum);
    else
    {
        //负数转为正
        if (sum<0)
        {
            sum=-sum;
            putchar('-');
        }

        int s[N+5],i=0,j;
        
        //倒序这个数字的每一个数
        while(1)
        {
            s[i]=sum%10;
            i++;
            sum/=10;
            if(sum==0)
                break;
        }
        
        for(j=i-1; j>=0; j--)
        {
            printf("%d",s[j]);
            if(j%3==0&&j!=0)
                putchar(',');
        }
    }
    putchar('\n');
    return 0;
}
