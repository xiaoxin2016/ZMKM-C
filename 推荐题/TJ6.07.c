//
//  main.c
//  tj6.07
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()

{
    
    int a,b,c,d;
    for(a=1; a<=100; a++)    //1yuan
    for(b=1; b<=100; b++)     //5jiao
    for(c=1; c<=100; c++)     //1jiao
    
    if(20*a==15*b&&20*a==18*c)  //硬币厚度相等
    {
    d=(a*10+b*5+c)%100;
    
    if(d!=0)    //不能兑换成若干10元纸币
    break;
                    
    d=(a*10+b*5+c)/10;  //转换为以元为单位
    printf("%d,%d,%d,%d\n",c,b,a,d);
                    
    }
    
    return 0;
    
}
