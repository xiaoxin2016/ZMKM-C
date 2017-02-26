//
//  main.c
//  6.10
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,w,k,flag = 1;
    scanf("%d",&n);
    for(m=0; m<=n; m++)
    {
        for(w=0; w<=n; w++)
        {
            for(k=0; k<=n; k++)
            {
                if(m+w+k==n&&m*50+w*20+k*1==1200)
                {
                    printf("%d %d %d\n",m,w,k);
                    flag = 0;
                }
            }
        }
    }
    if(flag)
    {
        printf("No output\n");
    }
    
    return 0;
}
