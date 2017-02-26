//
//  main.c
//  10.33
//
//  Created by Merck Liu on 2016/11/26.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    
    char s[100][100],c[100][100];
    
    for (i=0; i<m; i++)
    {
        scanf("%s",s[i]);
    }
    
    for (i=0; i<n; i++)
    {
        scanf("%s",c[i]);
    }
    
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            if (strcmp(s[i],c[j])==0)
            {
                printf("YES\n");
                break;
            }
        }
        if(j==n)
            printf("NO\n");
    }

    return 0;
}
