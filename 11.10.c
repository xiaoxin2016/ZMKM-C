//
//  main.c
//  11.10
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define N 1000

void Fun(char *str,char ch)
{
    char s[100];
    int k=0;
    for (int i=0; i<strlen(str); i++)
        if (str[i]!=ch)
            s[k++]=str[i];
    s[k]=0;
    strcpy(str,s);
            
}

int main()
{
    char str[N + 5], ch;
    gets(str);
    scanf("%c", &ch);
    Fun(str, ch);
    printf("%s\n", str);
    return 0;
}
