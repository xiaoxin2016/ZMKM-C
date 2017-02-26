//
//  main.c
//  tj11.1
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

#include <string.h>
#include <ctype.h>
int Fun(char *s,int *t)
{
    *t=0;
    for (int i=0; i<strlen(s); i++)
        if (isdigit(s[i]))
            (*t)++;
}

int main()
{
    char  s[80];
    int t;
    gets(s);
    Fun(s,&t);
    printf("%d\n",t);
    return 0;
}
