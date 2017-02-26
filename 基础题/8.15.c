//
//  main.c
//  8.15
//
//  Created by Merck Liu on 2016/11/10.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    int i,j,a[100][100];
    
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    int sum=0;
    
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (i==j||j==(n-i-1))
                continue;
            else
                sum+=a[i][j];
        }
    }
    
    int min=10000;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if(i==j)
            {
                if(a[i][j]<min)
                    min=a[i][j];
            }
        }
    }
    
    for (i=0; i<n; i++)
    {
        sum+=a[i][i]-min;
        sum+=a[i][n-i-1]-min;
    }
    
    printf("%d\n",(sum-1)*2);
    
    return 0;
}
