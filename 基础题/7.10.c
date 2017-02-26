//
//  main.c
//  7.10
//
//  Created by Merck Liu on 2016/11/3.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int GetSum (int n, int m)
{
    int i,sum=0;
    for (i=n; i<=m; i++)
    {
        sum+=i;
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
