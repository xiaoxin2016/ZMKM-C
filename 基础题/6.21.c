//
//  main.c
//  6.21
//
//  Created by Merck Liu on 2016/10/21.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    int i,t;
    for (i=0;i+1<=n;i++)
    {
        for (t=0; t+1<=i; t++)
        {
            printf(" ");
        }
        for (t=0;t+1<=n;t++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
