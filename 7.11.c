//
//  main.c
//  7.11
//
//  Created by Merck Liu on 2016/11/3.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>


int Gcd(int n, int m)
{
    if((m<=n)&&(n%m==0))
    {
        return m;
    }
    else
    {
        if(n<m)
            return Gcd(m,n);
        else
            return Gcd(m,n%m);
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
