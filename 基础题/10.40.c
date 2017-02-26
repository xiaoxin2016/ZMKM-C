//
//  main.c
//  10.40
//
//  Created by Merck Liu on 2016/11/26.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char s[200];
    
    while(gets(s))
    {
        int i,j;
        for (i=0; i<strlen(s); i++)
            printf("%c",s[i]);
        for (j=strlen(s)-2; j>=0; j--)
            printf("%c",s[j]);
        putchar('\n');
    }
    return 0;
}
