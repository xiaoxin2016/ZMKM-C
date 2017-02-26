//
//  main.c
//  10.20
//
//  Created by Merck Liu on 2016/11/25.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    getchar();
    for (int i=0; i<n; i++)
    {
        char s[110]="";
        gets(s);
        int j;
        for (j=0; j<strlen(s); j++)
        {
            if (!isdigit(s[j]))
                printf("%c",s[j]);
        }
        putchar('\n');
    }

    return 0;
}
