//
//  main.c
//  11.2
//
//  Created by Merck Liu on 2016/11/29.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#define N 1000

#include <string.h>
#include <ctype.h>
void Fun(char s[],char t[])
{
    int cnt=0;
    for (int i=0; i<strlen(s); i++)
        if (s[i]%2!=0&&i%2!=0)
        {
           t[cnt]=s[i];
           cnt++;
        }
    t[cnt]='\0';    //新字符串一定加结束标志
}

int main()
{
    char s[N + 5], t[N + 5];
    scanf("%s", s);
    Fun(s, t);
    printf("%s\n", t);
    return 0;
}

