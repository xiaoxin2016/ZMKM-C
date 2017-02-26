//
//  main.c
//  tj6.08
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
    
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=t;j++)
        {
            if(j<=i||(t-j)<i)
                putchar('*');
            else
                putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}
