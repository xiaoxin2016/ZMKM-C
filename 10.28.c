//
//  main.c
//  10.28
//
//  Created by Merck Liu on 2016/11/26.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp (const char *s, const char *c)
{
    return *(char *)s - *(char *)c;
}

int main(int argc, const char * argv[]) {
    char s[100];
    char c[100];

    scanf("%s%s",s,c);
    
    qsort(s, strlen(s), sizeof(char), cmp);
    qsort(c, strlen(c), sizeof(char), cmp);

    if(strcmp(s,c)==0)
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
}
