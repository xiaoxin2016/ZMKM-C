//
//  main.c
//  7.8
//
//  Created by Merck Liu on 2016/11/3.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int fun(int n)
{
    int i,flag=0;
    for(i=2;i<n;i++)
    {
        if (n%i==0)
            break;
    }
     if(n==i)
     {
         flag=1;
     }
    return flag;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
