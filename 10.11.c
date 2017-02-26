//
//  main.c
//  10.11
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char c[2000];
    int n[10]={0};
    gets(c);
    for(int i=0 ; c[i]!='\0' ; i++)
    {
        if(isdigit(c[i]))
            n[c[i]-'0']++;
    }
    for(int i=0 ; i<10 ; i++)
    {
        if(n[i]!=0)
        {
            printf("%d:%d\n",i,n[i]);
        }
    }
    return 0;
}
