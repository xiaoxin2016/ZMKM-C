//
//  main.c
//  8.21
//
//  Created by Merck Liu on 2016/11/11.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int n,x,a[100];
    scanf("%d%d",&n,&x);
    
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    for (int i=0; i<n; i++)
    {
        if(x==a[i])
        {
            printf("%d\n",i);
            exit(0);
        }
    }
    printf("Not Found\n");
    
    
    return 0;
}
