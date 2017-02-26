//
//  main.c
//  tj10.05
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    unsigned long long m=1;
    int n;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        m*=2;
    }
    m-=1;
    printf("%llu\n",m);
    return 0;
}
