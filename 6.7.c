//
//  main.c
//  6.7
//
//  Created by Merck Liu on 2016/10/18.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    int i;
    for (i=1;i<=n;i++)
    {
        int xi;
        scanf("%d",&xi);
        
        if (xi%2!=0)
            printf("0 0\n");
        else
            printf("%d %d\n",xi/4+xi%4/2,xi/2);
    }
    return 0;
}
