//
//  main.c
//  10.29
//
//  Created by Merck Liu on 2016/11/26.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    getchar();
    
    char s[100][100],t[100];
    for (int i=0; i<n; i++)
    {
        gets(s[i]);
    }
    
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (strcmp(s[i], s[j])>0)
            {
                strcpy(t,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],t);
            }
        }
    }
    
    for (int i=0; i<n; i++)
    {
        puts(s[i]);
    }
    return 0;
}
