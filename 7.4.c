//
//  main.c
//  7.4
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

long long Facto(int n)
{
    if(n==0)
        return 1;
    return n*Facto(n-1);
}


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
