//
//  main.c
//  12.3
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char s[250];
    gets(s);
    
    for (int i=0; i<strlen(s); i++)
    {
        if (s[i]=='a')
        {
            s[i]='d';
            continue;
        }
        
        if (s[i]=='b')
        {
            s[i]='z';
            continue;
        }
        
        if (s[i]=='z')
        {
            s[i]='a';
            continue;
        }
        if (s[i]=='d')
        {
            s[i]='b';
            continue;
        }
    }
    
    puts(s);
    
    return 0;
}
