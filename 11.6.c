//
//  main.c
//  11.6
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//
void Fun(char s[])
{
    int i,x=0,y=0;
    char a[N+5];
    for(i=strlen(s)-1 ; i>=0 ; i--)
    {
        if(s[i]!='*')
            break;
        else
            a[x++]=s[i];
    }
    
    for(; i>=0 ; i--)
        if(s[i]!='*')
            a[x++]=s[i];
    a[x]='\0';
    for(i=strlen(a)-1 ; i>=0 ; i--)
        s[y++]=a[i];
    s[y]='\0';
}
