//
//  main.c
//  8.11
//
//  Created by Merck Liu on 2016/11/8.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x,y;
    scanf("%d%d",&x,&y);
    
    int n[10][10];
    int i,j;
    int max;
    int bjx,bjy;
    //记录数值
    for (i=0; i<y; i++)
    {
        for (j=0; j<x; j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
    
    //数值大小比较
    max=n[0][0];
    bjx=0,bjy=0;
    
    for (i=0; i<y; i++)
    {
        for (j=0; j<x; j++)
        {
            if (n[i][j]>max)
            {
                max=n[i][j];
                bjx=i;
                bjy=j;
            }
            
        }
    }
    printf("%d %d %d\n",max,bjx,bjy);
    return 0;
}
