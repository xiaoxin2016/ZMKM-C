//
//  main.c
//  6.25
//
//  Created by Merck Liu on 2016/10/25.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
    {
        double sum=1.0,t=1;
        int n;
        scanf("%d",&n);
        
        int i;
        for (i=1;i<=n; i++)
        {
            t/=i;
            sum+=t;
        }
        
        printf("e=%16.10f\n",sum);
        
        return 0;
    }
