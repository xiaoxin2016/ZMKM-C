//
//  main.c
//  7.12
//
//  Created by Merck Liu on 2016/11/3.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int Fun(int n)
{
    if(n==1||n==2)
        return 1;
    else
    {
        if(n%2==0)
            return (Fun(n-1)-Fun(n-2));
        else
            return (Fun(n-1)+Fun(n-2));
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
