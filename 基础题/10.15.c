//
//  main.c
//  10.15
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char c[81];
    int i,n;
    scanf("%d",&n);
    getchar();
    for(int j=0 ; j<n ; j++)
    {
        int a=0,A=0,biaodian=0,digit=0,space=0;
        gets(c);
        for(i=0 ; c[i]!='\0' ; i++)
        {
            if(isdigit(c[i]))
                digit=1;
            if(isupper(c[i]))
                A=1;
            if(islower(c[i]))
                a=1;
            if(ispunct(c[i]))
                biaodian=1;
            if(c[i]==' ')
                space=1;
        }
        int sum=0;
        sum=digit+A+a+biaodian+space;
        if(i<6||sum==1)
            printf("Not Safe\n");
        if(i>=6&&sum==2)
            printf("Medium Safe\n");
        if(i>=6&&sum>=3)
            printf("Safe\n");
    }
    return 0;
}
