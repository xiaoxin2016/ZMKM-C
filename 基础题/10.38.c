//
//  main.c
//  10.38
//
//  Created by Merck Liu on 2016/11/27.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int mul(char a[],char b[],int s[])
{
    int i,j;
    for (i=0; i<strlen(a); i++)
        for (j=0; j<strlen(b); j++)
            s[i+j+1]+=(a[i]-'0')*(b[j]-'0');
    for (i=strlen(a)+strlen(b)-1; i>=0; i--)
    {
        if (s[i]>=10)
        {
            s[i-1]+=s[i]/10;
            s[i]%=10;
        }
    }
    return strlen(a)+strlen(b);
}

int main(int argc, const char * argv[]) {
    char s1[150],s2[150];
    int i,s[250]={0};
    
    gets(s1);
    gets(s2);
    
    int len=mul(s1, s2, s);
    
    for (i=0; i<len; i++)
    {
        if (s[i]!=0)
            break;
    }
    
    for (;i<len; i++)
        printf("%d",s[i]);
    
    putchar('\n');
    return 0;
}
