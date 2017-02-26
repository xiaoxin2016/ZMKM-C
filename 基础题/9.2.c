//
//  main.c
//  9.2
//
//  Created by Merck Liu on 2016/11/21.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

void Fun(int *p)
{
    int x=0,m,i=1;
    while (*p)
    {
        m=*p%10;
        if(m%2)
        {
            x+=m*i;
            i*=10;
        }
        *p/=10;
    }
    
    *p=x;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
