//
//  main.c
//  10.39
//
//  Created by Merck Liu on 2016/11/27.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int idcard(char s[])
{
    int i,sum=0;
    int a[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char b[]={"10X98765432"};
    
    for (i=0; i<=16; i++)
    {
        if (isdigit(s[i]))
            return 0;
    }
    
    if (!isdigit(s[i])&&(toupper(s[i])!='X'))
        return 0;
    
    for (i=0; i<=16; i++)
        sum+=(s[i]-'0')*a[i];
    
    if(b[sum%11]==s[17])
        return 1;
    else
        return 0;
}

int main()
{
    char s[20];
    scanf("%s",s);
    if (idcard(s))
        printf("Valid\n");
    else
        printf("Invalid\n");
}
