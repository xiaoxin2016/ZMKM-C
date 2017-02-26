//
//  main.c
//  10.8
//
//  Created by Merck Liu on 2016/11/22.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    char s[50];
    gets(s);
    int i;
    
    for (i=0; i<strlen(s); i++)
    {
        if((s[i]+4>='A'&&s[i]+4<='Z')||(s[i]+4>='a'&&s[i]+4<='z'))
                s[i]=s[i]+4;
        else
            s[i]=s[i]-22;
            
    }
    
    
    for (i=0; i<strlen(s); i++)
    {
        printf("%c",s[i]);
    }
    putchar('\n');
    
    return 0;
}
