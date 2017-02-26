//
//  main.c
//  8.19
//
//  Created by Merck Liu on 2016/11/11.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
    int y,x;
    scanf("%d%d",&y,&x);
    
    int i,j,a[100][100],b[100][100];
    for (i=0; i<y; i++)
    {
        for (j=0; j<x; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for (i=0; i<y; i++)
    {
        for (j=0; j<x; j++)
        {
            b[j][i]=a[i][j];
        }
    }

    for (j=0; j<x; j++)
    {
        for (i=0; i<y; i++)
        {
            printf("%d",b[j][i]);
            if(i<(y-1))
                putchar(' ');
        }
        putchar('\n');
    }

    return 0;
}
