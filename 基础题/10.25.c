//
//  main.c
//  10.25
//
//  Created by Merck Liu on 2016/11/25.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int n,i,j,count=0;
    scanf("%d",&n);
    getchar();
    
    char s[100][100];
    for (i=0; i<n; i++)
    {
        gets(s[i]);
    }

    for (i=0; i<n; i++)
    {
        int count=1;
        for (j=0; j<n; j++)
        {
            if(j!=i&&strcmp(s[i], s[j])==0)
            {
                memset(s[j], 0, strlen(s[j]));
                count++;
            }
        }
        
        if(count==1)
            memset(s[i], 0, strlen(s[i]));
    }
    
    for (i=0; i<n; i++)
    {
        if(strcmp(s[i],"")!=0)
            count++;
    }
    
    
    printf("%d\n",count);
    return 0;
}
