//
//  main.c
//  10.14
//
//  Created by Merck Liu on 2016/11/23.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char s[30];
    int i,flag=1;
    
    gets(s);
    if (isalpha(s[0])||s[0]=='_')
    {
        for (i=1; i<strlen(s); i++)
            if (isalnum(s[i])||s[i]=='_')
                continue;
        else
        {
            flag=0;
            break;
        }
    }
    else
        flag=0;
    
    
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
}
