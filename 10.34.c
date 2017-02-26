//
//  main.c
//  10.34
//
//  Created by Merck Liu on 2016/11/26.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int n,i,count=0;
    scanf("%d",&n);
    
    char s[100][100],c[100];
    
    for (i=0; i<n; i++)
    {
        scanf("%s",s[i]);
    }
    
    scanf("%s",c);
    
    for (i=0; i<n; i++)
    {
        if(strcmp(c,s[i])==0)
            count++;
    }
    
    printf("%d\n",count);
    
    return 0;
}
