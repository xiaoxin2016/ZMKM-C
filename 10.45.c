//
//  main.c
//  10.45
//
//  Created by Merck Liu on 2016/11/29.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char s[100];
    gets(s);
    
    for (int i=1; i<strlen(s); i++)
    {
        printf("%c",s[i]);
    }
    
    printf("%c\n",s[0]);
    return 0;
}
