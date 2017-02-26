//
//  main.c
//  tj11.6
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define N 80
int fun(char *s, char *t)
{ int n;
    char *p , *r;
    n=0;
    while ( *s )
    { p=s;
        /*********found**********/
        r=t;
        while(*r)
            if(*r==*p) { r++; p++; }
            else break;
        /*********found**********/
        if(*r=='\0')
            n++;
        s++;
    }
    return n;
}
int main()
{
    char a[N],b[N]; int m;
    gets(a);
    gets( b );
    m=fun(a, b);
    printf("m=%d\n",m);
    return 0;
}
