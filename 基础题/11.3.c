//
//  main.c
//  11.3
//
//  Created by Merck Liu on 2016/11/29.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>
#include <string.h>
#define N 1000

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
#include <ctype.h>
void Fun(char s[])
{
    int count=0,cnt=0;
    char c[100]="",t[200]="";
    for (int i=0; i<strlen(s); i++)
    {
        if(isdigit(s[i]))
        {
            c[count]=s[i];
            count++;
        }
        else
        {
            t[cnt]=s[i];
            cnt++;
        }
    }
    c[count]='\0';
    t[cnt]='\0';
    strcat(t, c);
    int i;
    for (i=0; i<strlen(t); i++)
    {
        s[i]=t[i];
    }
    s[i]=0;
}





/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

int main()
{
    char s[N + 5];
    gets(s);
    Fun(s);
    puts(s);
    return 0;
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
