//
//  main.c
//  tj6.04
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    for (;n;n--)
    {
        int a,b,c,sum;
        scanf("%d %d %d",&a,&b,&c);
        sum=a+b+c;
        printf("%d\n",sum);
    }
    return 0;
}
