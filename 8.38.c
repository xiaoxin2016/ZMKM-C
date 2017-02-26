//
//  main.c
//  tj6.15
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main()
{
    int y,m,d,x;
    scanf("%d %d",&y,&x);
    
    for (m=1;m<=12;m++)
    {
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12) //31天的月份
        {
            for (d=1;d<=31;d++)
            {
                if(d==13&&x==5)
                    printf("%d/%d/%d\n",y,m,d);
                x++;
                if(x==8) //保证每周只有7天
                    x-=7;
                
            }
        }
        
        if(m==4||m==6||m==9||m==11)    //30天的月份
        {
            for (d=1;d<=30;d++)
            {
                if(d==13&&x==5)
                    printf("%d/%d/%d\n",y,m,d);
                x++;
                if(x==8) //保证每周只有7天
                    x-=7;
            }
        }
        
        //二月的特殊判断
        if(m==2)
        {
            if(((y%4==0&&y%100!=0)||y%400==0))  //判断闰年成立
            {
                for(d=1;d<=29;d++)
                {
                    if(d==13&&x==5)
                        printf("%d/%d/%d\n",y,m,d);
                    x++;
                    if(x==8) //保证每周只有7天
                        x-=7;
                }
            }
            else
            {
                for(d=1;d<=28;d++)
                {
                    if(d==13&&x==5)
                        printf("%d/%d/%d\n",y,m,d);
                    x++;
                    if(x==8) //保证每周只有7天
                        x-=7;
                }
            }
            
        }
    }
    return 0;
}
