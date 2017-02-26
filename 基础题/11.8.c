//
//  main.c
//  11.8
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

#include <string.h>
int Fun(char *s)
{
    int i,n=0;
    i=((s[0]=='-')?1:0);
    for ( ;i<strlen(s); i++)
    {
        n=n*10+(s[i]-'0');
    }
    
    if (s[0]=='-')
        n=-n;
    
    return n;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
