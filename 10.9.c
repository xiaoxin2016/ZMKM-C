//
//  main.c
//  10.9
//
//  Created by Merck Liu on 2016/11/22.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    getchar();
    
    while (n--)
    {
        char s[105]="";
        gets(s);
        int i,j,k;
        for (i=0; i<strlen(s); i++)
        {
            for (j=0; j<strlen(s); j++)
            {
                if (s[j]==' ')
                    break;
                if (j-i>3)
                    printf("%c",toupper(s[i]));
                else
                {
                    if (j-i==3)
                    {
                        char cmp[105]="";
                        int cnt=0;
                        for (k=i; k<3+i; k++)
                            cmp[cnt++]=tolower(s[k]);
                        cmp[cnt]='\0';
                        if (!strcmp(cmp,"for")==0 && !strcmp(cmp,"the")==0 && !strcmp(cmp,"and")==0)                            )
                            printf("%c",toupper(cmp[0]));
                    }
                        
                }i=j;
                
            }
        }putchar('\n');
    }
    return 0;
}
