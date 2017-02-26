//
//  main.c
//  10.09
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
    int n=0,i=0,j=0;
    scanf("%d",&n);
    getchar();
    for(int z=0 ; z<n ; z++)
    {
        char a[105]="";
        gets(a);
        for(i=0 ; a[i]!='\0' ; i++)
        {
            for(j=i ; a[j]!='\0' ; j++)
                if(a[j]==' ')
                    break;
            if(j-i>3)
                printf("%c",toupper(a[i]));
            else if(j-i==3)
            {
                char l[4]="";
                int x=0;
                for(int k=i ; k<i+3 ; k++)
                    l[x++]=tolower(a[k]);
                l[x]='\0';
                if(strcmp(l,"and")!=0
                   &&strcmp(l,"the")!=0
                   &&strcmp(l,"for")!=0)
                    printf("%c",toupper(l[0]));
            }
            i=j;
        }
        printf("\n");
    }
    return 0;
}
