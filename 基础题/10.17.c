//
//  main.c
//  10.17
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char s1[85],s2[85],out[85];
    gets(s1);
    gets(s2);
    int n=0,j;
    for(int i=0 ; s1[i]!='\0' ; i++)
    {
        for(j=0 ; s2[j]!='\0' ; j++)
            if(s1[i]==s2[j])
                break;
        if(s2[j]=='\0')
            out[n++]=s1[i];
    }
    out[n]='\0';
    puts(out);
    return 0;
}
