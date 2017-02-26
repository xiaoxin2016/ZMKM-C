//
//  main.c
//  7.7
//
//  Created by Merck Liu on 2016/11/3.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int Fun(int n)
{
    int d,e=1,m=0;
    while(n!=0)     //数字不为0则走循环
    {
        d=n%10;    //最后一位数开始取值
        if(d%2==0)     //如果是偶数
        {
            m=d*e+m;      //最终变量m等于原来的数字本身加上这位的数值乘其位数（多少个10相乘）
            e=e*10;     //位数+1(多乘一个10)
        }
        n=n/10;    //舍弃最后一位继续
    }
    return m;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
