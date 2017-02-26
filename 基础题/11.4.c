//
//  main.c
//  11.4
//
//  Created by Merck Liu on 2016/11/29.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define N 1000
unsigned long max(unsigned long a,unsigned long b)
{
    return (a>b)?a:b;
}

void Fun(char a[],char b[],char c[])
{
    int i;
    for (i=0; i<max(strlen(a),strlen(b)); i++)
    {
        if (a[i]<=b[i])
            c[i]=b[i];
        else
            c[i]=a[i];
    }
    c[i]=0;
}


         
         
int main()
{
    char a[N + 5], b[N + 5], c[N + 5];
    gets(a);
    gets(b);
    Fun(a, b, c);
    puts(c);
    return 0;
}
