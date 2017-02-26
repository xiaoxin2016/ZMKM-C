//
//  main.c
//  8.31
//
//  Created by Merck Liu on 2016/11/15.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i,j,a[10],k;
    
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
 
    for (i=0; i<10; i++)
    {
        for (j=0,k=1; j<10;j++)
        {
            if(a[j]<a[i])
                k++;
        }
        printf("%3d",k);
    }
    putchar('\n');
    return 0;
}
