//
//  main.c
//  tj11.3
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//


#include <stdio.h>
#define N 81

#include <string.h>
void Fun(char *a)
{
    char b[N];
    int i;
    for (i=1; i<strlen(a); i++)
    {
        b[i-1]=a[i];
       
    }
    b[i-1]=a[0];
    b[i]=0;
    
    strcpy(a,b);
}

int main( )
{
    char a[N];
    gets(a);
    Fun(a);
    printf("%s\n",a);
    return 0;
}
