//
//  main.c
//  tj7.04
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int Func(int m)
{
    int n=1;
    for(int i=2 ; i<m ; i++)
        n*=2;
    return n;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
