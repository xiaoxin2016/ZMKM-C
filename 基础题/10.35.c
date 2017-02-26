//
//  main.c
//  10.35
//
//  Created by Merck Liu on 2016/11/26.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int n,i;
    scanf("%d",&n);
   
    for (i=0; i<n; i++)
    {
        char s[100];
        scanf("%s",s);
        char *p=strstr(s, "GLB");
        if (p!=NULL)
            printf("YES\n");
        else
            printf("NO\n");
    
    }
    
    return 0;
}
