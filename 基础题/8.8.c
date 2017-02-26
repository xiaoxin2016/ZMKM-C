//
//  main.c
//  8.8
//
//  Created by Merck Liu on 2016/11/5.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n;
    scanf("%d",&n);
    
    int N[100];   //兼容C89随便写个数吧，C99表示C89好傻；
    double sum=0;
    double ave;
    
    for (int i=1; i<=n; i++)
    {
        scanf("%d",&N[i]);
        sum+=N[i];
    }
    
    int max=0,min=100,flagmax,flagmin;
    for (int i=1; i<=n; i++)
    {
        if(N[i]>max)
        {
            flagmax=i;
            max=N[i];
        }
        
        if(N[i]<min)
        {
            flagmin=i;
            min=N[i];
        }
    }
    
    
    sum=sum-N[flagmin]-N[flagmax];
    ave=sum/(n-2);
    printf("%.2f\n",ave);
    
    return 0;
}
