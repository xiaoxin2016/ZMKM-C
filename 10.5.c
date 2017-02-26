//
//  main.c
//  10.5
//
//  Created by Merck Liu on 2016/11/22.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    int flag=0,digit=0,a[10],i,n=0;
    char b[51];
    gets(b);
    for(i=0;i<strlen(b);i++)
    {
        //如果是数字，则走循环
        while((b[i]>='0')&&(b[i]<='9'))
        {
            flag=1;
            digit=digit*10+(b[i]-'0');
            i++;
        }
        
        //不是数字进行判断，是否有数字存在，如果存在，清空变量们；
        if(flag==1)
        {
            a[n]=digit;
            n++;
            digit=0;
            flag=0;
        }
    }
    
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
