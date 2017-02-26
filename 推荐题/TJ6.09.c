//
//  main.c
//  tj6.09
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    int t;
    t=2*n-1;
    
    //上半部分
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==1||j==(n-(i-1)))
                putchar('*');
            if(j<(n-(i-1)))
                putchar(' ');
        }
        putchar('\n');
    }

    //中间
    printf("*\n");
    
    //下半部分
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==1||j==(i+1))
                putchar('*');
            if(j<(i+1))
                putchar(' ');
        }
        putchar('\n');
    }
}
