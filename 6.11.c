//
//  main.c
//  6.11
//
//  Created by Merck Liu on 2016/10/19.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //定义变量
    int s,i,x,n,e;
    int six,nine;
    int cnt=0;
    
    for(s=1;s<=9;s++)
    {
        for (i=0;i<=9;i++)
        {
            for(x=0;x<=9;x++)
            {
                for(n=1;n<=9;n++)
                {
                    for(e=0;e<=9;e++)
                    {
                        six=x+10*i+100*s;
                        nine=e+10*n+100*i+1000*n;
                        if(3*six==2*nine)
                            cnt++;
                    }
                }
            }
        }
    }
    printf("cnt=%d\n",cnt);
    return 0;
}
