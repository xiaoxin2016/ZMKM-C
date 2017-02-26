//
//  main.c
//  10.22
//
//  Created by Merck Liu on 2016/11/25.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp (const void *p1, const void *p2)
{
    return *(char *)p1 - *(char *)p2;
}

int main(int argc, const char * argv[]) {
    char s1[400],s2[200];
    gets(s1);
    gets(s2);
    strcat(s1, s2);
    qsort(s1, strlen(s1), sizeof(char), cmp);
    puts(s1);
    return 0;
}
