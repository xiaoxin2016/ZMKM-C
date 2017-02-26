//
//  main.c
//  8.13
//
//  Created by Merck Liu on 2016/11/8.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int y,x;
    scanf("%d %d",&y,&x);
    
    int i,j;
    int a[30][10];
    
    for (i=0; i<y; i++)
    {
        for (j=0; j<x; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    double sumy[30]={0};
    int sumx[10]={0};
    
    for (j=0; j<x; j++)
    {
        for (i=0; i<y; i++)
        {
            sumy[j]+=a[i][j];
        }
        printf(" %.2f",(sumy[j]/y));
    }
    putchar('\n');
    
    for (i=0; i<y; i++)
    {
        for (j=0; j<x; j++)
        {
            sumx[i]+=a[i][j];
        }
        printf("%d",sumx[i]);
        putchar('\n');
    }
    
    
    
    return 0;
}
