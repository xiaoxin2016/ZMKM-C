//
//  main.c
//  tj10.11
//
//  Created by Merck Liu on 2016/11/29.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char c,str[100][100];
    int flag = 1;
    int i = 0,j = 0;
    scanf("%c",&c);
    while(c != '\n')
    {
        if(c != ' ')
        {
            flag = 1;
            str[i][j++] = c;
        }
        else if(flag == 1)
        {
            str[i][j] = '\0';
            flag = 0;
            i++;
            j = 0;
        }
        scanf("%c",&c);
    }
    if(flag == 1)
        str[i][j] = '\0';
    else
        i--;
    while(i>0)
    {
        printf("%s ",str[i--]);
    }
    printf("%s",str[0]);
    printf("\n");
    
    return 0;
    
}
