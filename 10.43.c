//
//  main.c
//  10.43
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char s[73];
    int n[26]= {0};
    gets(s);
    for(int i=0 ; s[i]!='\0' ; i++)
        if(isupper(s[i]))
            n[s[i]-'A']++;
    int max=n[0];
    for(int i=0 ; i<26 ; i++)
        if(n[i]>=max)
            max=n[i];
    for(int i=max ; i>0 ; i--)
    {
        int flag=0;
        for(int j=0 ; j<26 ; j++)
        {
            if(flag==1)
                printf(" ");
            flag=1;
            if(n[j]>=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    int flag=0;
    for(int j=0 ; j<26 ; j++)
    {
        if(flag==1)
            printf(" ");
        flag=1;
        printf("%c",'A'+j);
    }
    printf("\n");
    return 0;
}
