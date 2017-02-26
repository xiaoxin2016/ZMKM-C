//
//  main.c
//  10.27
//
//  Created by Merck Liu on 2016/11/25.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char s[200],c[200];
    gets(s);
    int flag,j=0;

    flag=0;
    
    for (int i=strlen(s)-1; i>=0; i--)
    {
        c[j++]=s[i];
    }
    
    c[j]='\0';
    
    
    if (strcmp(s, c)==0)
        printf("YES\n");
    else
        printf("NO\n");
    
        return 0;
}
