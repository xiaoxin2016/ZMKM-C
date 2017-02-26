//
//  main.c
//  10.23
//
//  Created by Merck Liu on 2016/11/25.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char s[100],c[100],t;
    gets(s);
    gets(c);
    t=getchar();
    
    for (int i=0; i<strlen(s); i++)
    {
        if(s[i]==t)
            for (int j=0; j<strlen(c); j++)
                printf("%c",c[j]);
        printf("%c",s[i]);
    }
    
    putchar('\n');
    
    return 0;
}
