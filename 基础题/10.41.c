//
//  main.c
//  10.41
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char s[105];
    for(int k=0 ; k<n ; k++)
    {
        int g=0,l=0,b=0;
        gets(s);
        for(int i=0 ; s[i]!='\0' ; i++)
        {
            if(toupper(s[i])=='G')
                g=1;
            if(toupper(s[i])=='L')
                l=1;
            if(toupper(s[i])=='B')
                b=1;
        }
        if(g==1&&l==1&&b==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
