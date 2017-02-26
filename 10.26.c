//
//  main.c
//  10.26
//
//  Created by Merck Liu on 2016/11/25.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int n,i,j;
    scanf("%d",&n);
    getchar();
    
    char s[200][200];
    for (i=0; i<n; i++)
    {
        gets(s[i]);
    }
    
    for (i=0; i<n; i++)
    {
        int flag=1;
        for (j=0; j<n; j++)
        {
            if (i!=j&&strcmp(s[i], s[j])==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            puts(s[i]);
            break;
        }
    }
    
    return 0;
}
