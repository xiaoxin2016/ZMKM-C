//
//  main.c
//  tj10.10
//
//  Created by Merck Liu on 2016/11/29.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    char s[1000];
    gets(s);
    
    for(int i=0; i<strlen(s); i++)
    {
        s[0]=toupper(s[0]);
        if (s[i]==' '||s[i]=='\t'||s[i]=='\r'||s[i]=='\n')
            s[i+1]=toupper(s[i+1]);
    }
    puts(s);
    return 0;
}
