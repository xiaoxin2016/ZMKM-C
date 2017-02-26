//
//  main.c
//  10.13
//
//  Created by Merck Liu on 2016/11/22.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) \
{
    int n,i,j,t;
    scanf("%d",&t);
    
    for (i=0; i<t; i++)
    {
        char s[1000]="";
        scanf("%d%s",&n,s);
        int count=1;
        for (j=0; j<n; j++)
        {
            if(s[j]==s[j+1])
                count++;
            else
            {
                printf("%d%c",count,s[j]);
                count=1;
            }
        }printf("\n");
    }
    return 0;
}
